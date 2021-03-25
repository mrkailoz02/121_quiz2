#include<stdio.h>

int main()
{
    int n=0,m,i,j,a=0,x,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<10)
            a++;
        else
        {
            m=i;
            for(j=0;m>0;j++)
            {
                m/=10;
            }
            x=j;
            int b[j];
            for(j=j-1;j>=0;j--)
            {
                b[j] = m%10;
                m/=10;
            }
            z=0;
            for(j=0;j<x;j++)
            {
                if(b[j]!=b[x-j-1])
                {
                    z++;
                    break;
                }
            }
            if(z==0)
                a++;
        }
    }
    printf("%d",a);
    return 0;
}
