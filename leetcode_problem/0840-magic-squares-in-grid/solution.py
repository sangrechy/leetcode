class Solution:
    def check(self, g):
        nums = [g[i][j] for i in range(3) for j in range(3)]
        if sorted(nums) != list(range(1, 10)):
            return False
        x = g[0][0] + g[0][1] + g[0][2]
        return (
            x == g[1][0] + g[1][1] + g[1][2] and
            x == g[2][0] + g[2][1] + g[2][2] and
            x == g[0][0] + g[1][0] + g[2][0] and
            x == g[0][1] + g[1][1] + g[2][1] and
            x == g[0][2] + g[1][2] + g[2][2] and
            x == g[0][0] + g[1][1] + g[2][2] and
            x == g[0][2] + g[1][1] + g[2][0]
        )

    def numMagicSquaresInside(self, grid):
        r, c = len(grid), len(grid[0])
        if r < 3 or c < 3:
            return 0
        ans = 0
        for i in range(r - 3 + 1):
            for j in range(c - 3 + 1):
                g = [row[j:j+3] for row in grid[i:i+3]]
                if g[1][1] == 5 and self.check(g):
                    ans += 1
        return ans
