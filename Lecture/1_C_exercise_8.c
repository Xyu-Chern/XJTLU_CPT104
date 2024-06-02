# include<stdio.h>

int main(){
    // int num;
    // scanf("%d",&num);
    // for (int i=0 ; i<=10 ; i++){
    //     int c = i*num;
    //     printf("%d x %d = %d\n",i,num,c);
    // }
    int num;
    scanf("%d",&num);
    int sum = 0;
    for (int i=1 ; i<=num ; i++){
        int a;
        scanf("%d",&a);
        sum = sum + a;
    }
    printf("%.2lf \n", (double)sum/num); //强制转换小数运算否则输出为0
    return 0;
}