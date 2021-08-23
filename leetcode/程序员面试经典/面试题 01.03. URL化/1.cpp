class Solution {
public:
    string replaceSpaces(string S, int length) {
        
        string new_string;
        int k=0;
        for(int c:S){
            if(c==' '){
                new_string.append("%20");
            }else{
                new_string.push_back(c);
            }
            k++;
            if(k==length){
                break;
            }
        }
        return new_string;
    }
};