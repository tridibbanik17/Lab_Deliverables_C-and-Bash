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

/* deletes the head of a list. Returns the new head. */
struct node *delete_first(struct node *head) {
    if (head == NULL) 
        return head;
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

/* destroys a list from head onwards. Returns NULL. */
struct node *destroy_list(struct node *head) {
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
    return NULL;
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

/* Count the number of grades above a given value */
int count(struct node *head, int value) {
    int count = 0;
    struct node *current = head;

    while (current != NULL) {
        if (current->grade > value) {
            count++;
        }
        current = current->next;
    }

    return count;
}

/* main function - some simple tests of above functions */
int main() {
    struct node *list = NULL;

    puts("\nLIST CREATED");
    print_list(list);

    puts("\nADDING NODES AT THE START");
    list = prepend(list, "Sam Scott", 99);
    list = prepend(list, "Anne St-Amand", 85);
    list = prepend(list, "Rosa St-Amand", 78);
    print_list(list);

    puts("\nADDING NODES AT THE END");
    list = append(list, "Maxime St-Amand", 65);
    list = append(list, "Louise St-Amand", 72);
    print_list(list);

    puts("\nCOUNTING GRADES ABOVE 70");
    int count_above_70 = count(list, 70);
    printf("Number of grades above 70: %d\n", count_above_70);

    puts("\nDESTROYING LIST");
    list = destroy_list(list);
    print_list(list);

    return 0;
}

