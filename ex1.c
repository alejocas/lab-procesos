#include <stdio.h>
#include <unistd.h>

int main() {
    int x = 100;
    fork();
    x += 300;
    x += 200;
    printf("Variable x en el PID(%d): %d\n", getpid(), x);
    return 0;
}