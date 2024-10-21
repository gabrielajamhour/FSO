#include <stdio.h>
#define TAM_CADENA 200

int main() {
    // Puntero a caracter para copiar las cadenas
    char *p1, *p2;

    // A) Definir las variables cadena y cadena2
    char cadena[TAM_CADENA];
    char cadena2[TAM_CADENA];

    // B) Leer cadena de consola
    printf("Introduce una cadena: ");
    scanf("%[^\n]", cadena);

    // C) Convertir a may�sculas

    p1 = cadena;
    p2 = cadena2;

    while (*p1 != '\0') {
        if (*p1 >= 'a' && *p1 <= 'z') {
            *p2 = *p1 - 32; // Convertir a may�scula
        } else {
            *p2 = *p1; // Mantener el car�cter tal cual si no es min�scula
        }
        p1++; // Avanzar puntero de origen
        p2++; // Avanzar puntero de destino
    }

    // Acordarse de poner el cero final en cadena2
    *p2 = '\0';

    // D) Sacar por consola la cadena2
    printf("Cadena en may�sculas: %s\n", cadena2);

    return 0;
}
