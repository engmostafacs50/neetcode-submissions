class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string , vector<string>>ump ; 
        for(string str : strs)
        {
            string word = str ; 
            sort(str.begin() , str.end());
            ump[str].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& pair : ump)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
