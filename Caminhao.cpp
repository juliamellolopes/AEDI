#include "Caminhao.h"
#include <iostream>
#include <string>
#include "Veiculo.h"
#include <vector>
#include "Proprietario.h"

using namespace std;

Caminhao::Caminhao(){
}
		
int Caminhao::contP = 0;		
		
Caminhao::Caminhao(float cargaSuportada,int numEixos, string motorizacao, int capacidadeTanque, string combustivel) : Veiculo(motorizacao,capacidadeTanque,combustivel){
	this -> cargaSuportada = cargaSuportada;
	this -> numEixos = numEixos;
}
		
void Caminhao::setCargaSuportada(float cargaSuportada){
	this -> cargaSuportada = cargaSuportada;
}
float Caminhao::getCargaSuportada(){
	return cargaSuportada;
}
		
void Caminhao::setNumEixos(int numEixos){
	this -> numEixos = numEixos;
}
int Caminhao::getNumEixos(){
	return numEixos;
}
		
void Caminhao::setProprietario(Proprietario p){
	if(contP < 2){
		vetP.push_back(p);
		contP++;
	}else{
		cout << "Limite de proprietarios atingido" ;
	}
}
bool Caminhao::verificarProprietario(string nome){
	for(int i = 0; i < int(vetP.size()); i++){
		if(vetP[i].getNome() == nome){
			return 1;
		}
	}
	return 0;
}

void Caminhao::imprimir(){
	Veiculo::imprimir();
	cout << "Carga suportada: " << cargaSuportada << endl;
	cout << "Numero de eixos: " << numEixos << endl;
	for(int i = 0; i < int(vetP.size()); i++){
		vetP[i].imprimir();
	}
}

