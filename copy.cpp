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
		testA(const testA &b){
			this->x=b.x+1;
			this->y=b.y+1;
			cout<<"i am copy construct func!"<<endl;
		}
		~testA(){
			cout<<"i were destoryed!"<<endl;
		}
	protected:
	private:
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
	cout<<a.x<<endl;
	return a;
}
int demo2(){
	testA b(3,4);
	b=demo2func();
	cout<<b.x<<endl;
}
int demo3(){
	testA b=demo2func();
	cout<<b.x<<endl;
}
int main(){
	demo2();
}
