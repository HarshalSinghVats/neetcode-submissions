class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int charLength=pattern.length();

        vector<string> words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }

        if(charLength!=words.size()) return false;

        unordered_map<char,string> letterWord;
        unordered_map<string,char> wordLetter;

        for(int i=0;i<words.size();i++){
            char c=pattern[i];
            string w=words[i];

            if(letterWord.contains(c)){
                if(letterWord[c]!=w)    return false;
            }
            else if(wordLetter.contains(w)){
                if (wordLetter[w]!=c)   return false;
            }
            else{
                letterWord[c]=w;
                wordLetter[w]=c;
            }

        }
        return true;
    }
};