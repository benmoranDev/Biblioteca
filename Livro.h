//
// Created by amajuscelinorx on 26/02/2025.
//

#ifndef LIVRO_H
#define LIVRO_H
#include <string>

class Livro {
public:
    int id;
    std::string titulo;
    std::string autor;
    bool emprestado;

    Livro(int _id, std::string _titulo, std::string _autor);
};

#endif // LIVRO_H


