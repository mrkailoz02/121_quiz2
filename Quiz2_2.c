#include<stdio.h>

int main()
{
    int n,m,i,j,x,y,z,k;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[n][3];
    int b[m][70];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
            b[i][j]='0';
    }
    for(i=0;i<n;i++)
    {
        x = a[i][0];
        y = a[i][1];
        z=  a[i][2];
        for(j=0;j<70;j++)
        {
            if(j==y-1)
            {
                for(k=j;k<z+j;k++)
                    b[x-1][k] = 'x';
                break;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<70;j++)
            printf("%c",b[i][j]);
        printf("\n");
    }
    return 0;
}
