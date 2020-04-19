#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
  char *argumentos[3] = {"ls", "-l", NULL};
  int pid = fork();
  int status;

  switch(pid){
    case -1:

    case 0:
      execvp(argumentos[0], argumentos);
      break;
    default:
     printf("PA \n");
     status = wait(0);
     printf("Status | pid  %d\n %d\n", status, pid);
  }
  exit(0);
}