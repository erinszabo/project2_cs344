#include <unistd.h>
#include <stdio.h>
#include <iterator>

int n;

int main( int argcount, char* args[]) {
    for(n = 0; n <= argcount; ++n){
        printf("%s", args[n]);
    }
    return 0;
}