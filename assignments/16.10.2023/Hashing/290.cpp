class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>ms;
        int j=0;
        for(int i=0;i<pattern.length();i++){
            string sub="";
            while(s[j]!=' ' and j<s.length()) sub+=s[j++];
            if(mp.count(pattern[i]) and mp[pattern[i]]!=sub) return false;
            if(ms.count(sub) and ms[sub]!=pattern[i]) return false;
            mp[pattern[i]]=sub;
            ms[sub]=pattern[i];
            j++;
        }
        if(j!=s.length()+1) return false;
        return true;
    }
};