class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int>umap ; 
        if(s.length()!=t.length())
            return false ; 

        for(int i = 0 ; i<s.length() ;i++)
            umap[s[i]]++ ; 
        
        for(int i = 0 ; i < t.length();i++)
        {
            if (umap.find(t[i]) == umap.end())
                return false ;
            umap[t[i]]--; 

        }
          
        for (const auto& pair : umap) {
        {
            if(pair.second != 0)
                return false ;    
        }
        return true ; 
    }    
    }
};
