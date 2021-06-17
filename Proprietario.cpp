#include "Proprietario.h"
#include <iostream>
#include <string>

using namespace std;

Proprietario::Proprietario(){
}

void Proprietario::setNome(string nome){
	this -> nome = nome;
}
string Proprietario::getNome(){
	return nome;
}

void Proprietario::imprimir(){
	cout << "Nome proprietario: " << nome << endl;
}
