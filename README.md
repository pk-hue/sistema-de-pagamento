# 💸 Sistema de Pagamento em C++

Este projeto é um sistema de pagamento desenvolvido em **C++**, com o objetivo de simular operações financeiras básicas, como cadastro de clientes, realização de transações e emissão de comprovantes.

> 📚 Projeto criado para fins de estudo e aperfeiçoamento em C++ e desenvolvimento back-end.

---

## ⚙️ Funcionalidades

- [x] Cadastro de clientes  
- [x] Registro de pagamentos  
- [x] Emissão de comprovantes  
- [x] Consulta de transações por cliente ou data  
- [x] Relatórios financeiros  
- [ ] Integração com banco de dados (em desenvolvimento)

---

## 📁 Estrutura do Projeto

sistema-pagamento/
├── include/ # Arquivos de cabeçalho (.h)

├── src/ # Implementações (.cpp)

├── data/ # Arquivos de dados (ex: .txt, .csv, binário)

├── main.cpp # Arquivo principal

└── README.md # Este arquivo


---

## ✅ Requisitos

- Compilador C++ com suporte a **C++20** ou superior
- Sistema operacional: Windows ou Linux
- IDE recomendada: Dev-C++, Visual Studio Code, ou Neovim

---

## 🧪 Como Compilar e Executar

### Usando `g++` no terminal:

```bash
g++ -std=c++20 -Iinclude src/*.cpp main.cpp -o sistema_pagamento
./sistema_pagamento
