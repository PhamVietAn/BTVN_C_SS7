#include <stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap cac phan tu le vao mang\n");
	for(int i=0; i<n; i++){
		do{
			printf("nhap phan tu: ");
			scanf("%d",&arr[i]);
			if(arr[i]%2==0){
				printf("vui long nhap so le\n");
			}
		}while(arr[i]%2==0);
	}
	printf("so phan tu le cua mang: \n");
	for(int i=0; i<n; i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	return 0;
	
}
