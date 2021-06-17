#ifndef CAMINHAO_H
#define CAMINHAO_H
#include <iostream>
#include <string>
#include "Veiculo.h"
#include <vector>
#include "Proprietario.h"

using namespace std;

class Caminhao : public Veiculo
{
	private:
		float cargaSuportada;
		int numEixos;
		vector<Proprietario>vetP;
	public:
		Caminhao();
		
		int static contP;
		
		Caminhao(float cargaSuportada,int numEixos, string motorizacao, int capacidadeTanque, string combustivel);
		
		void setCargaSuportada(float cargaSuportada);
		float getCargaSuportada();
		
		void setNumEixos(int numEixos);
		int getNumEixos();
		
		void setProprietario(Proprietario p);
		
		bool verificarProprietario(string nome);
		
		void imprimir();
};

#endif
