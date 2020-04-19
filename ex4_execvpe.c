#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    fork();
    char *file = "/bin/ls";
    char *argv_execvpe[] = { file, NULL };
    char *envp[] = { NULL };
    execvpe(file, argv_execvpe, envp);
    return 0;
}