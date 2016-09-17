/*************************************************************************
    > File Name: friend_func.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月17日 星期六 14时47分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A{
	public:
		A(int x):a1(x),a2(100){

		}
		int getA1(){
			return this->a1;
		}
		int getA2(){
			return this->a2;
		}
		friend void setA1(A *p,int a1);//声明友员函数
	protected:
	private:
		int a1;
		int a2;
};

void setA1(A *p,int a1){
	p->a1=a1;
}
int main(){
	A test(1);
	cout<<test.getA1()<<endl;
	setA1(&test,10);
	cout<<test.getA1()<<endl;
	return 1;
}
