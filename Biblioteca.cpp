//
// Created by amajuscelinorx on 26/02/2025.
//

#include "Biblioteca.h"

#include <iostream>


using namespace std;

void Biblioteca::adicionarLivro(int id, string titulo, string autor) {
    livros.push_back(Livro(id, titulo, autor));
    cout << "Livro '" << titulo << "' adicionado com sucesso!\n";
}

void Biblioteca::removerLivro(int id) {
    for (size_t i = 0; i < livros.size(); i++) {
        if (livros[i].id == id) {
            cout << "Livro '" << livros[i].titulo << "' removido!\n";
            livros.erase(livros.begin() + i);
            return;
        }
    }
    cout << "Livro não encontrado!\n";
}

void Biblioteca::emprestarLivro(int id) {
    for (auto &livro : livros) {
        if (livro.id == id) {
            if (!livro.emprestado) {
                livro.emprestado = true;
                cout << "Livro '" << livro.titulo << "' emprestado com sucesso!\n";
            } else {
                cout << "Livro já está emprestado!\n";
            }
            return;
        }
    }
    cout << "Livro não encontrado!\n";
}

void Biblioteca::devolverLivro(int id) {
    for (auto &livro : livros) {
        if (livro.id == id) {
            if (livro.emprestado) {
                livro.emprestado = false;
                cout << "Livro '" << livro.titulo << "' devolvido com sucesso!\n";
            } else {
                cout << "Este livro não estava emprestado!\n";
            }
            return;
        }
    }
    cout << "Livro não encontrado!\n";
}

void Biblioteca::listarLivrosDisponiveis() {
    cout << "\n📚 Livros Disponíveis:\n";
    for (const auto &livro : livros) {
        if (!livro.emprestado) {
            cout << "ID: " << livro.id << " | " << livro.titulo << " - " << livro.autor << endl;
        }
    }
}

void Biblioteca::listarLivrosEmprestados() {
    cout << "\n📕 Livros Emprestados:\n";
    for (const auto &livro : livros) {
        if (livro.emprestado) {
            cout << "ID: " << livro.id << " | " << livro.titulo << " - " << livro.autor << endl;
        }
    }
}