#include <iostream>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(string nome, string cpf, string email, string telefone) : nome(nome), cpf(cpf), email(email), telefone(telefone) {};

void Cliente::exibirDados() const{
	cout << "Nome: " << "\nCPF: " << "\nE-mail: " << "\nTelefone: " << "\n";
}

sting Cliente::getCPF() const{
	return cpf;
}