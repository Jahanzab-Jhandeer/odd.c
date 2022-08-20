#include<stdio.h>
// take value from user until odd number (do-while loop)
int main () {
    int n;
    do {
        printf("Enter Number :");
        scanf("%d" , &n);
        printf("%d\n" , n );
        
    
    if(n % 7 == 0) {
        break;
    }

    } while(1);

    printf("Thank You\n");

return 0;
}