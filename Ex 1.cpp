#include <stdio.h>

int main(){
	int arr[6]={1, 2, 3, 4, 5, 6,}, count=0;
	for(int i=0; i<6; i++){
		printf("arr[%d]=%d\n",i,arr[i]);
		count++;
	}
	printf("do dai cua mang la %d",count);
} 
