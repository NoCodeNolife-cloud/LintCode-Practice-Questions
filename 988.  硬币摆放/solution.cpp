#include "solution.h"

namespace cod {
	int Solution::arrangeCoins ( int n ) {
		int res = 1 , sum = 0;
		while ( 1 ) {
			sum += res;
			if ( sum <= n ) {
				res++;
			} else {
				return res - 1;
			}
		}
	}
}