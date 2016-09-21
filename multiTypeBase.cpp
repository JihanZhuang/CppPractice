/*************************************************************************
    > File Name: multiTypeBase.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月21日 星期三 19时26分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Parent{
	public:
		int a;
		Parent(int x):a(x){

		}
		virtual void print(){
			cout<<a<<endl;
		}
	protected:
	private:
};

class Child:public Parent{
	public:
		int b;
		Child(int y):Parent(y-1){
			this->b=y;
		}
		virtual void print(){
			cout<<b<<endl;
		}
	protected:
	private:
};

int main(){
	Parent *a=new Parent(1);
	Child *b=new Child(2);
	a->print();
	b->print();
	return 1;
}
