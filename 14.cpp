class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {  
        // no word in strs
        if (strs.size() == 0){return "";}
        //only one word in strs
        else if (strs.size() == 1)
            return strs[0];
        
        //find the shortest one in strs
        string s = strs[0];      
        for (int i = 1;i < strs.size();i++){
            if (s > strs[i]){s = strs[i];}
        }
        
        //interate all words
        for(int j = 0;j < strs.size();j++){
            int n = 0;
            //interate all characters 
            for (int k = 0;k < s.size();k++){
                //compare the characters one by one 
                if (s[k] == strs[j][k]){n++;}
                //no common prefix 
                if (n == 0){return "";}         
            }
            //output the prefix
            s = s.substr(0,n);
        }
        if (s.size() >0){return s;}
        else {return "";}
    }
};