#include <iostream>
#include "SistemaPagamento.h"
#include "Cliente.h"
#include "Pagamento.h"
using namespace std;

int main(){
	SistemaPagamento sistema;
	
	Cliente cliente1("PK", "12345678900", "ph159@gmail.com",  "11900000000");
	Pagamento pagamento1;
	pagamento1.solicitarValor();
	
	sistema.novaTransacao(cliente1, pagamento1);
	
	cout << "Todas as transacoes" << "\n";
	sistema.listarTransacoes();
	
return 0;
};