/*************************************************************************
    > File Name: extendsAndMultiType.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月22日 星期四 09时28分14秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Parent{
	public:
		int *p;
		int i;
		Parent(){
			p=(int *)malloc(sizeof(int)*10);
		}
		virtual ~Parent(){
			if(p!=NULL){
				free(p);
			}
			cout<<"parent destruct"<<endl;
		}
};

class Child:public Parent{
	public:
		int a;
		Child(int x):Parent(){
			a=x;
		}
		~Child(){
			cout<<"child destruct"<<endl;
		}
};

void freeClass(Parent *a){
	if(a!=NULL){
	delete a;
	}
}

int main(){
	Child *a=new Child(10);
	freeClass(a);
	Parent *p=new Parent();
	a++;
	p++;//两者是不同的，a++是+（3*4）,12个字节，而p是父类，是+8个字节，所以如果p=a;p是数组的开头，然后去p++，这样的移动会有错
	return 1;
}
