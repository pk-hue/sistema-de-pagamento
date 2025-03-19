#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <ctime>
#include "Pagamento.h"
#include "Cliente.h"
using namespace std;

class Transacao{
private:
	int id;
	Cliente cliente;
	Pagamento pagamento;
	time_t date;
public:
	Transacao(string id, Cliente cliente, Pagamento pagamento);
	void exibirTransacao() const;
}

#ifndef