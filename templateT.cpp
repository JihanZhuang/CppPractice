/*************************************************************************
    > File Name: templateT.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月24日 星期六 14时23分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a,T &b){
	T c=a;
	a=b;
	b=c;
};

int main(){
	int a=1,b=3;
	mySwap(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	return 1;
}
