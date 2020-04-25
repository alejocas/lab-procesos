#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int f_id = fork();
    if(f_id == 0) {
        // Hijo
        printf("Vamos a cerrar la salida estándar (STDOUT)\n");
        close(STDOUT_FILENO);
        printf("Salida estándar (STDOUT) cerrada\n");
    } else {
        // Padre
        printf("Padre imprimiendo con normalidad(?)\n");
    }
}