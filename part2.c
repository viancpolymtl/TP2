/*
 * Ecole polytechnique de Montreal - GIGL
 * Automne  2022
 * Initlab - part2.c
 *
 * 2210084 Alexandre Provost-Cardin
 * 2148974 Vincent Anctil
 * Section de laboratoire 01
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void part21 ()
{
    char message1[] = "77dbcb01f571f1c32e196c3a7d27f62e (printed using printf)\n";
    for(int i = 0; message1[i]!= '\n'; i++) {
        printf("%c", message1[i]);
    }

    char message2[] = "77dbcb01f571f1c32e196c3a7d27f62e (printed using write)\n";
    write(1, message2, sizeof(message2));
}

void part22 ()
{
    setvbuf(stdout, NULL, _IONBF, 0);

    char message1[] = "77dbcb01f571f1c32e196c3a7d27f62e (printed using printf)\n";
    for(int i = 0; message1[i]!= '\n'; i++) {
        printf("%c", message1[i]);
    }

    char message2[] = "77dbcb01f571f1c32e196c3a7d27f62e (printed using write)\n";
    write(1, message2, sizeof(message2));
}



int main (int argc, char* argv[])
{
    
    if (argc!=2)
    {   printf("Le programme a un seul paramètre : 1 ou 2\n");
        return 1;
    }
    switch (atoi(argv[1])) {
         case 1:        part21();
                        break;
         case 2:        part22();
                        break;
        default:        printf(" Le paramètre du programme est invalide\n");
                        return 1;
    }
    return 0;
}

