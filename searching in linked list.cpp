//write a program in C++ to implement searching in linked list.
#include <iostream>
struct Node
 {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

bool searchLinkedList(Node* head, int target)
 {
    Node* current = head;
    while (current != nullptr) 
{
        if (current->data == target)
 {
            return true;  // Value found in the list
        }
        current = current->next;
    }
    return false;  // Value not found in the list
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

int main() {
    // Create a sample linked list: 1 -> 3 -> 5 -> 7 -> 9
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(9);

    // Display the linked list
    std::cout << "Linked List: ";
    displayLinkedList(head);

    // Search for a value in the linked list
    int target = 5;
    if (searchLinkedList(head, target))
 {
        std::cout << target << " found in the linked list." << std::endl;
    } 
else 
{
        std::cout << target << " not found in the linked list." << std::endl;
    }

    // Clean up: free memory used by the linked list
    while (head != nullptr)
 {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

