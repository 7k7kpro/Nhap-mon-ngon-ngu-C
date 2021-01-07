#include <stdio.h> 
int main(){
	printf("\n**********BANG CUU CHUONG**********\n");
	  int i;
	  for (int i = 1; i <=10; i++){
		printf("\n*****BANG NHAN %d*****\n",i);
		for(int j = 0; j < 10; j++){
			printf("\t%d x %d = %d\n",i,j, i*j);
		}
	}
} 
