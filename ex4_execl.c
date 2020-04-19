#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    const char *argv_execl = "/bin/ls";
    execl(argv_execl, argv_execl, NULL);
    return 0;
}