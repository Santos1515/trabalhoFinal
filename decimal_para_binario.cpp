#include <stdlib.h>
#include <iostream>
#include <locale.h>
using namespace std;  
// Trabalho pr�tico 
// professor Ma�lson   -   Introdu��o a computa��o  -  1� Per�odo
// Grupo: Eduarda Helena e Rafael Santos Messias
int main()  
{  
setlocale(LC_ALL, "Portuguese"); // Configura a exibi��o de caracteres de l�ngua portuguesa
int a[10], num, i;   
cout << "Digite o n�mero decimal para converter para bin�rio: ";    
cin >> num;  // recebe o n�mero decimal do usu�rio  
for(i=0; num>0; i++)  // repete a opera��o enquanto n (resultado da divis�o ) for maior que 0  
{    
a[i]=num%2; // armazena cada resto da divis�o do n�mero decimal em uma posi��o do vetor "a"   
num= num/2; // armazena o n�mero inteiro resultado da divis�o do n�mero digitado pelo usu�rio  
}    
cout <<"O equivalente bin�rio para o n�mero digitado �= ";    
for(i=i-1 ;i>=0 ;i--)    
cout<<a[i]; // exibe a sa�da de tela com os valores das posi��es do vetor a que estiverem preenchidas
return 0;    
}