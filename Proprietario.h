#ifndef PROPRIETARIO_H
#define PROPRIETARIO_H
#include <iostream>
#include <string>

using namespace std;

class Proprietario
{
	private:
		string nome;
	public:
		Proprietario();
		
		void setNome(string nome);
		string getNome();
		
		void imprimir();
};
#endif
