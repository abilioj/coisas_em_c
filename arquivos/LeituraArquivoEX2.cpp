#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Declara um file handle para um  arquivo
	ifstream textFile;
	string STRING;
	
	//abrindo o arquivo
	textFile.open("ArqTeste.txt");

	//le linha por linha do arquivo ate encontra o fim de arquivos
	while (!textFile.eof())
	{
		//le o conteudo da linha e coloca variavel STRING
		getline(textFile,STRING);
		//imprime o conteudo
		cout << STRING << endl;
	}

	//fecha o arquivo 
	textFile.close();

	cout << endl << endl;
	system("pause");	

	return 0;
}
