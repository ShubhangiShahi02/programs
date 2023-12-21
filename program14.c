//write a program to take a no. from user and print individual digits without loop
#include<stdio.h>
#include<conio.h>
int main(){
	int n,f,m,l,total;
	printf("Enter any three digit number \n");
	scanf("%d",&n);
	
	f=n/100;
	printf("first digit is %d \n",f);
	
	m=(n%100)/10;
	printf("middle digit is %d \n",m);
	
	l=(n%100)%10;
	printf("last digit is %d \n",l);
	
	total=f+m+l;
	printf("sum of all digit is %d \n",total);
}
