#include "Veiculo.h"
#include <iostream>
#include <string>

using namespace std;

Veiculo::Veiculo(){
}
		
Veiculo::Veiculo(string motorizacao, int capacidadeTanque, string combustivel){
	this -> motorizacao = motorizacao;
	this -> capacidadeTanque = capacidadeTanque;
	this -> combustivel = combustivel;
}
		
void Veiculo::setMotorizacao(string motorizacao){
	this -> motorizacao = motorizacao;
}
string Veiculo::getMotorizacao(){
	return motorizacao;
}
		
void Veiculo::setCapacidadeTanque(int capacidadeTanque){
	this -> capacidadeTanque = capacidadeTanque;
}
int Veiculo::getCapacidadeTanque(){
	return capacidadeTanque;
}
		
void Veiculo::setCombustivel(string combustivel){
	this -> combustivel = combustivel;
}
string Veiculo::getCombustivel(){
	return combustivel;
}
		
void Veiculo::imprimir(){
	cout << "\n\nMotorização: " << motorizacao << endl;
	cout << "Capacidade de tanque: " << capacidadeTanque << endl;
	cout << "Combustivel: " << combustivel << endl;
}
