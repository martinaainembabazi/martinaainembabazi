#include <stdio.h>
int main(void)
{
    int dd;
    int mm;
    int yyyy;
    int year;
    int age;

    printf("enter the date\n");
    scanf("%d",&dd);
    printf("the date has been entered\n");

    printf("enter the month\n");
    scanf("%d",&mm);

    printf("enter the year\n");
    scanf("%d",&yyyy);


    printf("enter the current year\n");
    scanf("%d",&year);
    printf("the current year has been entered:%d",year);

    age=year-yyyy;

    printf("the age is ;%d years");
    scanf("%d",&age);
}
