#include <stdio.h>
int main()
{
    int tong;
    tong= 0 ;
    int i;
    for(i = 1; i <= 10; ++i)
    {
        tong = tong + i;
    }

    printf("tong = %d", tong);

    return 0;
}
