#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Caminhao.h"
#include "Carro.h"
#include <vector>

int main(int argc, char** argv){
	
	string motorizacao;
	int capacidadeTanque;
	string combustivel;
	int numPortas;
	int capacidadePortaMalas;
	float cargaSuportada;
	int numEixos;	
	string nome;
	int opc;
	vector<Carro>vetC;
	vector<Caminhao>vetCa;
	Proprietario p;
	
	setlocale(LC_ALL,"portuguese");
	
	cout << "\n\t--------INICIALIZANDO----------------" << endl;
	do{
		cout << "\n\n1)Cadastrar um caminhão" << endl;
		cout << "2)Cadastrar um carro" << endl;
		cout << "3)Imprimir todos os carros e caminhões cadastrados" << endl;
		cout << "4)Localizar um veiculo pelo nome do seu proprietário e imprimir os dados" << endl;
		cout << "5)Sair do programa" << endl;
		cin >> opc;
		
		switch(opc){
			case 1:{
				cin.ignore();
				cout << "\nInforme a motorização: ";
				getline(cin, motorizacao);
				cout << "Informe a capacidade do tanque: ";
				cin >> capacidadeTanque;
				cout << "Informe o combustivel: ";
				cin.ignore();
				getline(cin, combustivel);
				cout << "Informe a carga suportada: ";
				cin >> cargaSuportada;
				cout << "Informe o numero de eixos: ";
				cin >> numEixos;
				cout << "Informe o nome do proprietario: ";
				cin.ignore();
				getline(cin, nome);
				Caminhao ca(cargaSuportada,numEixos, motorizacao, capacidadeTanque, combustivel);
				p.setNome(nome);
				ca.setProprietario(p);
				do{
					cout << "Deseja cadastrar outro proprietario?" << endl;
					cout << "1)sim" << endl;
					cout << "2)não" << endl;
					cin >> opc;
					if(opc == 1){
						cin.ignore();
						cout << "Informe o nome do proprietario: ";
				        getline(cin, nome);
				        p.setNome(nome);
				        ca.setProprietario(p);
					}else{
						break;
					}
				}while(opc != 2);
				vetCa.push_back(ca);
				break;
			}
			case 2:{
				cin.ignore();
				cout << "\nInforme a motorização: ";
				getline(cin, motorizacao);
				cout << "Informe a capacidade do tanque: ";
				cin >> capacidadeTanque;
				cout << "Informe o combustivel: ";
				cin.ignore();
				getline(cin, combustivel);
				cout << "Informe o numero de portas: ";
				cin >> numPortas;
				cout << "Informe a capacidade do porta malas: ";
				cin >> capacidadePortaMalas;
				cout << "Informe o nome do proprietario: ";
				cin.ignore();
				getline(cin, nome);
				Carro c (numPortas, capacidadePortaMalas, motorizacao, capacidadeTanque, combustivel);
				Proprietario p;
				p.setNome(nome);
				c.setProprietario(p);
				do{
					cout << "Deseja cadastrar outro proprietario?" << endl;
					cout << "1)sim" << endl;
					cout << "2)não" << endl;
					cin >> opc;
					if(opc == 1){
						cin.ignore();
						cout << "Informe o nome do proprietario: ";
				        getline(cin, nome);
				        Proprietario p;
				        p.setNome(nome);
				        c.setProprietario(p);
					}else{
						break;
					}
			    }while(opc != 2);
			    vetC.push_back(c);	
			    }break;
			case 3:{
				cout << "\nCarros: " << endl;
				for(int i = 0;  i < int(vetC.size()); i++){
					vetC[i].imprimir();
				}
				cout << "\nCaminhões: " << endl;
				for(int i = 0;  i < int(vetCa.size()); i++){
					vetCa[i].imprimir();
				}
				break;
			}
			case 4:{
				cin.ignore();
				cout << "\nInforme o nome do proprietario: ";
				getline(cin, nome);
				for(int i = 0; i < int(vetC.size()); i++){
					int x;
				    x = vetC[i].verificarProprietario(nome);
				    if(x != 0){
				    	vetC[i].imprimir();
					}
				}
				for(int i = 0; i < int(vetCa.size()); i++){
					int y;
				    y = vetCa[i].verificarProprietario(nome);
				    if(y != 0){
				    	vetCa[i].imprimir();
					}
				}
				break;
			}
			case 5:{
				cout << "\n\nSaindo do programa!!";
				break;
			}
			default:{
				cout << "Opção inálida";
				break;
			}
		}
	}while(opc != 5);
	
	return 0;
}
