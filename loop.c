#include<stdio.h>
#include<string.h>
int main ()
{
    int num;
    int sum=0;
    int lineCount=0;

        printf("enter a number between 1 and 50");
        scanf("%d",&num);
    if(num>50)
        num=50;
    for(int i=0;i<num;i++){
    if (lineCount<10)
        lineCount++;

    else {
        printf("\n");
        lineCount=1;


       }
       sum+=i;
       printf("%4d",sum);

      }
}






