#include<stdio.h>
int main()
{
  int b,a;
  int c=1;
  scanf("%d",&a);
  scanf("%d",&b);
  while(b!=-1)
  {
    if(a!=b)
      c++;
  a=b;
  scanf("%d",&b);
  }
  if(c>=3)
    printf("1");
  else 
    printf("0");
  return 0;
}