//program to check given year is leap year or not.
#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("enter year to check the year is leap year or not");
	scanf("%d",&year);
	
	if((year%400==0)||((year%4==0)&&(year%100!=0))){
		printf("Leap year");
	}
	else{
		printf("not a leap year");
	}
}
