/*************************************************************************
    > File Name: goods.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月17日 星期六 14时29分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Goods{
	public:
		Goods(int w){
			weight=w;
			total_weight+=w;
		}
		int Weight(){
			return weight;
		}
		static int totalWeight(){
			return total_weight;
		}
		Goods *next;
	protected:
	private:
		int weight;
		static int total_weight;
};
int Goods::total_weight=0;
void purchase(){
	
}
