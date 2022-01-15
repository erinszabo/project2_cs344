#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iterator>

int main(char* argv[]) {
    File *file_to_read;
    file_to_read = open(argv[]);
    // print each line of the file
    close(file_to_read);
    return 0;
}