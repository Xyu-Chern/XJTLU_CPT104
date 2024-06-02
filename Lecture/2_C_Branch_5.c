// #include <stdio.h>
// int main() {
//     int goodWeather;
//     goodWeather = 0;
//     if(goodWeather) { // if goodWeather != 0  or 0.0  or '\0' then is good
//         printf("The weather is good\n");
//     } else {
//         printf("The weather is bad\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 5;
//     int b = 2;
//     int result;
//     result = a == b;
//     if(result) {
//         printf("That is TRUE\n");
//     } else {
//         printf("That is FALSE\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     double a = 5.00000000000000001;
//     double b = 5.00000000000000000; 
//     int result;
//     result = a == b;
//     if(result) {
//         printf("That is TRUE\n"); //超出双精度有效数字所以被认为相同
//     } else {
//         printf("That is FALSE\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int sunny = 1;
//     int vacation = 1;

//     int sunnyAndVacation= sunny && vacation; //and
//     if(sunnyAndVacation) {
//         printf("Aw yeah!\n");
//     } else {
//         printf("Oh noes...\n");
//     }

//     int sunnyOrVacation = sunny || vacation; //or
//     if(sunnyOrVacation) {
//         printf("Ah well.\n");
//     } else {
//         printf("Oh noes...\n");
//     }

//     int notSunnyAndVacation = !sunny && vacation; // not
//     if(notSunnyAndVacation) {
//         printf("Ah well.\n");
//     } else {
//         printf("Oh noes...\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int age;
//     printf("What is your age?\n");
//     scanf("%d", &age);
//     if(age >= 18 && !(age >= 65)) {
//         printf("You are in labor force.\n");
//     } else {
//         printf("You are not in labor force\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int n, num;
    int sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) { 
            sum += num;
        }
    }
    printf("%d\n", sum);
    return 0;
}
