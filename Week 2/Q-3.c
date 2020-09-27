#include<stdio.h>
int main()
{
  int i,n,a,b;
  scanf("%d",&n);
  a=n;
  b=n;
  while(n!=-1)
  {
    if(n>a)
    {
      b=a;
      a=n;
    }
  else if(n>b && n>a)
    b=n;
  scanf("%d",&n);
  }
  if(a!=b)
    printf("%d",b);
  else
    printf("0");
 return 0;
}