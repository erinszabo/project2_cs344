#include <unistd.h>
#include <stdio.h>

int x = 12, n;
float y = 3.14;
char* s = "Hello, world!";

int main() {
    printf("x is %d, y is %f\n", x, y);
    printf("%s\n", s);
    // print multiples of 5
    for( n = 0; n <= 5; ++n){
        printf("%d x 5 = %d\n", n, n * 5);
    }
    return 0;
}