int numJewelsInStones(string jewels, string stones) {
       int ctr=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++)
                if(jewels[i]==stones[j])
                    ctr++;
        }
        return ctr;
    }

    //using set
    int numJewelsInStones(string jewels, string stones) {
       int ctr=0;
        unordered_set<char> setJewels(jewels.begin(),jewels.end());
        for(char s:stones)
            if(setJewels.count(s))
                ctr++;
        return ctr;
    }