#include <bits/stdc++.h>
using namespace std;

//Chave ainda esta errada
int chave(string nome){
    int k = 0;
    for(int i = 0; i < nome.length(); i++) {
        k = k + (i * nome.at(i));
    }
}

int dispersao(int k, int m){
    return k % m;
}

int buscaBinaria(int valor, int vetor[]){
    int l = 0, r = (sizeof(vetor)/sizeof(vetor[0]) - 1);
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
    scanf("%d", qntdArquivosAntigos);
    string nomesArquivos[qntdArquivosAntigos];
    int idArquivos[qntdArquivosAntigos];

    //Recebendo todos os arquivos antigos
    for(int i = 0; i < qntdArquivosAntigos; i++){
        scanf("%s", nomesArquivos);
        scanf("%d", idArquivos);
    }

    scanf("%d", qntdGavetasNovas);
    scanf("%d", qntdArquivosTransferidos);
    int idArquivosTransferidos[qntdArquivosTransferidos];

    //Rebendo id de arquivos que vao ser transferidos
    for(int i = 0; i < qntdArquivosTransferidos; i++){
        scanf("%d", idArquivosTransferidos[i]);
    }


    scanf("%d", qntdArquivosConsultados);
    string nomesArquivosConsultados[qntdArquivosConsultados];

    //Recebendo nomes de arquivos para serem consultados;
    for(int i = 0; i < qntdArquivosConsultados; i++){
        scanf("%s",nomesArquivosConsultados[i]);
    }

    //Fim das entradas;

    //fazer as tretas aqui

    return 0;
}