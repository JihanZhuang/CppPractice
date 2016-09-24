/*************************************************************************
    > File Name: funcPtr.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月24日 星期六 09时44分27秒
 ************************************************************************/

#include<iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}

int test(int (*pf)(int,int)){
	int a=1,b=3;
	return pf(a,b);
}
int main(){
	int i;
	i=test(add);
	cout<<i<<endl;
	int (*p)(int,int)=add;
	i=(*p)(10,1);
	cout<<i<<endl;
	i=p(13,14);
	cout<<i<<endl;
	return 1;
}
