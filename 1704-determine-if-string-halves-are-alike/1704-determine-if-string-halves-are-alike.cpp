class Solution {
public:
    bool halvesAreAlike(string a) {
        int t=0;
        for(int i=0;i<a.size();i++)
        {
            a[i]=tolower(a[i]);
            if(i<a.size()/2)
            {
                if(a[i]==97 or a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117)
                {
                    t++;
                }
            }
            else
            {
               if(a[i]==97 or a[i]==101 || a[i]==105 || a[i]==111 || a[i]==117)
                {
                    t--;
                } 
            }
        }
        if(t==0)
        {
            return 1;
        }
        else
        {
            return false;
        }
    }
};