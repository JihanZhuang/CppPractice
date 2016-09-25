/*************************************************************************
    > File Name: vector.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月25日 星期日 14时01分57秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> vi(5);
	for(int i=0;i<5;i++){
		vi[i]=i;
	}
	for(int i=0;i<5;i++){
		cout<<vi[i]<<endl;
	}
	return 1;
}
