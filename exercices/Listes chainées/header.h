#include <stdlib.h>
#include<stdio.h>

// Modèle de noeud
typedef struct node {
    int data;
    struct node* next;
} Node;

//
typedef struct List {
    Node* head;
    Node* tail;
    int size;
} List;

// Création de noeud
Node* createNode(int initalData);

// Création d'une liste
List* createlist();

// Ajouter un noeud à une liste 
void appendNode(List* list, Node* node);

// Afficher une liste chainée
int displayList(List* list);

// Supprimer un maillon de la liste
int deleteNodeFromList(List* list, Node* searchedNode);