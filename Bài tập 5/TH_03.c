#include <stdio.h>

int main() {
	int a, b, c;
	printf("Nhap 3 so nguyen a, b, c,  : ");
	scanf("%d%d%d%d", &a, &b, &c);
	int max = a; 
	if(b < max) { 
		max = b;
	}
	if(c < max) { 
		max = c;
	} 
	if (max < a && max < b && max < c  ) { 
		puts("Khong co gia tri max"); 
	} else {
		printf("max = %d\n", max); 
	}
	
	return max;
}
