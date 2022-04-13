// 兩數由小排到大
# include <stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Before: %d,%d\n",a,b);
    if (a <= b){

    }
    if (a > b){
        int tmp;
        tmp = b;
        b = a;
        a = tmp;
    }   
    printf("After:%d,%d\n",a,b);
    return 0;
}