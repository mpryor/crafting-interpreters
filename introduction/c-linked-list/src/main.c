#include <stdlib.h>
#include "LinkedList.h"

int main() {
    Node* list = malloc(sizeof(Node));
    insert(list, "1");
    insert(list, "2");
    Node* one_node = find_node(list, "1");
    insert_after(one_node, "3");
    print_list(list);
}
