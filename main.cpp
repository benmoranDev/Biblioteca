#include <iostream>
#include "Biblioteca.h"
#include <locale>
#include <string>


using namespace std;

int main() {

    setlocale(LC_ALL, "");


    Biblioteca biblioteca;
    int opcao, id;
    string titulo, autor;

    do {
        cout << "\n===== Sistema de Biblioteca =====\n";
        cout << "1. Adicionar Livro\n";
        cout << "2. Remover Livro\n";
        cout << "3. Emprestar Livro\n";
        cout << "4. Devolver Livro\n";
        cout << "5. Listar Livros Disponiveis\n";
        cout << "6. Listar Livros Emprestados\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "ID do livro: ";
            cin >> id;
            cin.ignore();
            cout << "Titulo: ";
            getline(cin, titulo);
            cout << "Autor: ";
            getline(cin, autor);
            biblioteca.adicionarLivro(id, titulo, autor);
            break;

            case 2:
                cout << "ID do livro para remover: ";
            cin >> id;
            biblioteca.removerLivro(id);
            break;

            case 3:
                cout << "ID do livro para emprestar: ";
            cin >> id;
            biblioteca.emprestarLivro(id);
            break;

            case 4:
                cout << "ID do livro para devolver: ";
            cin >> id;
            biblioteca.devolverLivro(id);
            break;

            case 5:
                biblioteca.listarLivrosDisponiveis();
            break;

            case 6:
                biblioteca.listarLivrosEmprestados();
            break;

            case 0:
                cout << "Saindo do sistema...\n";
            break;

            default:
                cout << "Opcao invalida! Tente novamente.\n";
            break;
        }
    } while (opcao != 0);

    return 0;
}