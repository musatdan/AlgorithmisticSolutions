/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *dummy;
    struct ListNode *head;

    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;

    if (list1->val <= list2->val) {
        head = dummy = list1;
        list1 = list1->next;
    }
    else {
        head = dummy = list2;
        list2 = list2->next;
    }


    while(list1 && list2) {
        if(list1 -> val <= list2 -> val) {
            dummy -> next = list1;
            list1 = list1 -> next;
        }
        else {
            dummy -> next = list2;
            list2 = list2 -> next;
        }

        dummy = dummy -> next;
    }

        if(list1 == NULL) dummy->next = list2;
        if(list2 == NULL) dummy->next = list1;

        return head;
}
