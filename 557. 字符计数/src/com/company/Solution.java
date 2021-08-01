package com.company;

import java.util.HashMap;
import java.util.Map;

public class Solution {
    /*
     * @param str: a string
     * @return: Return a hash map
     */
    public Map<Character, Integer> countCharacters(String str) {
        Map<Character, Integer> res = new HashMap<Character, Integer>();
        for (int i = 0; i < str.length(); i++) {
            char temp = str.charAt(i);
            if (res.containsKey(temp)) {
                res.put(temp, res.get(temp) + 1);
            } else {
                res.put(temp, 1);
            }
        }
        return res;
    }
}