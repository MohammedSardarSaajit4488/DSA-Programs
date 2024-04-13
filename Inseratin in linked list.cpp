//write a program in C++ to implement Insertion in linked list.
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

// Function to insert a node at the end of the linked list
void insertAtEnd(Node*& head, int value)
 {
    Node* newNode = new Node(value);
    if (head == nullptr)
 {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr)
 {
        current = current->next;
    }
    current->next = newNode;
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

int main()
 {
    // Create an empty linked list
    Node* head = nullptr;

    // Insert nodes at the beginning
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    // Display the linked list
    std::cout << "Linked List after inserting at the beginning: ";
    displayLinkedList(head);

    // Insert nodes at the end
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    // Display the linked list again
    std::cout << "Linked List after inserting at the end: ";
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

