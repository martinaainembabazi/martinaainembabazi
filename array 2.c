#include <stdio.h>

float mean(float marks[],int n );
int main()
{
     int Jim[3]={90,80,79};
     int Tendo[3]={100,80.7,56};
    int sum=0;

    for(int i=0;i<3;i++)
    {

        printf("%d\n",Jim[i]);
        sum=sum+Jim[i];

    }
        printf("the sum is %d",sum);




     mean(Jim,3);
    }
    float mean(float marks[],int n )
    {
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }

   float average=sum/n;
   printf("mean is %f",average);
   return 0;

  }
