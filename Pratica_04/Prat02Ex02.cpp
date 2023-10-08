#include <iostream>

using namespace std;

char numeros[10] = {'0','1','2','3','4','5','6','7','8','9'};
wchar_t cedilha = L'ç'; //, acento = L'ã';
int i;
int main(){
for(i=0; i<10; i++){
cout << "O número " << numeros[i] << " tem código numérico decimal " << int(numeros[i]) << endl;
cout << "Seu código octal é " << oct << int(numeros[i]) << " e o hexadecimal é " << hex << int(numeros[i]) << endl;
}
wcout << L"Imprimindo o cedilha: " << cedilha;// << L" e o acento: " << acento << endl;
}