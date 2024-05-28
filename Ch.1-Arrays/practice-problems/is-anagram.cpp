/* Problem: IsAnagram

Is Anagram
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:
Input: s = "racecar", t = "carrace"
Output: true

Example 2:
Input: s = "jar", t = "jam"
Output: false

*/

/*
 * Approach, create two maps for each string
 * each map is stored as { character, number of occurences }
 * once the maps are populated, it's as simple as returning the comparison of the two maps
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //base case, if len(s) != len(t) false
        if (s.size() != t.size()) { return false; };
        
        map<char, int> mapS;
        map<char, int> mapT;

        for(int i = 0; i < s.size(); i++) {
            mapS[s[i]] = 1 + mapS[s[i]];
            mapT[t[i]] = 1 + mapT[t[i]];
        }

        return mapS == mapT;
    }
};