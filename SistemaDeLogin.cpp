#include <iostream>
#include "SistemaDeLogin.h"
using namespace std;

void SistemaDeLogin::cadastrarCliente(){

	string nome, cpf, email, telefone, senha;
	
	cout << "Cadastro de novo cliente" << "\n";
	cout << "Nome: ";
	cin.ignore();
	getline(cin, nome);
	cout << "CPF: ";
	getline(cin, cpf);
	cout << "E-mail: ";
	getline(cin, email);
	cout << "Telefone: ";
	getline(cin, telefone);
	cout << "Senha: ";
	getline(cin, senha);
	

	Cliente novoCliente(nome, cpf, email, telefone, senha);
	clientes.push_back(novoCliente);
	system("cls");
	cout << "Cliente cadastrado com sucesso!" << "\n";
	system("pause");
};

Cliente* SistemaDeLogin::autenticarCliente(string cpf, string senha){
	for(auto& cliente : clientes){
		cout << "comparando..." << "\n";
		cout << "CPF informado: " << cpf << "\n";
		cout << "CPF do cliente: " << cliente.getCPF() << "\n";
		cout << "SENHA informada: " << senha << "\n";
		// criptografar senhar para comparação!!!
		
		if(cliente.autenticar(cpf, senha)){
			return &cliente;
		}
	}
	return nullptr;
};