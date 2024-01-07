#include <stdio.h>
int main ()


{
char name[50];

    printf("What is your name?\n");
    scanf("%s",&name);
    if (strcmp (name,"Bob")==0){
            printf("How are you doing %s", &name);
            }

        else{

    printf("Sorry!We cant greet you!");

    }

}




