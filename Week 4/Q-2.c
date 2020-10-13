#include<stdio.h>
int main(void)
{
    int a[1000];
    int res=0,l1,i,j;
    scanf("%d",&l1);
    for(i=0;i<l1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<l1; i++){
        for(j=0;j<i;j++){
            if(a[i] == a[j])
                break;
        }
        if (i == j) 
            res = res+1; 
    }
    
    printf("%d", res);
   return 0;
}