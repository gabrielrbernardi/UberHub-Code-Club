// Data de criação: 07/08/2024
// Autor: Gabriel Bernardi - github.com/gabrielrbernardi

/* 
    Objetivos do projeto: Desenvolver os conceitos vistos durante o curso
    Descrição do projeto: 
        Seu programa utilizará técnicas que você aprendeu em sala.

        Primeiro, seu programa deverá ser capaz de cadastrar uma senha, para operações específicas. As outras opções só aparecerão se a senha for cadastrada, com a confirmação. A senha deve ter no minimo 3 caracteres
        
        Além disso, você lidará com produtos, em um sistema.
        Alguns produtos serão pré-cadastrados, com os seguintes códigos (índice em um vetor) e valores
            0 - 3.50
            1 - 10.59
            2 - 2.99
            3 - 9.99
            4 - 56.79
            5 - 27.36
        Seu programa também deve ser capaz de aceitar a inclusão de um novo produto, com seu valor
        Seu programa deve mostrar a lista de produtos cadastrados, similar ao que foi visto anteriormente, ao selecionar uma opção do menu

        O usuário escolherá quantos produtos deseja adicionar ao "carrinho", informando a quantidade de itens e o código do produto
        Ao digitar a quantidade "-1", a inserção dos valores deverá ser encerrada e o subtotal da compra deverá ser mostrado
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string senha, confirma_senha, temp_senha;
    // cadastro de senha
    while(1){
        cout << "Cadastre uma senha de acesso: ";
        // cin >> temp_senha;
        getline(cin, temp_senha);
        if(temp_senha == "" || temp_senha.size() < 3){ // Valida se senha eh valida
            cout << "Erro! Senha invalida!" << endl;
        }else{
            while(1){
                cout << "Confirme a senha: ";
                getline(cin, confirma_senha);
                if (confirma_senha == "" || confirma_senha.size() < 3){ // Valida se a confirmacao de senha eh valida
                    cout << "Senha de confirmacao invalida!" << endl;
                }else{
                    break;
                }
            }
            if (confirma_senha == temp_senha){
                senha = temp_senha;
                cout << "Senha cadastrada com sucesso!" << endl;
                break;
            }else{
                cout << "Erro! Senhas não conferem!" << endl;
            }
        }
    }

    //Insercao dos produtos pre-cadastrados
    vector<double> produtos;
    produtos.push_back(3.50);
    produtos.push_back(10.59);
    produtos.push_back(2.99);
    produtos.push_back(9.99);
    produtos.push_back(56.79);
    produtos.push_back(27.36);
}