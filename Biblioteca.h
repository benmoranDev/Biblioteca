
// Created by Benito Moran 26/02/2025.

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <vector>
#include "Livro.h"


class Biblioteca {
private:
    std::vector<Livro> livros;

public:
    void adicionarLivro(int id, std::string titulo, std::string autor);
    void removerLivro(int id);
    void emprestarLivro(int id);
    void devolverLivro(int id);
    void listarLivrosDisponiveis();
    void listarLivrosEmprestados();
};



#endif //BIBLIOTECA_H
