#include <stdio.h>
#include <math.h>
int main(){
	int n1,n2;

	do{
		printf("Nhap so nguyen duong n1: ");
		scanf("%d", &n1);
		if(n1<1){
			printf("Nhap lai n1!\n");
		}
	}while(n1<1);

	do{
		printf("Nhap so nguyen duong n2: ");
		scanf("%d", &n2);
		if(n2<1 || n2<n1){
			printf("Nhap lai n2!\n");
		}
	}while(n2<1 || n2<n1);
	printf("\n\nCac so nguyen to tu %d den %d la: \n",n1,n2);
	int demNT = 0;
	for(int i=n1;i<=n2;i++){
		int flag = 1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
		if(flag==1 && i>1){
			demNT++;
			printf("%5d",i);
		}
	}
	printf("\nCo %d so nguyen to",demNT);
}

