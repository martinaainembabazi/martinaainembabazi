int multiply(int num1,int num2);
int main(void)
{
    int x;
    int y;
    int p;
    printf("enter x:");
    scanf("%d",&x);

    printf("enter y:");
    scanf("%d",&y);



     p=multiply(x,y);

     printf("the product is %d",p);
     return 0;

}
int multiply(int x,int y)
{


return x * y;
}
