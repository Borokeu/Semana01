#include <iostream>
#define N 10

using namespace std;

int main(){
    string alunoNome[N];
    int qtAlunos, qtNotas, i, j;
    float notas [N][N], total=0, media=0;

    //1
    cout << "Informe a quantidade de alunos: ";
    cin >> qtAlunos;
        if (qntAlunos > 10){
        cout << "Nao eh possivel utilizar o programa para mais de 10 alunos";
        exit (-1);
        }
    
    //2
    cout << "Informe a quantidade de notas por aluno: ";
    cin >> qtNotas;
        if (qntNotas > 10){
        cout << "Nao eh possivel utilizar o programa para mais de 10 notas por aluno";
        exit (-1);
        }
    
    //1
    cout << "Informe o nome do aluno: ";
    getline(cin >> ws, alunoNome);



    //3
    for (i = 1; i <= qtNotas; i++)
    {
      cout << "Informe a nota " << i << ":";
      cin >> notas;
      total += notas;
      }
    
    //4
    media = total/qtNotas;
    cout << "A média do aluno " << alunoNome << "é: " << media;


    /*Calcular e armazenar as notas de X alunos e exibir tudo
    Quantas notas? informado pelo usuário
    Qual o tipo de nota? de 0 a 10 com casas decimais

    1 - Quantos alunos serão? testar se não feriu o limite

    2 - Quantas notas serão para cada aluno? testar se não feriu o limite

    3 - Qual é o nome do aluno X?

    4 - Quais são as notas do aluno X?

    5 - Calcular a média do aluno X e mostrar na tela com as notas individuais

    6 - Repetir até o último aluno
    */
    return 0;
}