#include<stdio.h>

int main(){

    int num1,num2;
    int num3;

    printf("enter the value of num1\n");
    scanf("%d", &num1);

    printf("enter the value of num2\n");
    scanf("%d",&num2);

    printf("enter the value of num3\n");
    scanf("%d", &num3);


    if(num1>num2 && num1>num3){
        printf("num1 is greatest\n",num1);
    }

    else if (num2 > num1 && num2 > num3)
    {
        printf("num2 is greatest\n",num2);
    }

    else if(num3 > num1 && num3 > num2)
    {
        printf("num3 is greatest\n",num3);
    }
}