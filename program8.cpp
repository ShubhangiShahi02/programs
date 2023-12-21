// subtract two number without using subtraction operator
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,sum;
	printf("enter value of a \t");
	scanf("%d",&a);
	printf("enter value of b \t");
	scanf("%d",&b);
	printf("\t\t\t---\n");
	sum= a+ ~b+1;
	printf("\t\t\t%d",sum);
}

