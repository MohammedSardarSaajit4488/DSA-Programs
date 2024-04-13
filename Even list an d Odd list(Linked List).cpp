//problem 4
/*WAP tocreat a one wayy header LL in which
a)Header nodes contain total number of nodes in LL,

b)now split this list into two 1-way header LL where,

(i)First list contains only even no of original list and
(ii) Second headere LL contains only odd no of original list

c) Both the header nodes contain total no of even and odd nodes respectively
*/

/*expected output
Originall List: 8 7 6 5 4 3 2 1
Even List: 2 4 6 8
Odd List: 1 3 5 7
Total number of nodes i Original List: 8
Total number of nodes in Even List: 4
Total number of nodes in Odd List: 4
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void splitLinkedList(Node* original, Node** even, Node** odd) {
    Node* temp = original;
    while (temp != NULL) {
        if (temp->data % 2 == 0) {
            insert(even, temp->data);
        } else {
            insert(odd, temp->data);
        }
        temp = temp->next;
    }
}
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
void displayLists(Node* original, Node* even, Node* odd) {
    cout << "Original List: ";
    Node* temp = original;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Even List hey bro: ";
    temp = even;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Odd List hey bro: ";
    temp = odd;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Total no of nodes in Original List buddy: " << countNodes(original) << endl;
    cout << "Total no of nodes in Even List buddy: " << countNodes(even) << endl;
    cout << "Total no of nodes in Odd Listbuddy: " << countNodes(odd) << endl;
}
int main() {
    Node* original = NULL;
    Node* even = NULL;
    Node* odd = NULL;
    insert(&original, 2);
    insert(&original, 3);
    insert(&original, 4);
    insert(&original, 5);
    insert(&original, 6);
    insert(&original, 7);
    insert(&original, 8);
   // insert(&original, 9);
    splitLinkedList(original, &even, &odd);
    displayLists(original, even, odd);
    return 0;
}
