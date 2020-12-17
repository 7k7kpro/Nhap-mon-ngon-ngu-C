#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Nhap so luong ");
  scanf("%d", &a);
  printf("Nhap don gia");
  scanf("%d", &b);
  int khoiluong, giatri, thanhtien;
  thanhtien = a * b;
  printf("a * b = %d",thanhtien);
  return 0;
}
