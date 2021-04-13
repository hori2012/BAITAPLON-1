//Bai Tap Lon
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct employee_st{
	char Name[30];
	char Province[30];
	int Day;
	int Month;
	int Year;
};
typedef struct employee_st EL;
void Nhap1(EL *nv){
	fflush(stdin);
	printf("\nNhap ten nhan vien:");
	gets(nv->Name);
	printf("\nNhap tinh o cua nhan vien:");
	gets(nv->Province);
	printf("\nNhap ngay,thang,nam sinh cua nhan vien:");
	scanf("%d%d%d",&nv->Day,&nv->Month,&nv->Year);
}
void Input(EL *employeeList , int &n ){          //Nhap thong tin nhan vien
	printf("\nNhap so luong nhan vien :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nNhap thong tin nhan vien %d",i+1);
		Nhap1((employeeList+i));
	}
}
