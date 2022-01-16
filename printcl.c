#include <unistd.h>
#include <stdio.h>

int n;

int main( int argc, char *argv[]) {
    for(n = 0; n <= argc-1; ++n){
        printf("%s\n", argv[n]);
    }
    return 0;
}
