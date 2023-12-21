//program to check given number is even or odd
#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("enter number to check the no. is odd or even");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("even number");
	}
	else{
	printf("odd number");
	}
}
