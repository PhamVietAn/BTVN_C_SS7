#include <stdio.h>

int main(){
	int arr[5]={5, 7, 8, 9, 12}, count;
	for(int i=0; i<=5; i++){
		if(arr[i]%2==0){
			printf("%d la so chan\n", arr[i]);
			count++;
		}
	}
	if(count=0){
		printf("khong co so chan nao");
	}
	
	return 0;
}
