#include<stdio.h>
int main(void)
{
    int a[20],b[20];
    int large=0,l1,l2,i;
    scanf("%d",&l1);
    for(i=0;i<l1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&l2);
    for(i=0;i<l2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<l1; i++){
        int flag=0;
        if(large<a[i]){
            for(int j=0;j<l2;j++){
                if(a[i] == b[j])
                    flag=1;
            }
            if(flag==0)
                large=a[i];
        }
    }
    
    printf("%d", large);
   return 0;
}