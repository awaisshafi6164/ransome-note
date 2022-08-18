class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool check = false;
        for(int i = 0;i<ransomNote.length();i++){
            
            for(int j=0;j<magazine.length();j++){
                if(ransomNote[i] == magazine[j]){
                    check = true;
                    magazine[j] = ' ';
                    break;
                }else{
                    check = false;
                }
            }
            if(check == false){
                return false;
            }
        }
        return check;
    }
};
