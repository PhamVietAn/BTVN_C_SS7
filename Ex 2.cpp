#include <stdio.h>

int main(){
	int arr[5];
	printf("nhap 5 phan tu vao mang \n");
	for(int i=0; i<5; i++){
		printf("nhap phan tu: ");
		scanf("%d",&arr[i]);
	}
		printf("\nmang duoc nhap la: \n");
		for(int i=0; i<5; i++){
			printf("arr[%d]=%d\n",i,arr[i]);
		}
	
	return 0;
} 
