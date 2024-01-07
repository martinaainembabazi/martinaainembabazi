#include <stdio.h>
int main ()
{
    double mark[10];
   // printf("enter the mark\n");
    //scanf("%lf",&mark);


    for(int i=0;i<10;i++){
    mark[i]=i;
    printf("%.2lf\n",mark[i]);

    //if (mark>=90)
    if (i>=7)
        printf("wow");
    else if(i>4)
        printf("tried");
        else if(i>2)
            printf("fair");
    }



}
