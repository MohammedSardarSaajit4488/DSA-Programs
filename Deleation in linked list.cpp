//write a program in C++ to implement Deletion in linked list.

#include <iostream>
struct Node
 {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(Node*& head, int value) 
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to display the linked list
void displayLinkedList(Node* head) 
{
    Node* current = head;
    while (current != nullptr)
 {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to delete a node by value from the linked list
void deleteByValue(Node*& head, int value) 
{
    if (head == nullptr)
 {
        return; // Empty list, nothing to delete
    }

    if (head->data == value)
 {
        // If the node to delete is the head node
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value)
 {
        current = current->next;
    }

    if (current->next != nullptr) 
{
        // Node with the specified value found
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Function to delete a node by position (0-based) from the linked list
void deleteByPosition(Node*& head, int position)
 {
    if (head == nullptr || position < 0) 
{
        return; // Invalid position or empty list, nothing to delete
    }

    if (position == 0)
 {
        // If the node to delete is the head node
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    int currentPosition = 0;
    while (current->next != nullptr && currentPosition < position - 1) 
{
        current = current->next;
        currentPosition++;
    }

    if (current->next != nullptr) 
{
        // Node at the specified position found
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

int main()
 {
    // Create an empty linked list
    Node* head = nullptr;

    // Insert nodes at the beginning
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    // Display the linked list
    std::cout << "Linked List: ";
    displayLinkedList(head);

    // Delete nodes by value and by position
    deleteByValue(head, 2); // Delete node with value 2
    deleteByPosition(head, 1); // Delete node at position 1 (0-based)

    // Display the modified linked list
    std::cout << "Linked List after deletion: ";
    displayLinkedList(head);

    // Clean up: free memory used by the linked list
    while (head != nullptr) 
{
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

