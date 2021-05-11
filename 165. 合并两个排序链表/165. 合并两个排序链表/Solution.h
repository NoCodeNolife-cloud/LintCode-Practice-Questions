class ListNode {
public:
	int val;
	ListNode* next;
	ListNode ( int val ) {
		this->val = val;
		this->next = NULL;
	}
}

class Solution {
public:
	/**
	 * @param l1: ListNode l1 is the head of the linked list
	 * @param l2: ListNode l2 is the head of the linked list
	 * @return: ListNode head of linked list
	 */
	ListNode* mergeTwoLists ( ListNode* l1 , ListNode* l2 ) {
		if ( l1 == NULL ) {
			return l2;
		}
		if ( l2 == NULL ) {
			return l1;
		}
		if ( l1->val < l2->val ) {
			return sort ( l1 , l2 );
		} else {
			return sort ( l2 , l1 );
		}
	}

	ListNode* sort ( ListNode* l1 , ListNode* l2 ) {
		ListNode* res = l1;
		ListNode* run = l1;
		l1 = l1->next;
		do {
			if ( l1->val < l2->val ) {
				run->next = l1;
				run = run->next;
				if ( l1->next != NULL ) {
					l1 = l1->next;
				} else {
					run->next = l2;
					break;
				}
			} else {
				run->next = l2;
				run = run->next;
				if ( l2->next != NULL ) {
					l2 = l2->next;
				} else {
					run->next = l1;
					break;
				}
			}
		} while ( 1 );
		return res;
	}
};