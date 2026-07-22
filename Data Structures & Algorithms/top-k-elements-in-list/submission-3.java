class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        PriorityQueue<int[]> pk = new PriorityQueue<>((a,b)-> a[0] - b[0]);
        Map<Integer,Integer> count = new HashMap<>();

        for(int num : nums) {
            count.put(num, count.getOrDefault(num,0) +1);
        }

        for(Map.Entry<Integer,Integer> e : count.entrySet()) {
            pk.offer(new int[]{e.getValue(), e.getKey()});
            if(pk.size() > k)
                pk.poll();
        }
        int[] res = new int[k];
        for(int i=0; i<k; i++) {
            res[i] = pk.poll()[1];
        }
        return res;
    }
}
