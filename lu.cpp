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
        Node *aux = front -> next;
        front -> next = front-> next -> next;
        return aux;
    }
}

class Stack{
    private Node *top;
    Stack(){
        this->top = new Node(0,0);
    }
    void push(int dataM, int dataT){
        Node *aux = new Node(dataM, dataT);
        aux -> next = top -> next;
        top -> next = aux;
    }
    
    Node pop(){
        return
    }

}


int main(){
    int numeroEmpresa;
    cin >> qntdEmpresas;
    for(int i = 0; i < qntdEmpresas; i++){

    }
    return 0;
}
