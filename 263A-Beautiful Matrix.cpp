#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }

    for(int i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            {
                if(a[i][j]==1)
                {
                   printf("%d",abs(i-2)+abs(j-2));
                   return 0;
                }
            }
    }

    return 0;

}
