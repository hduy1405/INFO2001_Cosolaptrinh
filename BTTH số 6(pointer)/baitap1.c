#include <stdio.h>

void nhapMang(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");  // thêm d?u xu?ng dòng ? cu?i
}

int timKiem(int a[], int n, int target){
    for(int i = 0; i < n; i++){
        if(a[i] == target){
            return i;
        }
    }
    
    return -1;
}

int main(){
    int n;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Nhap cac phan tu cua mang: ");
    nhapMang(a, n);
    
    printf("Nhap mang: ");
    inMang(a, n);
    
    int target;
    printf("Nhap phan tu de tim kiem: ");
    scanf("%d", &target);
    
    int index = timKiem(a, n, target);
    if(index != -1){
        printf("Phan tu %d duoc tim thay o vi tri %d trong mang.\n", target, index);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", target);
    }
    
    return 0;
}

