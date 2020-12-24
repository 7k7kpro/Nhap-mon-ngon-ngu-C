#include <stdio.h>
int main()
{
    int tong;
    tong= 0 ;
    int i,n;
    scanf("%d",&n);
    for(i = 1; i <= n; ++i)
    {
        tong = tong + i;
    }

    printf("tong = %d", tong);

    return 0;
}
