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
		int y;
		A(int xx){
			x=xx;
			cout<<x<<endl;
			A(x,10);//这里是产生一个匿名对象，并不能对原本的A中的y属性进行初始化
		}
		A(int xx,int yy){
			x=xx;
			y=yy;
		}
};
class B{
	public:
	B():a1(1),a(10),y(100){
	}
	B(int xx,int yy):a1(xx),a(yy){
		y=xx;
	}
	int getY(){
		cout<<y<<endl;
	}
	~B(){
		cout<<"destruct func"<<endl;
	}
	private:
		int y;
		A a;
		A a1;
};
int main(){
	B b1;
	//b1.getY();
	cout<<123<<endl;
	return 1;
}
