#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
x
// --- Your Solution ---
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// --- Helper Functions for Testing ---

// Helper to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper to append a node to the list
void append(struct ListNode** head, int val) {
    struct ListNode* newNode = createNode(val);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct ListNode* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Helper to print the list starting from a specific node
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    printf("[");
    while (temp != NULL) {
        printf("%d", temp->val);
        if (temp->next != NULL) printf(", ");
        temp = temp->next;
    }
    printf("]\n");
}

int main() {
    // Test Case 1: Odd number of nodes [1, 2, 3, 4, 5]
    struct ListNode* list1 = NULL;
    for (int i = 1; i <= 5; i++) {
        append(&list1, i);
    }

    printf("Original List 1: ");
    printList(list1);

    struct ListNode* mid1 = middleNode(list1);
    printf("Middle Node Val: %d\n", mid1->val); // Should be 3

    printf("\n");

    // Test Case 2: Even number of nodes [1, 2, 3, 4, 5, 6]
    struct ListNode* list2 = NULL;
    for (int i = 1; i <= 6; i++) {
        append(&list2, i);
    }

    printf("Original List 2: ");
    printList(list2);

    struct ListNode* mid2 = middleNode(list2);
    printf("Middle Node Val: %d\n", mid2->val); // Should be 4

    return 0;
}
