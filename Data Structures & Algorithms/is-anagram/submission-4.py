class Solution:
    def create_frequency_table(self, s: str) -> dict[str, int]:
        s_freq = {}
        for ch in s:
            f = s_freq.get(ch, 0)
            s_freq[ch] = f + 1
        return s_freq
    
    def isAnagram(self, s: str, t: str) -> bool:
        s_freq = self.create_frequency_table(s)
        t_freq = self.create_frequency_table(t)
        return s_freq == t_freq
