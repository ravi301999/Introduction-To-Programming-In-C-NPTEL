#include<stdio.h>
int find_odd(int k)
{
  int num;
  int counter=0;
  int check=0;
  while(num != -1)
  {
   	scanf("%d",&num);
    if(num%2!=0)
    {
      counter++;
      if(counter==k)
      {
        printf("%d",num);
        check=1;
      }
    }

  }
   if((counter != k) && (check == 0))
      printf("-1");
  return 0;
}

int main()
{
  int k;
  scanf("%d",&k);
  find_odd(k);
  return 0;
}