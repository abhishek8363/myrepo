#include<stdio.h>
int main()
{
int a,b,x[100],i,j;
printf("enter the size of array\n");
scanf("%d",&a);
printf("enter the array elements\n");
for(i=0;i<a;i++)
{
 scanf("%d",&x[i]);
}
int t;
printf("give the target value");
scanf("%d",&t);
for(i=0;i<a;i++)
    for(j=i+1;j<a;j++)
        {if(x[i]+x[j]==t)
            printf("ans is %d %d",i,j);
        }
}
