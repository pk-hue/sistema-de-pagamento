#include <iostream>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(string nome, string cpf, string email, string telefone) {
    this->nome = nome;
    this->cpf = cpf;
    this->email = email;
    this->telefone = telefone;
}

void Cliente::exibirDados() const{
	cout << "Nome: " << nome << "\n";
    cout << "CPF: " << cpf << "\n";
    cout << "E-mail: " << email << "\n";
    cout << "Telefone: " << telefone << "\n";
}

string Cliente::getCPF() const{
	return cpf;
}