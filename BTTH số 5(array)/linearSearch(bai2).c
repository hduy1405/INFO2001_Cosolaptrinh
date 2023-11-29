#include <stdio.h>

int linearSearch(int *arr, int n, int x){
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			return i;
		}
	}
	return -1;	
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int x = 3;
	
	int index = linearSearch(arr, n, x);
	
	if(index == -1){
		printf("khong tim thay %d trong mang.\n", x);
	}else{
		printf("Tim thay %d o vi tri thu %d trong mang.\n", x, index);
	}
	
	return 0;
}
