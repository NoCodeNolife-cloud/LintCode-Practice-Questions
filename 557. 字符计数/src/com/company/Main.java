package com.company;

import java.util.Map;

public class Main {

    public static void main(String[] args) {
        String str = new String("abca");
        Solution solution = new Solution();
        Map<Character, Integer> res = solution.countCharacters(str);
        for (Map.Entry<Character, Integer> entry : res.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
}
