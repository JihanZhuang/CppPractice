/*************************************************************************
    > File Name: templateT.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月24日 星期六 14时23分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a,T &b){
	T c=a;
	a=b;
	b=c;
}
void pr(int *arr){
	int i=0;
	while(i<10){
		cout<<arr[i]<<endl;
		i++;
	}
}
template<typename T>
int Qsort(T *arr,int low,int high){
	T tmp=arr[low];
	while(low<high){
		while(arr[high]>tmp&&low<high) high--;
		arr[low]=arr[high];
		while(arr[low]<tmp&&low<high) low++;
		arr[high]=arr[low];
	}
	arr[low]=tmp;
	return low;
}
template<typename T>
void mysort(T *arr,int low,int high){
	int mid;
	if(low<high){
	mid=Qsort(arr,low,high);
	mysort(arr,low,mid-1);
	mysort(arr,mid+1,high);
	}else{
		return;
	}
}

int main(){
	int a=1,b=3;
	int arr[]={0,9,8,7,6,5,4,3,2,1};
	mySwap(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	mysort(arr,0,9);
	pr(arr);	
	return 1;
}
