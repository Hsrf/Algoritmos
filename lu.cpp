#include <bits/stdc++.h>

using namespace std;

struct Node{
    int dataM, dataT;
    Node *next;
    Node(int dataM, int dataT){
        this->dataM = dataM;
        this->dataT = dataT;
        this->next = NULL;
    } 
}typedef Node;

class Queue{
    private Node *front, *rear;

    Queue(){
        front = new Node(0,0);
        rear = front;
    }

    void enqueue(int dataM, int dataT){
        Node *aux = new Node(dataM, dataT);
        rear->next = aux;
        rear = aux;
    }

    Node dequeue(){
        this->next

    }


}



int main(){
    int numeroEmpresa;
    cin >> qntdEmpresas;
    for(int i = 0; i < qntdEmpresas; i++){

    }
    return 0;
}