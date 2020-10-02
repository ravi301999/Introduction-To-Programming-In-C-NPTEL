#include<stdio.h>
int main()
{
  float num1,num2;
  float m_avg;
  scanf("%f",&num1);
  while(num1 != -1)
  {
    num2 = num1;
    scanf("%f",&num1);
    if(num1!=-1)
    {	
      m_avg = (num1+num2)/2;
      printf("%0.1f ",m_avg);
     }
  }
  return 0;
}