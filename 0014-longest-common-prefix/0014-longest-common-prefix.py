class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        p=strs[0]
        for s in strs:
            while not s.startswith(p):
                p=p[:-1]
        return p