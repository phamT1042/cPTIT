#include <stdio.h>
#include <math.h>

//Bai toan nhap 6 canh cua 3 hinh chu nhat xem co ghep duoc thanh hinh vuong khong
//DK1: tong S 3 hcn phai la 1 so chinh phuong
//DK2: Chung ta co 2 cach ghep:
//    - 3 hcn dat song song nhau (chong len nhau) voi canh dai nhat moi hcn chinh la canh hvuong
//    - 2 hcn ghep thanh 1 hcn co canh dai la canh hvuong roi de len hcn con lai cung co canh dai la canh hvuong
void swap(int *x, int *y) {
	int swap = *y;
	*y = *x;
	*x = swap;
}
int main() {
	int a1, b1, a2, b2, a3, b3, flag = 0, tongS, test;
	scanf("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);
	tongS = a1 * b1 + a2 * b2 + a3 * b3;
	test = sqrt(tongS);
	if (test * test != tongS) printf("NO"); //pass DK1
	else {
		if(a1 > b1) swap(&a1, &b1);
		if(a2 > b2) swap(&a2, &b2); //sap xep cac canh tang dan de toi uu
		if(a3 > b3) swap(&a3, &b3);
		if(b1 == b2 && b2 == b3 && b3 == test) printf("YES"); //pass cach ghep 1
		else {
			if(b2 == test) {
				swap(&a1, &a2);
				swap(&b1, &b2);
			}                    //dua hcn co canh dai = canhvuong len dau tien
			if(b3 == test) {
				swap(&a1, &a3);
				swap(&b1, &b3);
			}                    //chieu dai da xong, xoay 2 hcn con lai xet chieu rong
			if(b1 == test) {
				a1 = test - a1;  //chieu rong con lai
				if((a1 == a2 && a1 == a3) || (a1 == a2 && a1 == b3) || (a1 == b2 && a1 == a3) || (a1 == b2 && a1 == b3))
					printf("YES"); //pass cach ghep 2
				else printf("NO");
			} else printf("NO");
		}
	}
	return 0;
}