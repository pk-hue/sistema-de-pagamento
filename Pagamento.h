#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>
using namespace std;

class Pagamento{
private:
	string metodo;
	double valor;
	string status;
public:
	Pagamento(string metodo, double valor);
	void processarPagamento();
	void exibirPagamento() const;
	string getStatus() const;
}

#ifndef