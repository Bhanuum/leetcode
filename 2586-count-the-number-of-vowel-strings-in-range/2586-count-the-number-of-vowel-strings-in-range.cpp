class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int g=0;
        for(int i=left;i<=right;i++)
        {
            string p=words[i];
            int n=p.size();
            int c=0;
            p[0]=tolower(p[0]);
            p[n-1]=tolower(p[n-1]);
            if(p[0]=='a'||p[0]=='e'||p[0]=='i'||p[0]=='o'||p[0]=='u' ) 
            {
                c++;
            }
            if(p[n-1]=='a'||p[n-1]=='e'||p[n-1]=='i'||p[n-1]=='o'||p[n-1]=='u')
            {
                c++;
            }
            if(c==2)
            {
                g++;
                
            }
           
            
        }
        return g;
    }
};