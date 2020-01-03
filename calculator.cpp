#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    return(a+b);
}

int sub(int a,int b)
{
    return(a-b);
}

int mult(int a,int b)
{
    return(a*b);
}

int main()
{
    int num[3];
    char symbol;
    printf("enter symbol of operation,+,- or *");
    scanf("%c", & symbol);
    printf("Enter first numbers");
    scanf("%d",&num[1]);
    printf("Enter second numbers");
    scanf("%d",&num[2]);
    if (symbol == '+')
    {
        printf("%d \n",add(num[1],num[2]));
        
    }
     if (symbol == '-')
    {
        printf("%d \n",sub(num[1],num[2]));
        
    }
     if (symbol == '*')
    {
        printf("%d \n",mult(num[1],num[2]));
        
    }
    return 0;
}
