#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(string nome, string cpf, string email, string telefone, string senha) {
    this->nome = nome;
    this->cpf = cpf;
    this->email = email;
    this->telefone = telefone;
    this->senha = senha;
}

void Cliente::exibirDados() const {
    cout << "Nome: " << nome << "\n";
    cout << "CPF: " << cpf << "\n";
    cout << "E-mail: " << email << "\n";
    cout << "Telefone: " << telefone << "\n";
}

string Cliente::getCPF() const {
    return cpf;
}

string Cliente::getSenha() const {
    return senha;
}

bool Cliente::autenticar(string cpf, string senha) const {
    return (this->cpf == cpf && this->senha == senha);
}