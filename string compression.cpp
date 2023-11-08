class Solution {
public:
    int compress(vector<char>& s) {
        string x = "";
        for(int i=0;i<s.size();i++){
            int count=1,k=i;
            while(i+1<s.size()){
                if(s[i]!=s[i+1]) break;
                count++;
                i++;
            }
            x+=s[k];
            if(count!=1) x+=to_string(count);
        }
        s.clear();
        for(int i=0;i<x.size();i++){
            s.push_back(x[i]);
        }
        return s.size();
    }
};