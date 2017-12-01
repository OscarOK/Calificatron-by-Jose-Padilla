#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

main()
{
    system("color 0B");
    SetConsoleTitle("jaja saludos");
    char opci;
    float calif1 = 0, calif2 = 0, calif3 = 0, calfin = 0;
    cout << "***CALCULADORA DE CALIFICACION UACH***" << endl << endl;
    do
    {
        cout << "Introduce la calificacion de tu primer parcial" << endl;
        cin >> calif1;
        cout << "Introduce la calificacion de tu segundo parcial" << endl;
        cin >> calif2;
        cout << "introduce la calificacion de tu tercer parcial" << endl;
        cin >> calif3;
        calif1 = (calif1 * 3);
        calif2 = (calif2 * 3);
        calif3 = (calif3 * 4);
        calfin = (calif1+calif2+calif3);
        cout << "Tu calificacion semestral es" << endl;
        printf("\n\n%.2f\n\n", calfin/10);

        cout << "quieres continuar en el programa?(s/n)" << endl;
        cin >> opci;
        system ("cls");
    }while (opci=='s');

    cout << "Software designed by Jose Manuel Padilla Caro" << endl << endl;
    cout << "Jaja saludos prro" << endl;
    getch();
    return 0;
}
