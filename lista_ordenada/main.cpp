#include <iostream>
#include <cstdlib>
#include "listaord.h"

int Menu()
{
    int escolha;
    
    cout << "--------------------------\n";
    cout << "Selecione uma opcao:\n";
    cout << "1. Insere elemento (no. inteiro) na lista\n";
    cout << "2. Remove elemento (no. inteiro) da lista\n";
    cout << "3. Imprime elementos da lista.\n";
    cout << "0. Fim.\n";
    cout << "Sua opcao: ";
    cin >> escolha;
    return escolha;
}

int main(int argc, char *argv[])
{
    lista_ord Lista;
    int escolha, Item, n;
    
    while (escolha = Menu())
        
        switch(escolha) {
            case 0:
                return 0;
            case 1:
                cout << "Entre com elemento para inserir: ";
                cin >> Item;
                Lista.insere(Item);
                break;
            case 2:
                cout << "Entre com elemento para remover: ";
                cin >> Item;
                if (Lista.remove(Item))
                    cout << "Item " << Item << " removido.\n";
                else
                    cout << "Item nao existe\n";
                break;
            case 3:
                cout << "Conteudo da lista:\n";
                Lista.imprime();
                break;   
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}