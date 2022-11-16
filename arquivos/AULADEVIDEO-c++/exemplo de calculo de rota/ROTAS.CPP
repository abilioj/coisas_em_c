#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

// estrutura usada pra grava o arquivo ROTA.DAT
struct Cidade
{
    char nome[30];
    int x;
    int y;
};

float distancia(Cidade origem, Cidade destino)
{
    float dist = 0.0, dx, dy;
    dx = abs(origem.x - destino.x);
    dy = abs(origem.y - destino.y);
    dist = sqrt(pow(dx, 2) + pow(dy, 2));
    return dist;
}

Cidade cidade;
Cidade origem;
Cidade destino;
fstream arq; // varialvel do arquivo

float distTotal = 0.0;
float dist = 0.0;

int main()
{

    arq.open("rota.dat", ios_base::out | ios_base::binary | ios_base::app);
    if (arq == NULL)
    {
        cout << "Erro, nao foi possivel abrir o arquivo\n";
        system("pause");
        exit(0);
    }

    // ler os dados
    do
    {
        system("cls");
        cout << "cidade : ";
        cin.getline(cidade.nome, 30);
        if (strlen(cidade.nome) == 0)
        {
            break; // saido do laco
        }

        cout << "coord x : ";
        cin >> cidade.x;
        cout << "coord y : ";
        cin >> cidade.y;
        cin.ignore();

        // grava os dados no arquivo
        arq.write((char *)&cidade, sizeof(cidade));
    } while (1);
    arq.close();

    // logica do calculo
    arq.open("rota.dat", ios_base::in);
    if (arq == NULL)
    {
        cout << "Erro, nao foi possivel abrir o arquivo\n";
        system("pause");
        exit(0);
    }

    if (arq.read((char *)&cidade, sizeof(cidade)))
    {
        origem = cidade;
        destino = cidade;
        while (arq.read((char *)&destino, sizeof(cidade)))
        {
            // calcular a distacia entre origem e destino
            dist = distancia(origem, destino);
            distTotal += dist;
            cout << origem.nome << " - " << destino.nome << " = " << dist << endl;
            origem = destino;
        }
        destino = cidade;
        dist = distancia(origem, destino);
        distTotal += dist;
        cout << origem.nome << " - " << destino.nome << " = " << dist << endl;
        cout << "\n\n\nDistancia Total percorrda =" << distTotal << endl;
    }

    system("pause");
    arq.close();
}
