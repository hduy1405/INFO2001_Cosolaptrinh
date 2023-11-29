#include <stdio.h>

int binarySearch(int *arr, int n, int x){
	int low = 0;
	int high = n - 1;
	
	while(low <= high){
		int mid = (low + high) / 2;
		
		if(arr[mid] == x){
			return mid;
		}else if(arr[mid] < x){
			
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int x = 3;
	
	int index = binarySearch(arr, n, x);
	if(index == -1){
		printf("Khong tim thay %d trong mang.\n", x);
	}else{
		printf("Tim thay %d o vi tri thu %d trong mang.\n", x, index);
	}
	
	return 0;
}
