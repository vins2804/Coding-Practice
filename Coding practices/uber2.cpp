int solution(string wall, int k) {
    int count = s.size();
        int i = 0, j = 0, greatest = 0;
        unordered_map<char,int>mp;
        int ans = -1;
        while(j < count)
        { 
        for(int j=0;j<count;j++)
            mp[s[j]]++;
            greatest = max(greatest, mp[s[j]]);
            if((j-i+1) - greatest > k){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, (j-i+1));
            j++;   
        }
        return ans;

}
