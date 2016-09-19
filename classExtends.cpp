/*************************************************************************
    > File Name: classExtends.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月19日 星期一 08时54分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Parent{
	public:
		int a;
		Parent(int x):a(x){
			cout<<"construct Parent"<<endl;
		}
		int b;
		void printP(){
			cout<<"I am parent!"<<endl;
		}
		~Parent(){
			cout<<"destruct Parent"<<endl;
		}
	private:
		int c;

};
class Child:public Parent{
	public:
		Child():Parent(110){
			cout<<"construct child"<<endl;
		}
		void printC(){
			cout<<"I am child!"<<endl;
		}
		~Child(){
			cout<<"destruct child"<<endl;
		}
};

int main(){
	Child *ch=new Child();
	ch->printP();
	delete ch;
	return 1;
}
