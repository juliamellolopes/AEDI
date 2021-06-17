#include "Carro.h"
#include <iostream>
#include <string>
#include "Veiculo.h"

using namespace std;

Carro::Carro(){
}

int Carro::contP = 0;
		
Carro::Carro(int numPortas, int capacidadePortaMalas,string motorizacao, int capacidadeTanque, string combustivel) : Veiculo(motorizacao,capacidadeTanque,combustivel){
	this -> numPortas = numPortas;
	this -> capacidadePortaMalas = capacidadePortaMalas;
}
		
void Carro::setNumPostas(int numPortas){
	this -> numPortas = numPortas;
}
int Carro::getNumPostas(){
	return numPortas;
}
		
void Carro::setCapacidadePortaMalas(int capacidadePortaMalas){
	this -> capacidadePortaMalas = capacidadePortaMalas;
}
int Carro::getCapacidadePortaMalas(){
	return capacidadePortaMalas;
}

void Carro::setProprietario(Proprietario p){
	if(contP < 2){
		vetP.push_back(p);
		contP++;
	}else{
		cout << "Limite de proprietarios atingido" ;
	}
}
bool Carro::verificarProprietario(string nome){
	for(int i = 0; i < int(vetP.size()); i++){
		if(vetP[i].getNome() == nome){
			return 1;
		}
	}
	return 0;
}

void Carro::imprimir(){
	Veiculo::imprimir();
	cout << "Numero de portas: " << numPortas << endl;
	cout << "Capacidade do porta malas: " << capacidadePortaMalas << endl;
	for(int i = 0; i < int(vetP.size()); i++){
		vetP[i].imprimir();
	}
}
