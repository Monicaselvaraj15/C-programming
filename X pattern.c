#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)//row equal to col
            {
                printf("%d",j);//print col
             }
            else if(i + j==n+1 || i==j)//add row and col equal to n+1 or row equal to col
           {
            printf("%d",j);
           }
           else
           {
            printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}
