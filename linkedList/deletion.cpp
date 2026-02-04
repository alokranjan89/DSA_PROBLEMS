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
    Deletes the head (first node) of the linked list

    Time Complexity: O(1)
    Space Complexity: O(1)
*/
Node* deleteHead(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

/*
    Deletes the tail (last node) of the linked list

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
Node* deleteTail(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    return head;
}

/*
    Deletes the k-th node (1-based index) of the linked list

    Edge cases handled:
    - Empty list
    - Deleting the head (k = 1)
    - Deleting the tail
    - k greater than list length

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
Node* removeKthNode(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        cnt++;

        if (cnt == k) {
            prev->next = temp->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}

/*
    Deletes the first node that contains the given value (data)

    If the value is not found, the list remains unchanged.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
Node* deleteByValue(Node* head, int value) {
    if (head == NULL) {
        return NULL;
    }

    // If head node contains the value
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == value) {
            prev->next = temp->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}
