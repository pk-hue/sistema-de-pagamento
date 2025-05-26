#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    string nome;
    string cpf;
    string email;
    string telefone;
    string senha;
public:
    Cliente(string nome, string cpf, string email, string telefone, string senha);
    void exibirDados() const;
    string getCPF() const;
    string getSenha() const;
    bool autenticar(string cpf, string senha) const;
};

#endif