/*************************************************************************
    > File Name: classSameVarAndFunc.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月19日 星期一 09时25分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
class testA{
	public:
		int a;
		void printA(){
			cout<<a<<endl;
		}
};

class testB:public testA{
	public:
		int a;
		void printA(){
			cout<<a<<endl;
		}
};
int main(){
	testB *b=new testB();
	b->a=10;
	b->testA::a=11;
	b->printA();
	b->testA::printA();
}
