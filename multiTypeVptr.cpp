/*************************************************************************
    > File Name: multiTypeVptr.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月21日 星期三 20时17分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
class test{
	public:
		int a;
		void print(){
			cout<<a<<endl;
		}
};
class test1{
	public:
		int a;
		virtual void print(){
			cout<<a<<endl;
		}
};
int main(){
	cout<<sizeof(test)<<endl;
	cout<<sizeof(test1)<<endl;
	return 1;
}
