#include <iostream>
#include "Pagamento.h"
using namespace std;

Pagamento::Pagamento(string metodo, double valor) : metodo(metodo), valor(valor), status("Pendente") {};

void Pagamento::processarPagamento(){
	status = (valor <= 1000) ? "Aprovado" : "Recusado";
}

void Pagamento::exibirPagamento() const{
	cout << "Metodo: " << metodo << "\nValor: " << valor << "\nStatus: " << status << "\n";
}

string Pagamento::getStatus() const{
	return status;
}