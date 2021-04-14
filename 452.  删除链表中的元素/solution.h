#pragma once

namespace cod {
	class ListNode {
	public:
		int val;
		ListNode* next;
		ListNode ( int val ) {
			this->val = val;
			this->next = NULL;
		}
	};

	class Solution {
	public:
		/**
		 * @param head: a ListNode
		 * @param val: An integer
		 * @return: a ListNode
		 */
		ListNode* removeElements ( ListNode* head , int val );
	};
}