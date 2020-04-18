#include <stdio.h>
#include <unistd.h>

int main() {
    int f_id =  fork();
    if(f_id == 0){
      printf("hello (%d)\n", getpid());
    }else{
      printf("bye %d\n", getpid());
    }
    return 0;
}