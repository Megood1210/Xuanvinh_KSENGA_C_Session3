#include<stdio.h>

int main(){
	float diemToan, diemAnh, diemVan, tongDiem, diemTB;
	
	printf("Moi ban nhap vao diem Anh");
	scanf("%f",&diemAnh);
	
	printf("Moi ban nhap vao diem Toan");
	scanf("%f",&diemToan);
	
	printf("Moi ban nhap vao diem Van");
	scanf("%f",&diemVan);
	
	tongDiem = diemToan + diemVan + diemAnh;
	
	diemTB = tongDiem / 3;
	
	printf("Tong diem = %.2f \n",tongDiem);
	printf("Diem TB = %.2f \n",diemTB);
	
	return 0;
}
