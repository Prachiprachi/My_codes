class Solution {
public:
    int romanToInt(string s) {
        int total=0;
        map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i+1]]<=mp[s[i]])
                total+=mp[s[i]];
            else
                total-=mp[s[i]];
        }
        return total;
        
        
    }
};
