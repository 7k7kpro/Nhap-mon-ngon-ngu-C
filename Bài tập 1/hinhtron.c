#include <stdio.h>
int main(void) 
{
	//khai bao bien CV,DT va R kieu double
    double R,CV,DT;
    //khai bao bien PI kieu double 
    double PI= 3.14;
    //tinh chu vi , dien tich hinh tron
    R = 1.5;
    CV = 2*R*PI;
    DT = PI*R*R;
    printf("Chu vi hinh tron la: %0.1f\n", CV);
    printf("Dien tich hinh tron la: %0.1f", DT);
    return 0;

}
