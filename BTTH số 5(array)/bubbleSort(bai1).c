#include <stdio.h>

void bubbleSort(int *arr, int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j + 1];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(){
	int arr[] = {5, 8, 2, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, n);
	
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}
