#include <stdio.h>

int main(void) {
//khai bao gia tri so luong , don gia
  int a, b;
  printf("Nhap so luong ");
  scanf("%d", &a);
  printf("Nhap don gia");
  scanf("%d", &b);
//khai bao bien thanh tien
  int khoiluong, giatri, thanhtien;
//cong thuc soluong*dongia=thanhtien
  thanhtien = a * b;
  if(a >= 5){thanhtien=(a*b)*0.25;

  }
  printf("thanh tien = %d",thanhtien);
  return 0;
}
