#include <stdio.h>

int main(){
	int n, count;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap cac phan tu cua mang: \n");
	for(int i=0; i<n; i++){
		printf("nhap phan tu: ");
		scanf("%d", &arr[i]);
	}
	printf("cac so nguyen to trong mang:\n");
	for(int i=0; i<n; i++){
		if(arr[i]>1){
			count=0;
			for(int j=1; j<=arr[i]; j++){
				if(arr[i]%j==0){
					count++;
				}
			}
			if(count==2){
				printf("arr[%d]=%d\n",i,arr[i]);
			}
		}
	}
}
