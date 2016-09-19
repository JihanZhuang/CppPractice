/*************************************************************************
    > File Name: multiExtends.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月19日 星期一 20时03分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Base1{
	public:
		int b1;
		Base1(int x):b1(x){

		}
	protected:
	private:
};
class Base2{
	public:
		int b1;
		Base2(int x):b1(x-1){

		}
	protected:
	private:
};
class C :public Base1,public Base2{
	public:
		C(int x):Base1(x),Base2(x){

		}
};
int main(){
	C *a=new C(12);
	cout<<a->Base1::b1<<endl;
	cout<<a->Base2::b1<<endl;
	return 1;
}
