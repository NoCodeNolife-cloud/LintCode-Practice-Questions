#include <iostream>
#include "solution.h"

namespace cod {
	ListNode* Solution::removeElements ( ListNode* head , int val ) {
		if ( head == NULL ) {
			return NULL;
		}
		ListNode* befor = NULL;
		ListNode* temp;
		for ( temp = head; temp != NULL;) {
			if ( temp->val == val ) {
				if ( befor == NULL ) {
					head = head->next;
					if ( head == NULL ) {
						return NULL;
					}
					temp = temp->next;
				} else {
					temp = temp->next;
				}
			} else {
				if ( befor == NULL ) {
					befor = head;
				} else {
					befor->next = temp;
					befor = temp;
				}
				temp = temp->next;
			}
		}
		befor->next = NULL;
		return head;
	}
}