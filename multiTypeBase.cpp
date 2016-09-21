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
		 void print(){
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
class Child1:public Child{
	public:
		int c;
		Child1(int z):Child(z-2){
			this->c=z;
		}
		void print(){
			cout<<c<<endl;
		}
};
void howToPrint(Parent *p){
	p->print();
}
int main(){
	Parent *a=new Parent(1);
	Child *b=new Child(2);
	Child1 *c=new Child1(3);
	b->print();
	howToPrint(a);
	howToPrint(b);
	howToPrint(c);
	b->Parent::print();
	return 1;
}
