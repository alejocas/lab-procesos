#include <stdio.h>
#include <unistd.h>

int main() {
    int x = 100;
    fork();
    printf("Variable x en el PID (%d): %d\n", getpid(), x);
    return 0;
}