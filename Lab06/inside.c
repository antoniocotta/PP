/**
 * Arquivo: inside.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <string.h>

int contem(char *s1, char *s2) {
    char *p1, *p2, *p3;
    p1 = s1;
    p2 = s2;

    for (; *p2 != '\0'; p1++, p2++) {
        if (*p1 == *p2) {
            p3 = p1;
            for (p2; *p2 != '\0' && *p1 == *p2; p1++, p2++)
                ;
            if (*p2 == '\0')
                return p3 - s1;
            p1 = p3;
            p2 = s2;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];
    printf("Entre com a primeira string: ");
    scanf("%s", s1);
    printf("Entre com a segunda string: ");
    scanf("%s", s2);

    int index = contem(s1, s2);

    if (index == -1) {
        printf("A primeira string não está contida na segunda.\n");
    } else {
        int i;
        for (i = 0; i < index; i++) {
            printf("%c", s2[i]);
        }
        for (i = 0; i < strlen(s1); i++) {
            printf("*");
        }
        for (i = index + strlen(s1); i < strlen(s2); i++) {
            printf("%c", s2[i]);
        }
    }

    return 0;
}