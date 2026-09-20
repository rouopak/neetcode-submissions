class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> check;
        if(s.size()!=t.size()) return 0;
        for(char& c:s) check[c]++;
        for(char& c:t) check[c]--;
        for(auto& x:check)if(x.second!=0)return 0;
        return 1;
    }
};
