#include <iostream>
#include <limits>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include "SistemaDeLogin.h"
#include "SistemaPagamento.h"
#include "Pagamento.h"
using namespace std;

string limparEspacos(const string& str) {
    size_t inicio = str.find_first_not_of(' ');
    size_t fim = str.find_last_not_of(' ');
    return (inicio == string::npos) ? "" : str.substr(inicio, fim - inicio + 1);
}

int main(){

	SistemaDeLogin sistema;
    int opcao;

    do {
        cout << "\n=== Sistema de Pagamento ===\n";
        cout << "1. Cadastrar Cliente\n";
        cout << "2. Login\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                sistema.cadastrarCliente();
                break;
            case 2: {
                string cpf, senha;
    
    			cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "CPF: ";
				getline(cin, cpf);
				cout << "Senha: ";
				getline(cin, senha);

				cpf = limparEspacos(cpf);
				senha = limparEspacos(senha);

				Cliente* cliente = sistema.autenticarCliente(cpf, senha);

                if (cliente) {
                	system("pause");
                    system("cls");
                    cout << "\nLogin realizado com sucesso!\n";
                    cliente->exibirDados();
                    system("pause");
                    system("cls");
                    //implementar restante do projeto
                    SistemaPagamento sistema;
                    Pagamento pagamento1;
                    pagamento1.solicitarValor();	
					sistema.novaTransacao(*cliente, pagamento1);
//					cout << "Todas as transacoes" << "\n";
//					sistema.listarTransacoes();
					
                } else {
                    cout << "\nCPF ou senha incorretos.\n";
                }
                break;
            }
            case 0:
                cout << "Encerrando o sistema...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);

	


return 0;
};