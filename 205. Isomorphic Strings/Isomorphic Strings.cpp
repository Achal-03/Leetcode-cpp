class Solution {
public:
    bool helper(string s1, string s2){
        map<char, char> m;
        for(int i=0; i<s1.length(); i++){
            if(m.find(s1[i]) == m.end()){
                m[s1[i]] = s2[i];
            }
            else{
                if(m[s1[i]] != s2[i]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return helper(s, t) && helper(t, s);
    }
};
