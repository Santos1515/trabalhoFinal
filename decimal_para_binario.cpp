#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;  
// Trabalho prático 
// professor Maílson   -   Introdução a computação  -  1º Período
// Grupo: Eduarda Helena e Rafael Santos Messias
int main()  
{  
setlocale(LC_ALL, "Portuguese"); // Configura a exibição de caracteres de língua portuguesa
int a[10], num, i;   
cout << "Digite o número decimal para converter para binário: ";    
cin >> num;  // recebe o número decimal do usuário  
for(i=0; num>0; i++)  // repete a operação enquanto n (resultado da divisão ) for maior que 0  
{    
a[i]=num%2; // armazena cada resto da divisão do número decimal em uma posição do vetor "a"   
num= num/2; // armazena o número inteiro resultado da divisão do número digitado pelo usuário  
}    
cout <<"O equivalente binário para o número digitado é= ";    
for(i=i-1 ;i>=0 ;i--)    
cout<<a[i]; // exibe a saída de tela com os valores das posições do vetor a que estiverem preenchidas
return 0;    
}