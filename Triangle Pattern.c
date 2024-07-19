#include<stdio.h>
int main()
{
    int n,i,j;
    int var=1;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=n;i>0;i--) // n to 0 time
    {
       for(j=1;j<=n;j++) 
       if(i==j || i==n ||j==1) //checking condtion 
       {
         printf("%d ",var);
         var++;     //increment var
       }
       else
       {
          printf(" ");
       }
       printf("\n");
    }
    return 0;
}