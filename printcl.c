#include <unistd.h>
#include <stdio.h>
#include <iterator>

int n;

int main( int argcount, char* argv[]) {
    for(n = 0; n <= argcount; ++n){
        printf("%s", argv[n]);
    }
    return 0;
}