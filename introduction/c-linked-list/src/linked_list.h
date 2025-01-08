#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    struct Node* next;
    struct Node* prev;
    char* data;
} Node;

void print_list(Node* list);

Node* find_node(Node* list, char* message);

void insert_after(Node* before, char* message);

void insert(Node* list, char* message);
