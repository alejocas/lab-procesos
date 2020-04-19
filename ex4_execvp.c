#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    char *file = "/bin/ls";
    char *argv_execvp[] = { file, NULL };
    execvp(file, argv_execvp);
    return 0;
}