#include<stdio.h>
int main(){
	int a, b, c;
	printf("moi nhap vao a: ");
	scanf("%d",&a);
	printf("moi nhap vao b: ");
	scanf("%d",&b);
	printf("moi nhap vao c: ");
	scanf("%d",&c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("la 3 canh cua tam giac");
	}
	else{
		printf("khong phai 3 canh cua tam giac");
	}
	return 0;
}
