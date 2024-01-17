#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
 
    }
int main()
{
    //code
    vector<string> v{"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> res=groupAnagrams(v);
    for (const auto& i : res) {
        for (const auto& j : i) {
            cout << j << ' ';
            }
            cout << endl;
            }

    return 0;
}