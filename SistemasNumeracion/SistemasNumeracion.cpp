// SistemasNumeracion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

void ImprimeBinario(int numero)
{
        if (numero == 0) {
            printf("0\n");
            return;
        }

        // Creamos un buffer para almacenar el binario como cadena
        char binario[33]; // 32 bits + 1 para el carácter nulo
        int index = 0;

        while (numero > 0) {
            binario[index++] = (numero % 2) + '0'; // Convertimos el bit a carácter
            numero = numero / 2; // Avanzamos dividiendo entre 2
        }

        binario[index] = '\0'; // Terminamos la cadena con el carácter nulo

        // Invertimos la cadena para mostrar el binario en el orden correcto
        for (int i = index - 1; i >= 0; i--) {
            printf("%c", binario[i]);
        }

        printf("\n");
}

void ImprimeHexadecimal(int numero)
{
	printf("X%i\n", numero);

}

int main()
{
	printf("Conversion de base.\n");
	printf("Introduce un numero\n");
	
	char input[100];
	fgets(input, 100, stdin);

	int numero = atoi(input);

	printf("El numero binario es: ");
	ImprimeBinario(numero);

	printf("El numero hexadecimal es: ");
	ImprimeHexadecimal(numero);
	const char* str = "hola mundo\n";

	printf("el valor de cada caracter de la cadena %s es:\n", str);

	for (int i = 0; i < 11; i++)
	{
		printf("%i \n", str[i]);
	}
	return 0;
}

