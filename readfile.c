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
    char *start_of_file = malloc(argc * sizeof(char));

    file_to_read = open(argv[1], argc);
    int end_of_file = read(file_to_read, start_of_file, MAX_FILE_SIZE);
    write(1, start_of_file, end_of_file);
    close(file_to_read);

    return 0;
}