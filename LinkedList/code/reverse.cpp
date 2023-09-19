#include <iostream>

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      c
    }
};

// Function to create a linked list based on user input
ListNode* createLinkedList() {
    ListNode* head = nullptr;
    ListNode* tail = head;

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;

        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to print a linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}
 
int main() {
    // Create a linked list based on user input
    ListNode* head = createLinkedList();

    // Display the original linked list
    std::cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list using the Solution class
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);

    // Display the reversed linked list
    std::cout << "Reversed Linked List: ";
    printList(reversedHead);

    // Clean up: Free the memory used by the linked lists
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    while (reversedHead != nullptr) {
        ListNode* temp = reversedHead;
        reversedHead = reversedHead->next;
        delete temp;
    }

    return 0;
}

