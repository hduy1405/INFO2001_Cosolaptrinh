#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int* a;
	
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d", &n);
	
	a = (int*)malloc(n * sizeof(int));
	if (a == NULL){
		printf("Khong the phan bo bo nho.\n");
		
		return 1;
	}
	printf("Nhap cac phan tu cua mang: \n");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("cac phan tu cua mang la: \n");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("\n");
	free(a);
	return 0;
}
