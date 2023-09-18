/*
 * Ecole polytechnique de Montreal - GIGL
 * Automne  2022
 * Initlab - part1.c
 * 
 * 2210084 Alexandre Provost-Cardin
 * 2148974 Vincent Anctil
 * Section de laboratoire 01
 */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main () {
    int file = open("output2.txt", O_WRONLY | O_TRUNC);
    printf("Saisissez votre texte suivi de CTRL-D :\n");

    if (file == -1) {
        perror("Appel système open a échoué");
        _exit(0);
    }

    char c;
    
    while (read(0, &c, 1) == 1) {
        write(file, &c, 1);
    }

    close(file);
    return 0;
}
    
