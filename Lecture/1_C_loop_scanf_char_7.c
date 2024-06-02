# include<stdio.h>

int main(){
    // int i ;
    // for (i=0;i<10;i++){
    //     printf("Hello World!\n");
    // }
    // int numApples = 5;
    // int price = 2;
    // int totalPrice = numApples * price;
    // printf("Total price of %d apples, each %d yuan, is %d yuan\n", 5, 2, 5*2);
    // printf("Total price of 5 apples, each 2 yuan, is 10 yuan\n");
    // printf("Total price of %d apples, each %d yuan, is %d yuan\n", numApples, price, totalPrice);

    // int num;
    // printf("What is the number of the apples?\n");
    // scanf("%d",  &num);
    // printf("There is %d \n", num);

    // int first, second, third;
    // scanf("%d %d %d", &first, &second, &third);
    // printf("You entered %d, %d, and %d\n",
    //     first, second, third);

    // char letter;  //字符不是字符串
    // letter = 'a';
    // printf("The letter is %c\n", letter);

    // char letter1, letter2;
    // printf("Enter two letters: ");
    // scanf(" %c %c", &letter1, &letter2); //scanf 格式字符串 " %c %c" 中的空格确保了 scanf 在读取 letter1 和 letter2 之前会跳过所有的空白字符。
    // printf("The letters are %c and %c.\n", letter1, letter2);

    // double height;
    // height = 1.72;
    // printf("Your height is %.4lf\n", height);  // 4代表精度

    // double height1;
    // scanf("%lf", &height1);
    // printf("Your height is %.2lf\n", height1);

    // int age;
    // double height2;
    // scanf(" %d %lf", &age, &height2);  //if we input 121.33 then the answer is 121 and 0.33
    // printf("Your age is %d and your height is %.2lf\n", age, height2);

    printf("5/2 equals %d\n", 5/2);
    printf("5/2 equals %lf\n", 5/2);   //note this comes to zero if we do not change 5 or 2 into double
    printf("5.0/2.0 equals %lf\n", 5.0/2.0);
    printf("5/2.0 equals %lf\n", 5/2.0);
    printf("5.0/2 equals %lf\n", 5.0/2);

    // int number, divisor;
    // scanf("%d%d", &number, &divisor);
    // printf("%d divided by %d is %d\n", number, divisor, 
    // number/divisor);
    // printf("The remainder is %d\n", number%divisor);

    int num1, num2;
    double dec1, dec2;
    scanf("%d %lf", &num1, &dec2);
    dec1 = (double) num1;
    num2 = (int) dec2;
    printf("dec1 = %lf\n", dec1); 
    printf("num2 = %d\n", num2);

    return 0;
}

