class Solution {
public:
    bool detectCapitalUse(string word) {           
       
        int len = word.length(); 
        
        if (len < 2) return true; // "", "a", "A"
        
        //USA, Google, goole
        if (isupper(word[0]) && isupper(word[1])) {
            for (int i=2; i<len; i++)
                if (islower(word[i]))
                    return false;
        } else {
            for (int i=1; i<len; i++)
                if (isupper(word[i]))
                    return false;
        }
        
        return true;
    }
};
