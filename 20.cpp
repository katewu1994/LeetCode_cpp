class Solution {
public:
  bool isValid(string s) {
    
    stack <char> s1;
    
    for(int i=0;i<s.length();i++)
    {
      if(s[i]==')')
      {
        if(s1.empty())
        return false;
        else if(s1.top()=='(')
        s1.pop();
        else
        return false;
      }
      
      else if(s[i]==']')
      {
        if(s1.empty())
        return false;
        else if(s1.top()=='[')
        s1.pop();
        else
        return false;
      }
      
      else if(s[i]=='}')
      {
        if(s1.empty())
        return false;
        else if(s1.top()=='{')
        s1.pop();
        else
        return false;
      }
      else
      s1.push(s[i]);
    }
    
    if(s1.empty())
    return true;
    else
    return false;
  }
};