class Solution {
public:
    int addMinimum(string s) {
        int n=s.size();
        int ans=0;
        if(s[0]=='b'){
            ans++;
        }else if(s[0]=='c'){
            ans+=2;
        }
        if(s[n-1]=='b'){
            ans++;
        }else if(s[n-1]=='a'){
            ans+=2;
        }
        for(int i=1; i<n; i++){
            if(s[i-1]==s[i]){
                ans+=2;
            }
            else if(s[i-1]=='a' && s[i]=='c'){
                ans++;
            }
            else if(s[i-1]=='b'&&s[i]=='a'){
                ans++;
            }
            else if(s[i-1]=='c'&&s[i]=='b'){
                ans++;
            }
        }
        return ans;
    }
};