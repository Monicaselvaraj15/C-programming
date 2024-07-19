#include<stdio.h>
int main()
{
    int first=0,second=1,next=0,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<=0)
    {
        while(next>=num && next<=-num)
        {
            printf("%d",next);
            next=first-second;
            first=second;
            second=next;
        }
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}