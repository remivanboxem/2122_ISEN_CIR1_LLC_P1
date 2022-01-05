#include "header.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int initalData) {
    Node* ptrNode = malloc(sizeof(Node));
    if (ptrNode == NULL) return NULL;
    (*ptrNode).data = initalData;
    ptrNode->next = NULL;
    return ptrNode;
}

List* createlist() {
    List* ptrList = malloc(sizeof(List));
    if (ptrList == NULL) return NULL;
    (*ptrList).head = NULL;
    ptrList->tail = NULL;
    ptrList->size = 0; 
    return ptrList;
}

void appendNode(List* list, Node* node) {
    if (list == NULL || node == NULL) return; // Vérifie que nos arguments sont bons
    if (list->head == NULL) { // Vérifie si la liste n'est pas vide
        list->head = node;
        list->tail = node;
    } else { // Si la liste n'est pas vide
        list->tail->next = node;
        list->tail = node;
    }

    list->size++;
}

int displayList(List* list) {
    if (list == NULL) return 1;
    if (list->head == NULL || list->size == 0 || list->tail == NULL) {
        puts("La liste est vide");
        return 1;
    }
    Node* iterator = list->head;
    while (iterator != NULL) {
        printf("%d -> ", iterator->data);
        iterator = iterator->next;
    }
    printf("NULL\n");
    return 0;
}

int deleteNodeFromList(List* list, Node* searchedNode) {
    if (list == NULL || searchedNode == NULL) return 1;
    if (list->head == searchedNode) { // Si on essaie de supprimer la tête
        list->head = searchedNode->next;
        list->size--;
        free(searchedNode);
        return 0;
    }

    Node* iterator = list->head;
    while (iterator != NULL) {
        if (iterator->next == searchedNode) { 
            if (iterator->next == list->tail) { // Suppression de la queue
                list->tail = iterator;
            }
            iterator->next = searchedNode->next;
            list->size--;
            free(searchedNode);
            return 0;
        }
        iterator = iterator->next;
    }
    return 1;
}