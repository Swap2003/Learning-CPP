class solution{
public:
     int lengthOfLongestSubstringKDistinct(string &s,int k){
        int ans,i,j,d,n;
        ans=i=j=d=0;
        n=s.size();
        vector<int> freq(256,0);
        while(j<n){
            if(freq[s[j]]==0) d++;
            freq[s[i]]++;
            while(d>k){
                freq[s[i]]--;
                if(freq[s[i]]==0)d--;
                i++;
            }
            ans = max(ans,j-1+1);
            j++;
        }
        return ans;
     }
}