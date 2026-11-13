# Dynamic Programming Framework & Patterns

### 1. 0/1 Knapsack Pattern
- State: `dp[i][w]` represents maximum value using first `i` items with capacity `w`.
- Transition: `dp[i][w] = max(dp[i-1][w], dp[i-1][w - weights[i]] + values[i])`.
- Space optimization: 1D array traversed backwards.

### 2. Longest Common Subsequence (LCS)
- If `s1[i] == s2[j]`: `dp[i][j] = 1 + dp[i-1][j-1]`
- Else: `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`