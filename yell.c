#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <malloc.h>
#include <fcntl.h>
#include <ctype.h>

int file_to_read;  
int MAX_FILE_SIZE = 2048;

int main(int argc, char *argv[]) {
    char *start_of_file = malloc(argc * sizeof(char));

    file_to_read = open(argv[1], argc);
    int end_of_file = read(file_to_read, start_of_file, MAX_FILE_SIZE);
    
    // upper
    // toupper() // uppercase version of a single character
    int letter;
    
    // printf("%d %d \n", *start_of_file, end_of_file);

    for (letter = 0; letter <= argc; letter++) {
        // write(1, toupper(start_of_file + letter), 1);
        // printf("%c", toupper(letter));
    }
    //printf("%d %d \n", letter, end_of_file);

    // -------------------
    write(1, start_of_file, end_of_file);
    close(file_to_read);

    return 0;
}