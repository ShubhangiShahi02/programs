//program to accept student marks in 3 subjects and calculate total percentage
#include<stdio.h>
#include<conio.h>
int main(){
	int maths, phy, chm;
	int tot,per;
	printf("Enter marks according to subjects for calcualte percentage\n");
	printf("Maths \t\t");
	scanf("%d",&maths);
	printf("Physics \t");
	scanf("%d",&phy);
	printf("Chemistry \t");
	scanf("%d",&chm);
	
	tot= maths+phy+chm;
	per=tot/3;
	
	printf("====================\n");
	printf("percentage \t %d",per);
}

