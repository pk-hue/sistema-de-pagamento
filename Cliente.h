#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
private:
	string nome;
	string cpf;
	string email;
	string telefone;
public:
	Cliente(string nome, string cpf, string email, string telefone);
	void exibirDados() const;
	string getCPF() const;
};

#endif