/*#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* createLinkedList(int arr[], int size) {
    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 0; i < size; ++i) {
        Node* newNode = new Node{arr[i], NULL};
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    return head;
}

bool hasCycle(Node* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    head->next->next->next->next->next = head->next;	
	// or we can check wheather the next is next or next is null

    bool hasCycleResult = hasCycle(head);

    if (hasCycleResult) {
        cout << "The linked list has a cycle.\n";
    } else {
        cout << "The linked list doesn't have a cycle.\n";
    }

    return 0;
}

*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createLinkedList(int arr[], int size) {
    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 0; i < size; ++i) {
        Node* newNode = new Node{arr[i], NULL};
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    return head;
}

bool hasCycle(Node* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    bool hasCycleResult = hasCycle(head);

    if (hasCycleResult) {
        cout << "The linked list has a cycle.\n";
    } else {
        cout << "The linked list doesn't have a cycle.\n";
    }

    return 0;
}