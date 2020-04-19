# PRÁCTICA 1 - PROCESOS #

## 1. Objetivos ##
1. Familiarizarse con las diferentes estructuras y funciones relacionadas con el manejo de procesos en linux.
2. Codificar programas que hagan uso del API de procesos.

## 2. Actividades en el laboratorio ##

Realizar los siguientes ejercicios:

1. Escriba un programa que llame un ```fork()```. Antes del llamado del ```fork()```, declare una variable de acceso (por ejemplo, ```x```) y asígnele un valor (por ejemplo, ```100```). Responda las siguientes preguntas:
  * ¿Cuál es el valor de la variable en el proceso hijo?
  > El valor de la variable en el proceso hijo es igual a la del valor que había presente en el proceso padre hasta que haya un cambio indicado en código después del fork.
  * ¿Qué sucede con la variable cuando el proceso hijo y el padre cambian el valor de ```x```?
  > El proceso hijo realiza una copia propia de la variable ```x```, lo cual significa que la variable ```x``` del proceso hijo es independiente de la variable ```x``` del proceso padre, por lo cual, pueden existir modificaciones en el proceso padre y en el proceso hijo sobre la variable ```x``` y en ningún momento habrá comportamientos inesperados. 
2. Escriba un programa que abra un archivo (con la llamada ```open()```) y entonces llame a ```fork()```. **Nota**: El siguiente [enlace](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/) puede ser de utilidad para entender la llamada ```open()```.
  * ¿Pueden el padre y el hijo acceder al file descriptor retornado por ```open()```?
  > Un padre y un hijo efectivamente pueden acceder al ```file descriptor``` determinado antes del llamado a ```fork()```, ya que todo el contexto necesario es copiado en este llamado a duplicar el proceso.
  * ¿Qué pasa si ellos empiezan a escribir el archivo de manera concurrente, es decir, a la misma vez?
  > Ambos pueden escribir en el archivo, sin que necesariamente se dé que un proceso sobreescriba lo que el otro proceso ha escrito o está intentando escribir.
3. Escriba un programa usando ```fork()```. El proceso hijo imprimirá ```"Hello"```; el proceso padre imprimirá ```"goodbye"```. Usted deberá asegurar que el proceso hijo imprima en primer lugar; ¿usted podría hacer esto sin llamar ```wait()``` en el padre? 
  > No pero es una de las posibles salidas dado que no sabemos si el sistema operativo le dará el control a proceso padre o al proceso hijo, pero no podemos asegurar esa salida sin llamar ```wait()```. 
4. Escriba un programa que llame ```fork()``` y entonces llame alguna forma de ```exec()``` para correr el programa ```/bin/ls```. Intente probar todas las variaciones de la familia de funciones ```exec()``` incluyendo (en linux) ```execl()```, ```execle()```, ```execlp()```, ```execv()```, ```execvp()``` y ```execvpe()```. ¿Por qué piensa usted que existen tantas variaciones para la misma llamada básica?
  > Al parecer dichas variaciones existen para que el programador tenga un abanico de opciones que le permita ser tan dinámico como quiera, pudiendo dotar de diversos parámetros de diversas maneras al proceso que esté invocando.
5. Escriba ahora un programa que use ```wait()``` para esperar que el proceso hijo finalice su ejecución. ¿Cuál es el valor de retorno de la función ```wait()```?, ¿Qué pasa si usted usa la función ```wait``` en el hijo?
  > El valor de retorno de la función ```wait()``` es -1 si hubo un error, 0 si el hijo se esta ejecutando y mayor a 0 si la ejecución del hijo acabó. 
  > Esta no es ejecutada desde el proceso hijo, dado que este proceso hijo no tiene un hijo al cual esperar.
6. Haga un programa, como el del ejercicio anterior, con una breve modificación, la cual consiste en usar ```waitpid()``` en lugar de ```wait()```. ¿Cuándo podría ser ```waitpid()``` útil?
  >```waitpid()```  tiene opciones para no bloquear, sino simplemente verificar y hacer otras cosas útiles que los demás no ofrecen, que pueden serle útiles según el funcionamiento de su programa.
7. Escriba un programa que cree un proceso hijo y entonces en el proceso hijo cierre la salida estandar (```STDOUT FILENO```). ¿Qué pasa si el hijo llama ```printf()``` para imprimir alguna salida después de cerrar el descriptor?
8. Escriba un programa que cree dos hijos y conecte la salida estándar de un hijo a la entrada estándar del otro usando la llamada a sistema ```pipe()```

## 3. Entregable ##

Los entregables para esta practica incluiran:
1. Codigo de los ejercicos propuestos.
2. Solución a las preguntas planteadas. apoyar la explicación con graficas donde lo vea necesario.
