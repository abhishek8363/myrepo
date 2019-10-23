#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,i=0,r=0,s=0;
  printf("enter the number\n");
  scanf("%d",&a);
  while(a!=0)
  {
      r=a%10;
      s=r+s;
      a=a/10;
      i++;
  }
printf("no of digits is %d ",i);
printf("sum of digits is %d",s);
}
