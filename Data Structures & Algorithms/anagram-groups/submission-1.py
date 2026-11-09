class Solution:
    def hash_str(self, s: str) -> int:
        return sum([ord(ch) ** 2 for ch in s])
    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = dict()

        for s in strs:
            h = self.hash_str(s)
            if h in groups:
                groups[h].append(s)
            else:
                groups[h] = [s]

        return list(groups.values())

        