#include<stdio.h>

int main()
{
    int n,i,j=2,a=0,x,y=0,z=0;
    scanf("%d",&n);
    x=n;
    while(a<3)
    {
        if(x%j==0)
        {
            x/=j;
            a++;
        }
        else if(j<x)
        {
            a=0;
            j++;
        }
        else
            break;
    }
    if(a==3)
        printf("Not Cube Free");
    else
    {
        for(i=2;i<n;i++)
        {
            a=0;
            x=i;
            j=2;
            z=0;
            while(a<3)
            {
                if(x%j==0)
                {
                    x/=j;
                    a++;
                }
                else if(j<x)
                {
                    a=0;
                    j++;
                }
                else
                    break;
            }
            if(a==3)
                y++;
        }
        printf("%d",n-y);
    }
    return 0;
}
