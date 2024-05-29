#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /* Use hashmap with {number, num_occurences}
        *
        */
        map<int, int> mp;
        vector<int> result;
        for(auto x: nums) {
            mp[x]++;
        }

        // create a vector of pairs to sort by value
        vector<pair<int,int>> vec;
        for(auto y: mp) {
            vec.push_back(make_pair(y.second, y.first));
        }
        sort(vec.rbegin(), vec.rend());

        // iterate through top k highest values
        for(int i = 0; i < vec.size(); i++){
            result.push_back(vec[i].second);
            k--;
            if (k==0) {
                break;
            }
        }
        return result;

        
    }

    
};