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
        rear -> next = aux;
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
    //Receiving processes and enqueueing them
    int amountCompanies, amountProcesses, magistrate, time;
    scanf("%d",&amountCompanies);
    Queue *arrayQueue[amountCompanies];
    for(int i = 0; i < amountCompanies; i++){
        scanf("%d",&amountProcesses);
        arrayQueue[i] = new Queue();
        for(int j = 0; j < amountProcesses; j++){
            scanf("%d",&magistrate);
            scanf("%d",&time);
            arrayQueue[i] -> enqueue(magistrate, time);
        }
    }

    //Receiving magistrades & creating/initializing their stacks
    int amountMagistrades;
    scanf("%d", &amountMagistrades);
    Stack *arrayStack[amountMagistrades];
    int magistradeHours[amountMagistrades];
    for(int k = 0; k < amountMagistrades; k++){
        arrayStack[k] = new Stack();
        scanf("%d", &magistradeHours[k]);

    }

    //Distributing processes between magistrades



}
