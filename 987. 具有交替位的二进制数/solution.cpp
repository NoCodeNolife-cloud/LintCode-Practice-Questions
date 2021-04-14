#include "solution.h"

namespace cod {
	bool cod::Solution::hasAlternatingBits ( int n ) {
		bool sign;
		if ( n % 2 == 0 ) {
			sign = true;
			n /= 2;
			while ( n != 0 ) {
				if ( sign == true ) {
					if ( n % 2 != 0 ) {
						n /= 2;
						sign = false;
					} else {
						return false;
					}
				} else {
					if ( n % 2 == 0 ) {
						n /= 2;
						sign = true;
					} else {
						return false;
					}
				}
			}
			return true;
		} else {
			sign = false;
			n /= 2;
			while ( n != 0 ) {
				if ( sign == false ) {
					if ( n % 2 == 0 ) {
						n /= 2;
						sign = true;
					} else {
						return false;
					}
				} else {
					if ( n % 2 != 0 ) {
						n /= 2;
						sign = false;
					} else {
						return false;
					}
				}
			}
			return true;
		}
	}
}