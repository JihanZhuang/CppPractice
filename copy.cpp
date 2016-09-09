/*************************************************************************
    > File Name: copy.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月06日 星期二 19时49分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
class testA{
	public:
		int x,y;
		testA(){

		}
		testA(int x,int y){
			this->x=x;
			this->y=y;
			cout<<"i am construct function!"<<endl;
		}
		~testA(){
			cout<<"i were destoryed!"<<endl;
		}
		testA(const testA& b){
			cout<<"123"<<endl;
			this->x=b.x+1;
			this->y=b.y+1;
			cout<<"i am copy construct func!"<<endl;
		}

		
};
int demo1(){
	testA a(1,2);
	testA b=a;
	testA c(a);
	b=a;
	cout<<a.x<<endl;
	cout<<b.x<<endl;
	a.x=10;
	cout<<a.x<<endl;
	cout<<b.x<<endl;
	cout<<c.x<<endl;
	return 1;
}
testA demo2func(){
	testA a(1,2);
	return a;
}
int demo2(){
	testA b(3,4);
	cout<<b.x<<endl;
	b=demo2func();
	cout<<b.x<<endl;
}
int demo3(){
	testA b=demo2func();
	cout<<b.x<<endl;
}
int demo4func(testA p){
	return 1;
}
int demo4(){
	testA a(1,2);
	demo4func(a);
}
int main(){
	demo3();
}
