#include <bits/stdc++.h>
using namespace std;

/*
    Node structure for singly linked list
*/
class Node {
public:
    int data;       // value stored in the node
    Node* next;     // pointer to the next node

    Node(int val) {
        data = val;
        next = NULL;
    }
};

/*
    Insert a node at the head (beginning) of the linked list

    Time Complexity: O(1)
    Space Complexity: O(1)
*/
Node* insertAtHead(Node* head, int value) {
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
    return head;
}

/*
    Insert a node at the tail (end) of the linked list

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
Node* insertAtTail(Node* head, int value) {
    Node* temp = new Node(value);

    // Empty list
    if (head == NULL) {
        return temp;
    }

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = temp;
    return head;
}

/*
    Insert a node at the k-th position (1-based index)

    Edge cases handled:
    - Insert at head (k = 1)
    - k greater than list length (no insertion)

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
Node* insertAtKth(Node* head, int value, int k) {
    // Insert at head
    if (k == 1) {
        return insertAtHead(head, value);
    }

    int cnt = 0;
    Node* temp = head;

    // Move to (k-1)th node
    while (temp != NULL) {
        cnt++;

        if (cnt == k - 1) {
            Node* newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }

        temp = temp->next;
    }

    return head;
}

/*
    Insert a node after a given value (data)

    If the value is not found, list remains unchanged.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
Node* insertAfterValue(Node* head, int target, int value) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == target) {
            Node* newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    return head;
}
