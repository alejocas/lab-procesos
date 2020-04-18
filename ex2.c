#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  
#include <string.h>

int main() {
    //Llamar a open()
    int fd = open("dummieFile.txt", O_RDWR);
    char *string = (char *) calloc(100, sizeof(char));
    int bytesToRead = 10;
    //Llamar a fork()
    fork();
    int rd_sz = read(fd, string, bytesToRead);
    string[rd_sz] = '\0';
    printf("[Read size: %d | PID: %d] Content: %s\n", rd_sz, getpid(), string);
    write(fd, "Escrito por proceso", strlen("Escrito por proceso"));
    close(fd);
}