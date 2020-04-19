#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    const char *argv_execlp = "/bin/ls";
    execlp(argv_execlp, argv_execlp, NULL);
    return 0;
}