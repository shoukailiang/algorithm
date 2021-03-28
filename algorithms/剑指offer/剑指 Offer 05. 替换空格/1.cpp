class Solution {
public:
    string replaceSpace(string s) {
      string new_s ="";
      for (int i = 0; i < s.size(); ++i) {
        if(s[i]==' '){
            new_s.append("%20");
        }else{
            new_s+=s[i];
        }  
    }
    return new_s;
  }
};