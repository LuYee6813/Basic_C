# include <stdio.h>
int main(){
    int num1,num2,max;
    printf("Please enter the first integer: ");
    scanf("%d",&num1);
    printf("Please enter the second integer: ");
    scanf("%d",&num2);

    if (num1 > num2){
        max = num1;
    }
    else{
        if(num1 == num2)
        {
            max = num1;
        }
        max = num2;
    }
    printf("The maxinum is %d.\n",max);
    return 0;
}