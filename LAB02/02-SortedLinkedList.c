#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

Node *addNode(int data){
    //จองพื้นที่
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void addSort(Node *node, int data){
    //Create New Node data
    Node *newNode = addNode(data);
    Node *curr = node; 
    while (curr->next != NULL && curr->next->data < data){
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}

void printNode(Node *node){
    Node *temp = node->next;
    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(){
    int x = 0;
    Node *node = addNode(0);
    while(1){
        scanf("%d", &x);
        if(x == -1){
            break;
        }
        addSort(node, x);
    }
    printNode(node);
}