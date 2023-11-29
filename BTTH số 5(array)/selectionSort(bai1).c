#include <stdio.h>

void selectionSort(int *arr, int n){
	int i, j, minIndex;
	for(i = 0; i < n - 1; i++){
	minIndex = i;
	for(j = i + 1; j < n; j++){
		if(arr[j] < arr[minIndex]){
			minIndex = j;
		}
	}
	
	int temp = arr[i];
	arr[i] = arr[minIndex];
	arr[minIndex] = temp;
	}
}

int main(){
	int arr[] = {5, 8, 2, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, n);
	
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}
