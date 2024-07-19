#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--) //outerloop n to 1
    {
        for(j=i;j<=n;j++) //inner loop i to n
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    {
        for(i=2;i<=n;i++)  // 2nd outer loop 2 to n
     {
        for(j=i;j<=n;j++)  //inner loop i to n
        {
            printf("%d ",j);
        }
        printf("\n");
     }
    } 
    return 0;
}   
