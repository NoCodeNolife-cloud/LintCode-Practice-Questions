#include <iostream>
#include <set>

using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};


class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: Head node.
     */
    ListNode *removeDuplicates(ListNode *head) {
        if (head == NULL) {
            return head;
        }
        ListNode *res = head;
        set<int> cnt;
        ListNode *tail = head->next;
        ListNode *front = head;
        cnt.insert(front->val);
        while (tail != NULL) {
            if (cnt.find(tail->val) != cnt.end()) {/*find*/
                tail = tail->next;
            } else {/*not find*/
                cnt.insert(tail->val);
                front->next = tail;
                front = tail;
                tail = tail->next;
            }
        }
        front->next = NULL;
        return res;
    }
};

int main() {
    Solution solution;
    ListNode listNode1(1);
    ListNode listNode2(2);
    ListNode listNode3(1);
    ListNode listNode4(3);
    ListNode listNode5(3);
    ListNode listNode6(5);
    ListNode listNode7(6);
    ListNode listNode8(3);
    listNode1.next = &listNode2;
    listNode2.next = &listNode3;
    listNode3.next = &listNode4;
    listNode4.next = &listNode5;
    listNode5.next = &listNode6;
    listNode6.next = &listNode7;
    listNode7.next = &listNode8;
    ListNode *res = solution.removeDuplicates(NULL);
    while (res != NULL) {
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}
