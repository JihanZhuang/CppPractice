/*************************************************************************
    > File Name: inBaseConstructNoMultiType.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月21日 星期三 20时36分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

//现象
//实现方法3
//多态的原理 
//

class Parent
{
public:
	Parent(int a = 0)
	{
		print(); //不会形成多态，还没确定vptr的指向，所以直接调用父类的print
		this->a = a;
	}

	 void printAbc()
	{
		printf("父类abc");
	}
	//第一个动手脚的地方 编译器应该对这个虚函数特殊处理。。。。
	virtual void print()
	{
		cout<<"父类函数"<<endl;
	}
protected:
private:
	int a;
};

class Child : public Parent
{
public:
	Child(int b = 0)
	{
		this->b = b;
	}
	void print()
	{
		cout<<"子类函数"<<endl;
	}
protected:
private:
	int b ;
};


int main()
{

	//Parent p1; //在这个地方，，编译器已经提前布局。。。。。给函数有虚函数表的对象，提前加了vptr指针。。
	Child c1;

	return 1;
}
