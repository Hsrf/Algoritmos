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
private:
    Node *front, *rear;
public:
    Queue(){
        front = new Node(0,0);
        rear = front;
    }

    void enqueue(int dataM, int dataT){
        Node *aux = new Node(dataM, dataT);
        rear->next = aux;
        rear = aux;
    }
    Node* dequeue(){
        Node *aux = front -> next;
        front -> next = front-> next -> next;
        return aux;
    }
};

class Stack{
private:
    Node *top;
public:
    Stack(){
        this->top = new Node(0,0);
    }
    void push(int dataM, int dataT){
        Node *aux = new Node(dataM, dataT);
        aux -> next = top -> next;
        top -> next = aux;
    }

    Node* pop(){
    Node *aux = top -> next;
    top -> next = top -> next -> next;
    return aux;
}

};


int main(){
    int amountCompanies, amountProcesses, magistrate, time;

    //Receiving inputs
    scanf("%d",&amountCompanies);
    Queue* arrayQueue = new Queue[amountCompanies];
    for(int i = 0; i < amountCompanies; i++){
        scanf("%d",&amountProcesses);
        for(int j = 0; j < amountProcesses; j++){
            scanf("%d",&magistrate);
            scanf("%d",&time);
            arrayQueue -> enqueue(magistrate, time);
        }
    }
}
