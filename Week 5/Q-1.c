#include<stdio.h>
int main()
{
  int n,y=0,c=0;
  scanf("%d",&n);
  if(n==1)
    printf("1");
  else
  {
    while(y!=1)
    {
      if(n%2==0)
      {
        y=n/2;
        n=y;
        printf("%d ",y);
      }
      else
      {
        y=3*n+1;
        n=y;
        printf("%d ",y);
      }
    }
  }
  return 0;
        
}