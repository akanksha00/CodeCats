    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // int i;
        // for(i=0;i<s.length();i++)
        //     if(s[i]!=t[i])
        //         return t[i];
        // return t[i];


       //using bitwise  
        char v=0;
        for( char c:s)
            v^=c;
        for( char c:t)
            v^=c;
        return v;
    }