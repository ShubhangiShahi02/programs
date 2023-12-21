//program to find biggest no. of given three number
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("To check the greater no. \n");
	printf("------------------------\n");
	
	printf("Enter the number a : \t");
	scanf("%d",&a);
	
	printf("Enter the number b : \t");
	scanf("%d",&b);
	
	printf("Enter the number c : \t");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d is greater number",a);
	}
	
	else if(b>a && b>c){
		printf("%d is greater number",b);
	}
	
	else if(c>a && c>b){
		printf("%d is greater number",c);
	}
	
	else{
		printf("all numbers are equal");
	}
}
