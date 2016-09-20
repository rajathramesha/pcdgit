#include <stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if(year%400==0)
    {
        printf("the year is a leap year\n");
    }
    else if(year%100==0) 
    {
        printf("the year is not a leap year");
    }
    else if(year%4==0)
    {
        printf("the year is a leap year");
    }
    else
    {
        printf("cannot find");
    }
    return 0;
    
}
