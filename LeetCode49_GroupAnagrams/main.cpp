//
//  main.cpp
//  LeetCode49_GroupAnagrams
//
//  Created by Rui on 1/7/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res; //create the result vector
        unordered_map<string, vector<string>> m; //create the reflection map which connect the string in the strs and the sorted string in the strs
        
        for(string str: strs) //for each string in strs
        {
            string t = str; //create the new string which equals the str picked
            sort(t.begin(), t.end()); //sort the t, which means for all words with same character will have same sort/
            m[t].push_back(str);//push the str into the reflection sorted t and str, which means for all anagrams will have same reflections
        }
        
        for(auto a : m)
        {
            res.push_back(a.second); // .second means push the values into, and push the strings in each reflection into the res;
        }
        
        return res;
    }
};
