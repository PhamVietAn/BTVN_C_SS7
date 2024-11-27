#include <stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap cac phan tu cua mang: \n");
	for(int i=0; i<n; i++){
		printf("phan tu %d: ",i);
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}
