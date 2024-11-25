#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 100

/* The node type contains a next pointer */
struct node {
    char name[N+1];
    int grade;
    struct node *next;
};

/* returns TRUE if head is null (list is empty) */
bool is_empty(struct node *head) {
    return head == NULL;
}

/* prepends a node containing the given name and grade at the head of a list 
 * returns the new head 
 */
struct node *prepend(struct node *head, char *name, int grade) {
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) 
        exit(EXIT_FAILURE);

    strcpy(newnode->name, name);
    newnode->grade = grade;
    newnode->next = head;

    return newnode;
}

/* appends a node containing the given name and grade at the end of a list 
 * returns the new head
 */
struct node *append(struct node *head, char *name, int grade) {
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
        exit(EXIT_FAILURE);

    strcpy(newnode->name, name);
    newnode->grade = grade;
    newnode->next = NULL;

    if (head == NULL) {  // Special case: empty list
        return newnode;
    }

    struct node *current = head;
    while (current->next != NULL) {  // Traverse to the end
        current = current->next;
    }
    current->next = newnode;  // Attach the new node
    return head;
}

/* reverses the linked list and returns the new head */
struct node *reverse(struct node *head) {
    struct node *previous = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;      // Save the next node
        current->next = previous; // Reverse the current node's pointer
        previous = current;       // Move previous to current
        current = next;           // Move to the next node
    }

    return previous; // Previous is now the new head
}

/* prints the contents of a list given the head. */
void print_list(struct node *head) {
    if (head == NULL) {
        puts("*** empty list ***");
        return;
    }
    while (head != NULL) {
        printf("%s: %d\n", head->name, head->grade);
        head = head->next;
    }
}

/* main function - some simple tests of above functions */
int main() {
    struct node *list = NULL;

    puts("\nLIST CREATED");
    print_list(list);

    puts("\nADDING NODES");
    list = prepend(list, "Sam Scott", 99);
    list = prepend(list, "Anne St-Amand", 85);
    list = prepend(list, "Rosa St-Amand", 78);
    list = prepend(list, "Maxime St-Amand", 65);
    print_list(list);

    puts("\nREVERSING LIST");
    list = reverse(list);
    print_list(list);

    puts("\nADDING A NODE TO THE REVERSED LIST");
    list = append(list, "Louise St-Amand", 72);
    print_list(list);

    puts("\nREVERSING LIST AGAIN");
    list = reverse(list);
    print_list(list);

    return 0;
}

