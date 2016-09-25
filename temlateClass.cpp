/*************************************************************************
    > File Name: temlateClass.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月25日 星期日 09时49分32秒
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>
class test{
	public:
		T getA(){
			return a;
		}
		void setA(T tmp){
			a=tmp;
		}
	private:
		T a;
};
void func(test<char> *p){
	cout<<p->getA()<<endl;
}
int main(){
	test<int> tmp;
	tmp.setA(123);
	cout<<tmp.getA()<<endl;
	test<char> tmp1;
	tmp1.setA('j');
	func(&tmp1);
	return 1;
}
