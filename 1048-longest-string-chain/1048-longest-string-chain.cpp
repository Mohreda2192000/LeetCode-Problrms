class Solution {
 public:
  int longestStrChain(vector<string>& words) {
    const unordered_set<string> wordsSet{begin(words), end(words)};
    int ans = 0;

    for (const auto& word : words)
      ans = max(ans, LSC(word, wordsSet));

    return ans;
  }

 private:
    
    unordered_map<string, int> dp;

  int LSC(const string& s, const unordered_set<string> &Set)   {
    if (dp.count(s))
      return dp[s];

    int ans = 1;

    for (int i = 0; i < s.length(); ++i) {
     const string temp = s.substr(0, i) + s.substr(i + 1);
      if (Set.count(temp))
        ans = max(ans, LSC(temp, Set) + 1);
    }

    return dp[s] = ans;
  }
};
