#include <bits/stdc++.h>
using namespace std;


//Fila
struct Node{
    int id;
    string nome;
    Node *next;
    Node(string nome, int id){
        this->nome = nome;
        this->id = id;
        this->next = NULL;
    }
}typedef Node;


class Queue{
private:
    Node *front, *rear;
public:
    Queue(){
        front = new Node("",0);
        rear = front;
    }

    void enqueue(string nome, int id){
        Node *aux = new Node(nome, id);
        rear -> next = aux;
        rear = aux;
    }

    Node* dequeue(){
        Node *aux = front -> next;
        front -> next = front-> next -> next;
        return aux;
    }
};



//Hash Tabling
int chave(string nome){
    int k = 0;
    for(int i = 0; i < nome.length(); i++) {
        k = k + ((i + 1) * nome.at(i));
    }
    return k;
}

int dispersao(int k, int m){
    return k % m;
}



int buscaBinaria(int valor, int vetor[], int tamanhoVetor){
    //Array precisa estar ordenado para binary search funcionar
    int l = 0, r = tamanhoVetor;
    int m;
    while(l <= r){
        m = ((l+r) / 2);
        if(valor == vetor[m]){
            return m;
        }else if(valor < vetor[m]){
            r = m - 1;
        }else{
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    int qntdArquivosAntigos, qntdGavetasNovas, qntdArquivosTransferidos, qntdArquivosConsultados;
    scanf("%d", &qntdArquivosAntigos);
    string nomesArquivos[qntdArquivosAntigos];
    int idArquivos[qntdArquivosAntigos];

    //Recebendo todos os arquivos antigos
    for(int i = 0; i < qntdArquivosAntigos; i++){
        scanf("%s", &nomesArquivos);
        scanf("%d", &idArquivos);
    }

    scanf("%d", &qntdGavetasNovas);
    Queue gavetas[qntdGavetasNovas];
    scanf("%d", &qntdArquivosTransferidos);
    int idArquivosTransferidos[qntdArquivosTransferidos];

    //Rebendo id de arquivos que vao ser transferidos
    for(int i = 0; i < qntdArquivosTransferidos; i++){
        scanf("%d", &idArquivosTransferidos[i]);
    }


    scanf("%d", &qntdArquivosConsultados);
    string nomesArquivosConsultados[qntdArquivosConsultados];

    //Recebendo nomes de arquivos para serem consultados;
    for(int i = 0; i < qntdArquivosConsultados; i++){
        scanf("%s", &nomesArquivosConsultados[i]);
    }

    int resultadoBusca;
    //Fazendo o hashing para arquivos que serao transferidos
    for(int i = 0; i < qntdArquivosTransferidos; i++){
        resultadoBusca = buscaBinaria(idArquivosTransferidos[i], idArquivos, qntdArquivosAntigos - 1);
        gavetas[dispercao(chave(nomeArquivos[resultadoBusca]), qntdGavetasNovas)].enqueue(nomesArquivos[resultadoBusca], idArquivosTransferidos[i]);
    }

    return 0;
}
