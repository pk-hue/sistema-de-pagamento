#include <iostream>
#include "Transacao.h"
using namespace std;

Transacao::Transacao(string id, Cliente cliente, Pagamento pagamento) : id(id), Cliente(cliente), Pagamento(pagamento), date(time(0)) {};

void Transacao::exibirTransacao() const{
	cout << "ID da transacao: " << id << "\n";
	cliente.exibirDados();
	pagamento.exibirPagamento();
	cout << "Data: " << ctime(&data) << "\n";
}