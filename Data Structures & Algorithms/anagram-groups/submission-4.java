class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> res = new ArrayList<>();
        Map<List<Integer>, List<String>> mapa = new HashMap<>();
        for(String str : strs) {
            int[] count = new int[26];
            List<Integer> tmp = new ArrayList<>();
            for(int i=0; i<str.length(); i++) {
                count[str.charAt(i) - 'a']++;
            }
            for(int c : count)
                tmp.add(c);
                
            mapa.computeIfAbsent(tmp, k-> new ArrayList<>()).add(str);
        }

        for(Map.Entry<List<Integer>,List<String>> e : mapa.entrySet()) {
            res.add(e.getValue());
        }

        return res;
    }
}
