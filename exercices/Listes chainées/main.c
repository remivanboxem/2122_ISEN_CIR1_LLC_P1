#include "header.h"

int main(void) {
    Node* ptr;
    Node* asuppr;
    List* list;
    ptr = createNode(4);
    list = createlist();

    appendNode(list, ptr);
    asuppr = createNode(5);
    appendNode(list, asuppr);
    ptr = createNode(6);
    appendNode(list, ptr);
    displayList(list);
    deleteNodeFromList(list, asuppr);
    displayList(list);
}