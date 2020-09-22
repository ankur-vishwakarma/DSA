int alphaCode(string st, int dp[]){
    int l = st.length();
    if(dp[l] != -1){
        return dp[l];
    }
    if(st[0] == '0'){
        dp[l] = 0;
        return 0;
    }
    if(l == 0 || l == 1){
        dp[l] = 1;
        return 1;
    }
    int output;
    if((st[0]-'0')*10+(st[1]-'0') >26){
        output = alphaCode(st.substr(1,l-1), dp)%mod;
    }else{
        output = alphaCode(st.substr(1,l-1), dp)%mod+alphaCode(st.substr(2,l-2), dp)%mod;
    }
    dp[l] = output%mod;
    return output%mod;
}
