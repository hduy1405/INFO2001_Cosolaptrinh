#include <stdio.h>
#include <string.h>

struct sinhvien{
	char ten[50];
	int diem;
};

void sapxeptheoten(struct sinhvien *ds, int n){
	int i, j;
	for(i = 0; i < n-1; i++){
		for(j = i + 1; j < n; j++){
			if(strcmp(ds[i].ten, ds[j].ten) > 0){
				struct sinhvien temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

int main(){
	int n, i;
	struct sinhvien ds[100];
	
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Nhap ten sinh vien thu %d: ", i + 1);
		scanf("%s", &ds[i].ten);
		printf("nhap diem sinh vien thu %d: ", i + 1);
		scanf("%d", &ds[i].diem);
	}
	
	sapxeptheoten(ds, n);
	
	printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
	for(i = 0; i < n; i++){
		printf("Ten: %s - Diem: %d\n", ds[i].ten, ds[i].diem);
	}
	
	return 0;
}
