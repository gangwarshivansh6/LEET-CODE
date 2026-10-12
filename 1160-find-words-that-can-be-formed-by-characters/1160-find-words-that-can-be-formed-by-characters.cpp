class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26,0);

        for(char &ch : chars){
            charCount[ch-'a']++;
        }
        
        int result = 0;

        for(string &word : words){
            vector<int> wordCount(26,0);
            for(char &c : word){
                wordCount[c-'a']++;
            }
            bool x=true;
            for(int i = 0; i<26 ; i++){
                if(wordCount[i]>charCount[i]){
                    x=false;
                    break;

                }
            }
            if (x==true) {
                result = result+word.size();
            }
        }

        return result;
    }
};