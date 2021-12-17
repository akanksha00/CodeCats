string interpret(string command) {
        string res;
        int i=0;
        while(command[i])
        {
            if(command[i]=='G'){
                res += 'G';
                i+=1;
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                res += 'o';
                i+=2;
            }
            else if(command[i] == '(' && command[i+3] == ')'){
                res += "al";
                i += 4;
            }   
        }
        return res;
    }