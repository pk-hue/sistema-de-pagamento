#include <iostream>
#include <stdlib.h>
#include <limits>
#include <iomanip>
#include "Pagamento.h"
using namespace std;

Pagamento::Pagamento() : valor(0.0), status("Pendente") {};

void Pagamento::solicitarValor() {
    cout << "Digite o valor da transacao: R$ ";
    while (!(cin >> valor) || valor <= 0) {
        cout << "Valor invalido. Tente novamente: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

double Pagamento::getValor() const {
    return valor;
}

void Pagamento::processarPagamento(){
	status = (valor <= 1000) ? "Aprovado" : "Recusado";
	int opcao;
	
	do{
	
	cout << "Selecione uma das opcoes abaixo: " << "\n";
	cout << "[ 1 ] - Cartao" << "\n";
	cout << "[ 2 ] - Pix" << "\n";
	cout << "[ 3 ] - Boleto" << "\n";
	cout << "Opcao: ";
	cin >> opcao;
	
	if(cin.fail() || opcao < 1 || opcao > 3){
		cout << "Opcao invalida tente novamente" << "\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("pause");
        system("cls");
	}
	system("cls");
	}while(opcao < 1 || opcao > 3);
	
	if(opcao == 1){
	
	int opcao_cartao;
	do {
        cout << "Selecione uma das opcoes abaixo: " << "\n";
        cout << "[ 1 ] - Debito" << "\n";
        cout << "[ 2 ] - Credito" << "\n";
        cout << "Opcao: ";
        cin >> opcao_cartao;

        if(cin.fail() || (opcao_cartao != 1 && opcao_cartao != 2)){
            cout << "Opcao invalida! Tente novamente.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("pause");
            system("cls");
        }
        
        metodo = (opcao_cartao == 1) ? "Debito" : "Credito";
        
        } while(opcao_cartao != 1 && opcao_cartao != 2);
	}else if(opcao == 2){
		metodo = "Pix";
	}else{
		metodo = "Boleto";
	}
	cout << "Metodo selecionado: " << metodo << "\n";
    system("pause");
    system("cls");
}

void Pagamento::exibirPagamento() const {
    cout << "Metodo: " << metodo << "\n";
    cout << "Valor: R$ " << setfill('0') << setw(7) << fixed << setprecision(3) << valor << "\n";
    cout << "Status: " << status << "\n";
}

string Pagamento::getStatus() const{
	return status;
}