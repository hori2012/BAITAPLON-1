# BAITAPLON-1
void Menu(EL *employeeList,int &n){
int t;
int flat=1;
while(flat!=0){
printf("\n\t\t~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~");
printf("\n 1.Nhap du lieu cua tung nhan vien.");
printf("\n 2.Sap xep,thong ke va hien thi thong tin nhan vien theo tinh (Z->A).");
printf("\n 3.Tim nhan vien theo tinh.");
printf("\n 4.Ghi vao tap tin nhi phan employee.dat.");
printf("\n 5.Xoa nhan vien.");
printf("\n 6.Them nhan vien.");
printf("\n 7.Nhan 0 de thoat!!!");
printf("\n---------------------------------");
printf("\nLua chon cua ban:");
scanf("%d",&t);
switch(t){
case 1:
Input(employeeList,n);
break;
case 2:
   Sort(employeeList,n);
   Output(employeeList,n);
   Cout(employeeList,n);
break;
case 3:
    Search(employeeList,n);
break;
case 4:
     Recordfile(employeeList,n);
 break;
case 5:
  Delete(employeeList,n);
  Sort(employeeList,n);
  Output(employeeList,n);
  break;
case 6:
      Add(employeeList,n);
      Sort(employeeList,n);
  Output(employeeList,n);
  break;  
   
default:
       printf("\n\t~~~~~~~~Thank for watching!!!!~~~~~~~~");
       flat=0;  
}
  }
}
