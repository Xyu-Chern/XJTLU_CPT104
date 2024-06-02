// #include <stdio.h>
// int main() {
//     int array[3];
//     array[0] = 25;
//     array[1] = 100;
//     array[2] = -8;
//     printf("First element is %d.\n", array[0]);
//     printf("Second element is %d.\n", array[1]);
//     printf("Third element is %d.\n", array[2]);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int array[3];
//     int i;
//     for(i=0; i<3; i++) {
//         scanf("%d", &array[i]);
//     }
//     for(i=0; i<3; i++) {
//         printf("array[%d] is %d.\n", i, array[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     double array[3];
//     int i;
//     for(i=0; i<3; i++) {
//         scanf("%lf", &array[i]);
//     }
//     for(i=0; i<3; i++) {
//         printf("array[%d] is %.2lf.\n", i, array[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    //! showArray(ages, cursors=[i])
    int ages[10];
    int i, max = 0;
    for(i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if(ages[i] > max) {
            max = ages[i];
        }
    }
        printf("The max age is %d.\n", max);
    return 0;
}