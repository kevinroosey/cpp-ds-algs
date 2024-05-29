#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /* Create a map with key-value of {str:sortedword, vec<str>actual word }
         *  From there, just iterate the map and unpack into a vector of string vectors
        */

        map<string, vector<string>> hmap;

        for (int i = 0; i < strs.size(); i++) {
            string current = strs[i];
            sort(current.begin(), current.end());
            hmap[current].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto r: hmap) {
            result.push_back(r.second);
        }

        return result;
    }
};