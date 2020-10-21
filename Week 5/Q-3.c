#include<stdio.h>
void revstr()
{
  int ch;
  ch=getchar();
  if((ch=='\n')||(ch=='0'))
    return;
  revstr();
  putchar(ch);
}
int main()
{
  revstr();
  return 0;
}