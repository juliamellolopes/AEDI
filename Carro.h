#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include <string>
#include "Veiculo.h"
#include <vector>
#include "Proprietario.h"

using namespace std;

class Carro : public Veiculo
{
	private:
		int numPortas;
		int capacidadePortaMalas;
		vector<Proprietario>vetP;
	public:
		Carro();
		
		int static contP;
		
		Carro(int numPortas, int capacidadePortaMalas,string motorizacao, int capacidadeTanque, string combustivel);
		
		void setNumPostas(int numPortas);
		int getNumPostas();
		
		void setCapacidadePortaMalas(int capacidadePortaMalas);
		int getCapacidadePortaMalas();
		
		void setProprietario(Proprietario p);
		
		bool verificarProprietario(string nome);
		
		void imprimir();
};
#endif
