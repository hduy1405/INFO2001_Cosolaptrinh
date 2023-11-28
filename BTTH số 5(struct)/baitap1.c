#include <stdio.h>

struct Student {
	char name[50];
	int id;
	int age;
	float grade;
};

int main(){
	struct Student sv;
	printf("nhap thong tin sinh vien\n");
	
	printf("nhap ten: ");
	fgets(sv.name, 50, stdin);
	
	printf("nhap ma so sinh vien: ");
	scanf("%d", &sv.id);
	
	printf("nhap tuoi sinh vien: ");
	scanf("%d", &sv.age);
	
	printf("nhap diem sinh vien: ");
	scanf("%f", &sv.grade);
	
	printf("\nThong tin sinh vien\n");
	printf("ten: %s\n", sv.name);
	printf("ma so: %d\n", sv.id);
	printf("tuoi: %d\n", sv.age);
	printf("diem: %.2f\n", sv.grade);
	
	return 0;
	
}
