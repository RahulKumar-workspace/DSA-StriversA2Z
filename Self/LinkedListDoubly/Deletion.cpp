#include <iostream>
using namespace std;

/* Structure of Node */
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Solution {
public:
    Node* delPos(Node* head, int x) {

        if (head == NULL) return NULL;

        int count = 0;
        Node* kNode = head;

        while (kNode != NULL) {
            count++;
            if (count == x) break;
            kNode = kNode->next;
        }

        if (kNode == NULL) return head;  // position out of range

        Node* back = kNode->prev;
        Node* front = kNode->next;

        if (back == NULL && front == NULL) {
            delete kNode;
            return NULL;
        }
        else if (back == NULL) {
            return deleteHead(head);
        }
        else if (front == NULL) {
            return deleteTail(head);
        }

        back->next = front;
        front->prev = back;

        kNode->next = NULL;
        kNode->prev = NULL;

        delete kNode;
        return head;
    }

    Node* deleteHead(Node* head) {
        if (!head) return NULL;
        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        Node* temp = head;
        head = head->next;

        head->prev = NULL;
        temp->next = NULL;

        delete temp;
        return head;
    }

    Node* deleteTail(Node* head) {
        if (!head) return NULL;
        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        Node* tail = head;
        while (tail->next != NULL) {
            tail = tail->next;
        }

        Node* newTail = tail->prev;

        newTail->next = NULL;
        tail->prev = NULL;

        delete tail;
        return head;
    }
};

// Helper function to insert at end
Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node(val);

    if (!head) return newNode;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Helper function to print DLL
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Creating list: 1 2 3 4 5
    head = insertEnd(head, 1);
    head = insertEnd(head, 2);
    head = insertEnd(head, 3);
    head = insertEnd(head, 4);
    head = insertEnd(head, 5);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    int position;

    cout << "Enter position to delete: ";
    cin >> position;

    head = obj.delPos(head, position);

    cout << "Updated List: ";
    printList(head);

    return 0;
}