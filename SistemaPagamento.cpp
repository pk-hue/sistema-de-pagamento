#include <iostream>
#include "SistemaPagamento.h"
using namespace std;

void SistemaPagamento::novaTransacao(const Cliente& cliente, const Pagamento& pagamento) {
    Pagamento pagamentoCopia = pagamento;
    pagamentoCopia.processarPagamento();
    Transacao transacao(proximoID++, cliente, pagamentoCopia);
    transacoes.push_back(transacao);
    cout << "Pagamento processado com sucesso!" << "\n";
    transacao.exibirTransacao();
}

void SistemaPagamento::listarTransacoes() const {
    for (const auto& t : transacoes) {
        cout << "\n--------------------\n";
        t.exibirTransacao();
    }
}