#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int inversion=0;
	int i;
	int first_number;
	
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	first_number=n;
	while(n!=0){
		i=n%10;
		inversion=inversion*10+i;
		n=n/10;
	}
	if(first_number==inversion){
		printf("Day la so doi xung");
	}
	else{
		printf("Khong phai la so doi xung");
	}

}

