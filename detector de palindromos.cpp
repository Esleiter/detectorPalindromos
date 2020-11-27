/*
	Nombre: detector de palindromos
	Autor: Esleiter Jose Fajardo Laya
	Fecha: 26/11/20
	Lugar: Venezuela
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	system("color F0");
	printf("\n Desarrollado por Esleiter Fajardo \n");
	
	char cadena[200];
	//char arregloDeCaracteres[] = {'h', 'o', 'l', 'a'};

	printf("\n Introduce una cadena de texto: \n");
	
	gets(cadena);
	strrev(cadena);
	cout<<cadena<<endl;
	
	system("PAUSE");
	return 0;
}

//Segunda Opcion

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color F0");

    char arregloDeCaracteres[] = {'h', 'o', 'l', 'a', '\0'};
    //char cadena[200];
    int i = 0;
    int j;
    //printf("Introduce una cadena de texto: \n");
    //gets(cadena);
    printf("\nEl arreglo De Caracteres introducido es: %s\n\n", arregloDeCaracteres);
    while(arregloDeCaracteres[i]!='\0'){
        i++;
    }
    printf("El arreglo de caracteres al reves es:\n\t");
    for (j=i-1; j>=0; j--){
        printf("%c",arregloDeCaracteres[j]);
    }
    puts("");
    system("PAUSE");
    return 0;
}

*/


