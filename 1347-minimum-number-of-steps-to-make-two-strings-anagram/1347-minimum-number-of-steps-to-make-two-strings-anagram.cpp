class Solution {
public:
    int minSteps(string s, string t) {
        int a[26]={0};
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>0){
           count+=abs(a[i]);
            }
        }
        return count;
        
    }
};
 