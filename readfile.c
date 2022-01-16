#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <malloc.h>
#include <fcntl.h>

int file_to_read;  
int MAX_FILE_SIZE = 2048;

int main(int argc, char *argv[]) {

    char *buff = malloc(argc * sizeof(char));

    file_to_read = open(argv[1], argc);
    read(file_to_read, buff, MAX_FILE_SIZE);
    // write
    printf("test\n");
    close(file_to_read);
    return 0;
}