#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,a,b,nt,t,md,md1,s;
  scanf("%d%d",&a,&b);
  scanf("%d",&nt);
  md=abs(nt-a);
  s=md;
  for(i=1;i<=5;i++)
  {
    t=a+b;
    a=b;
    b=t;
    md1=abs(nt-a);
    if(md1<s)
      s=md1;
  }
  printf("%d",s);
  return 0;
}