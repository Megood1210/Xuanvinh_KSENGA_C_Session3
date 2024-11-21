#include<stdio.h>

int main(){
	char name[100];
	
	printf("Nhap vao ho va ten: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Xin chao %s", name);
	
	
	return 0;
}
