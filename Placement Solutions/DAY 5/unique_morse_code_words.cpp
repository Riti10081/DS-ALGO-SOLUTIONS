class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string>s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>st;
        for(int i=0;i<words.size();i++)
        {
            string s1="";
            for(int j=0;j<words[i].length();j++)
            {
               s1=s1+s[words[i][j]-'a']; 
            }
            st.insert(s1);
        }
        return st.size();
    }
};