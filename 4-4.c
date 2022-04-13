# include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &num1,&num2,&num3);
    if(num1 == num2 && num2 == num3){
        printf("Regular triangle\n");
    }
    else{
        printf("no Regular triangle\n");
    }
    return 0;
}