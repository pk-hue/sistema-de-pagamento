#include <iostream>
#include "SistemaPagamento.h"
#include "Cliente.h"
#include "Pagamento.h"
using namespace std;

int main(){
	SistemaPagamento sistema;
	
	Cliente cliente1("PK", "11101438428", "ph159@gmail.com",  "11932247426");
	Pagamento pagamento1("Cartao", 100.0);
	
	sistema.novaTransacao(cliente1, pagamento1);
	
	cout << "Todas as transacoes" << "\n";
	sistema.listarTransacoes();
	
return 0;
};