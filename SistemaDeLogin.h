#ifndef SISTEMADELOGIN_H
#define SISTEMADELOGIN_H

#include <vector>
#include "Cliente.h"
using namespace std;

class SistemaDeLogin {
private:
    vector<Cliente> clientes;
public:
    void cadastrarCliente();
    Cliente* autenticarCliente(string cpf, string senha);
};

#endif