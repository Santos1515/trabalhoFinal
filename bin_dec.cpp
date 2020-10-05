#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
// Trabalho prático 
// professor Maílson   -   Introdução a computação  -  1º Período
// Grupo: Eduarda Helena e Rafael Santos Messias

int main()
{
   setlocale (LC_ALL, "Portuguese");
   int quant1=0, quant2=0, binario[5], decimal=0, p, i, ordem;

   for (i=0; i < 5; i++){

    ordem = i + 1;
	cout <<"Escreva o "<<ordem<<"º digíto: "<<endl;
    // cin >> binario[i] ;
    p = (2 ^ i);
    // decimal = decimal + (binario[i] * p);
    cout << "Valor de P: "  << p << "\n";
    }   
// cout << decimal;
cin >> decimal;

    return 0;
}