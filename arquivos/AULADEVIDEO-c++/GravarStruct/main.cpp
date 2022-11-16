#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Aluno {
    int ra;
    char nome[30];
};
Aluno aluno;

int main() {
    fstream arq("aluno.dat", ios_base::in | ios_base::out | ios_base::binary | ios_base::app);

    do {
        system("cls");
        cout << "RA (0 pra sair) : ";
        cin >> aluno.ra;
        if (aluno.ra == 0)break; // saido do laco
        cin.ignore();

        cout << "Nome (ENTER pra sair) : ";
        cin.getline(aluno.nome, 30);
        if(strlen(aluno.nome)==0) break;

        // grava os dados no arquivo
        arq.write((char *)&aluno, sizeof(aluno));
    } while (1);

    system("cls");
    //posicionado o poteiro arquivo pra o inicio
    arq.seekg(0,ios_base::beg);
    while (arq.read((char *)&aluno, sizeof(aluno))) {
        cout << " RA: " << aluno.ra << " Nome: " << aluno.nome << endl;
    }
    arq.close();


    system("pause");
    return 0;
}
