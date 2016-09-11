/*************************************************************************
    > File Name: multiclassinit.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月11日 星期日 14时29分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A{
	public:
		int x;
		A(int xx){
			x=xx;
			cout<<x<<endl;
		}
};
class B{
	public:
	B():a1(1),a(10){
	}
	B(int xx,int yy):a1(xx),a(yy){
		y=xx;
	}
	private:
		int y;
		A a;
		A a1;
};
int main(){
	B b1;
	return 1;
}
