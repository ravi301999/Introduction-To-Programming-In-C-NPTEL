#include<stdio.h>
int main()
{
  int n,i,j,a;
  int c=0,d=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      scanf("%d",&a);
      if(i<j)
      {
        if(a!=0)
          c++;
      }
      if(i>j)
      {
        if(a!=0)
          d++;
      }
        
    }
  }
  if(c==0 && d==0)
    printf("2");
  else if(c==0)
    printf("-1");
  else if(d==0)
    printf("1");
  else
    printf("0");
return 0;
}