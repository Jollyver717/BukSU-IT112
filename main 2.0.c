#include <stdio.h>
#include <stdlib.h>

int main(){
    double num;
    printf("Enter a number: ");
    scanf("1f%", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negatice number.");
    } else
        printf("You entered a positive number.");
    return 0;
}
