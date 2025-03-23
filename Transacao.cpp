#include <iostream>
#include "Transacao.h"
using namespace std;

Transacao::Transacao(int id, Cliente cliente, Pagamento pagamento) : id(id), cliente(cliente), pagamento(pagamento), date(time(0)) {};

void Transacao::exibirTransacao() const{
	cout << "ID da transacao: " << id << "\n";
	cliente.exibirDados();
	pagamento.exibirPagamento();
	cout << "Data: " << ctime(&date) << "\n";
}