/*************************************************************************
    > File Name: operator=.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月11日 星期日 10时05分05秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;

class test{
	public:
		int x,y;
		char *p;
		test(){
			p=(char *)malloc(sizeof(char)*10);
		}
		test(int xx,int yy){
			x=xx;
			y=yy;
			p=(char *)malloc(sizeof(char)*10);
		}
		test(const test &obj){
			//必须注意这里检测原来是否已经有申请内存，进行释放，否则容易造成内存泄漏
			if(p!=NULL){
				free(p);
			}
			x=obj.x;
			y=obj.y;
			p=(char *)malloc(sizeof(char)*10);
		}
		//重载对象赋值时的等号符，让其行为如同初始化时的copy construct函数
		void operator=(const test &obj){
			//有可能test obj;定义时p已经有内存申请了，这里需要先释放
			if(p!=NULL){
				free(p);
			}
			x=obj.x;
			y=obj.y;
			p=(char*)malloc(sizeof(char)*10);
		}
		~test(){
			if(p!=NULL){
				free(p);
			}
		}
	protected:
	private:
};
void testOperate(){
	test obj1(3,4);
	test obj2=obj1;
	test obj3;
	obj3=obj2;
}
int main(){
	return 1;
}
