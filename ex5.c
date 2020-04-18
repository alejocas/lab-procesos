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
      while(wait(&status)!=pid);
      if(status==0){
        printf("se esta ejecutando el beiby");

      }else{
        printf("error del beibi");
      }
  }
  exit(0);
}