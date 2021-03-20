#include <stdio.h>
 
 
int main()
{
 
    int a, b,c;
   
    //input value of a
    printf("a = ");
    scanf("%d",&a);
 
        //input value of b
    printf("b = ");
    scanf("%d",&b);
   
 
    while((c = (a%b)) != 0)
    {
        a = b;
            b = c;
    }
 
    printf("UCLN = %d",b);
    return 0;
}
