#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor without next pointer
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert array to linked list
Node* convertArr2LL(vector<int> &arr) {
    if (arr.size() == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Length of the linked list
int lengthOfLL(Node *head) {
    int cnt = 0;
    Node* temp = head;

    while (temp) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Search in linked list
int searchInLL(Node *head, int target) {
    Node* temp = head;

    while (temp) {
        if (temp->data == target) {
            return 1;   // found
        }
        temp = temp->next;
    }
    return 0;   // not found
}

int main() {
    vector<int> arr = {2, 5, 8, 7};

    // Node* y = new Node(arr[0]);
    // cout << y->next;

    Node* head = convertArr2LL(arr);

    // cout << head->data << endl;

    // Node* temp = head;
    // while (temp) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // cout << lengthOfLL(head);
    // cout << searchInLL(head, 5);

    

    return 0;
}
