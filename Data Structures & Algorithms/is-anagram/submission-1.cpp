class Solution {
public:
    bool isAnagram(string s, string t) {

        // int l1 = s.length();
        // int l2 = t.length();

        // if(l1 != l2)
        //     return false;

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s != t)
        //     return false;

        // return true;


        unordered_map<char,int> um1;
        unordered_map<char,int> um2;

        for(char a:s){
            um1[a] ++;
        }
        
        for(char a:t){
            um2[a] ++;
        }

        if(um1 == um2)
            return true;

        return false;
    }
};
