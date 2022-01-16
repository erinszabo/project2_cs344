#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <malloc.h>
#include <fcntl.h>



int main(int argc, char *argv[]) {
    int file_to_read;
    file_to_read = open(argv[1], argc);
    // read(file_to_read);
    printf("test\n");
    close(file_to_read);
    return 0;
}