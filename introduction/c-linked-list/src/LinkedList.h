#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    struct Node* next;
    struct Node* prev;
    char* data;
} Node;

void print_list(Node* list) {
    while(list != NULL) {
        printf("visiting %p\n", list);
        printf("%s\n", list->data);
        list = list->next;
    }
}

Node* find_node(Node* list, char* message) {
    while (list != NULL) {
        if(strcmp(list->data, message) == 0) {
            return list;
        }
        list = list->next;
    }
    return NULL;
}

void insert_after(Node* before, char* message) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = (char*)malloc(strlen(message));
    strcpy(new_node->data, message);

    new_node->next = before->next;
    new_node->prev = before;
    before->next=new_node;
}

void insert(Node* list, char* message) {
    // If this is the first time initializing the linked list
    if (list->data == NULL) {
        list->data = (char*)malloc(strlen(message));
        strcpy(list->data, message);
    } else {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = (char*)malloc(strlen(message));
        strcpy(new_node->data, message);

        while (list->next != NULL) {
            list = list->next;
        }
        list->next = new_node;
        new_node->prev = list;
        new_node->next = NULL;
    }
}
