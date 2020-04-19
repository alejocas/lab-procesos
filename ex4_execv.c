#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    char *file = "/bin/ls";
    char *argv_execv[] = { file, NULL };
    execv(file, argv_execv);
    return 0;
}