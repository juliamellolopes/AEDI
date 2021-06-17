#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include <string>

using namespace std;

class Veiculo
{
	private:
		string motorizacao;
		int capacidadeTanque;
		string combustivel;
	public:
		Veiculo();
		
		Veiculo(string motorizacao, int capacidadeTanque, string combustivel);
		
		void setMotorizacao(string motorizacao);
		string getMotorizacao();
		
		void setCapacidadeTanque(int capacidadeTanque);
		int getCapacidadeTanque();
		
		void setCombustivel(string combustivel);
		string getCombustivel();
		
		void imprimir();
};
#endif
