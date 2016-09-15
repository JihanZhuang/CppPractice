/*************************************************************************
    > File Name: fork.c
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月13日 星期二 19时16分00秒
 ************************************************************************/
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int pid;
	char *p;
	p=(char *)malloc(sizeof(char)*10);
	p[0]='c';
	p[1]='a';
	p[2]='\0';
	pid=fork();
	if(pid==0){
		while(1){
			printf("i am parent,point is %p,str is %s\n",p,p);
			sleep(2);
		}
	}else{
		while(1){
			printf("i am child,point is %p,str is %s\n",p,p);
			p[0]='w';
			p[1]='k';
			sleep(2);
		}
	}
	return 1;
}
