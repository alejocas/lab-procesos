#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    const char *argv_execle = "/bin/ls";
    execle(argv_execle, argv_execle, NULL, NULL);
    return 0;
}