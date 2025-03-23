#ifndef SISTEMA_PAGAMENTO_H
#define SISTEMA_PAGAMENTO_H

#include <vector>
#include "Transacao.h"
using namespace std;

class SistemaPagamento{
private:
	vector <Transacao> transacoes;
	int proximoID{1};
public:
	void novaTransacao(const Cliente& cliente, const Pagamento& pagamento);
	void listarTransacoes() const;
};

#endif