#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	
	for(int i=0; i<5; i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]+3);
		}else{
			printf("%d ",arr[i]+2);
		}
	}
	
	return 0;
}
