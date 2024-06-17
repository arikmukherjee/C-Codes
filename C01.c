#include <stdio.h>
#include <malloc.h> // Include this for dynamic memory allocation

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL; // Initialize the head of the linked list
    int value;
    
    // Create a temporary pointer and initialize it with the head
    struct node *temp = head;
    
    printf("Enter a value for searching: ");
    scanf("%d", &value);
    
    // You should add nodes to the linked list before searching
    // Here's an example of adding a few nodes to the linked list:
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = 20;
    newNode->link = NULL;
    head->link = newNode; // Link the new node to the previous node
    
    // Now, you can traverse the linked list to search for the value
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Value is found\n");
            break;
        }
        temp = temp->link;
    }
    
    if (temp == NULL)
    {
        printf("Value is not found\n");
    }
    
    // Don't forget to free the dynamically allocated memory when done
    while (head != NULL)
    {
        temp = head;
        head = head->link;
        free(temp);
    }

    return 0;
}

