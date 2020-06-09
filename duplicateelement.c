
#include <stdio.h>
#include<math.h>

int main()
{
    int a[10]={1,1,1,2,2,2,3,3};
    int n=8;
    int count=0;
    int i,j;
    for(i=0;i<n;i++)
    {   
        if(a[abs(a[i])]>=0)
        {
            a[abs(a[i])]=-a[abs(a[i])];
        }
        else
        {
            printf("dup ele are:%d\t",abs(a[i]));
        }
        
       
    }
    
    
    return 0;
}e
