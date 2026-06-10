class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_list={}
        for s in strs:
            key="".join(sorted(s))
            if key not in anagram_list:
                anagram_list[key]=[]
            anagram_list[key].append(s)
        return list(anagram_list.values())
        
        