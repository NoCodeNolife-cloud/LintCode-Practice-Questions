#include "solution.h"

namespace cod {
	int cod::Solution::depthSum ( const std::vector<NestedInteger>& nestedList ) {
		for ( auto i : nestedList ) {
			if ( i.isInteger () ) {
				sum += i.getInteger () * depth;
			} else {
				depth++;
				depthSum ( i.getList () );
				depth--;
			}
		}
		return sum;
	}
}