
string add(string number1, string number2) {
        string result = "";
        int c = 0;
        for(int i = number1.size() - 1,j = number2.size() - 1;i >= 0 || j >= 0 ;i--,j--) {
            const int val =  (i < 0 ? 0 : number1[i] - '0') + (j < 0 ? 0 : number2[j] - '0') + c;
            c = val/6;
            result.push_back('0' + val%6);
        }
        if(c > 0) {
            result.push_back('0' + 1);
        }
        reverse(result.begin(),result.end());
        return result;
    }

vector<int> solution(vector<bool> v) {
string temp="0", _power="1";
    reverse(v.begin(),v.end());
    for(int i=v.size()-1; i>=0; --i)
    {   
        
    	if(v[i])
        temp=add(temp, _power);
        _power=add(_power, _power);
    }
    vector<int> ans(temp.size(), 0);
    for(int i=0; i<temp.size(); ++i)
    ans[i]=temp[i]-'0';
    reverse(ans.begin(),ans.end());
    return ans;
}
