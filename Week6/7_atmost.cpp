bool checkAlmostEquivalent(string word1, string word2) {
        int alpha[26]={};
        for( char c: word1)
            alpha[c-'a']++;
        for( char c: word2)
            alpha[c-'a']--;
        for(int i=0;i<26;i++)
            if(abs(alpha[i])>3)
                return false;
       return true;
    }