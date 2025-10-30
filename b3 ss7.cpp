#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int so_dao_nguoc=0;
	int i;
	int so_ban_dau;

	printf("Nhap so nguyen n : ");
	scanf("%d",&n);	
	so_ban_dau=n;
	while(n!=0){
		i=n%10;
		so_dao_nguoc=so_dao_nguoc*10+i;
		n=n/10;
	}
	if(so_ban_dau==so_dao_nguoc){
		printf("Day la so doi xung");
	}
	else{
		printf("Khong phai la so doi xung");
	}

}

