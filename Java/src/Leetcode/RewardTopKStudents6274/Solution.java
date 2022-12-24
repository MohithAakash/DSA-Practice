package Leetcode.RewardTopKStudents6274;


import java.util.*;


class Solution {
    public List<Integer> topStudents(String[] positive_feedback, String[] negative_feedback, String[] report, int[] student_id, int k) {
        List<Integer> ans = new ArrayList<>();
        Map<Integer, Integer> scores = new HashMap<>();
        for (int id : student_id) {
            scores.put(id, 0);
        }
        Map<String, Integer> words = new HashMap<>();
        for (String f : positive_feedback) {
            words.put(f, 3);
        }
        for (String f : negative_feedback) {
            words.put(f, -1);
        }
        for (int i = 0; i < report.length; i++) {
            String[] splitWords = report[i].split(" ");
            for (String w : splitWords) {
                if (words.containsKey(w)) {
                    scores.put(student_id[i], scores.get(student_id[i]) + words.get(w));
                }
            }
        }
        List<Map.Entry<Integer, Integer> > list =
                new LinkedList<Map.Entry<Integer, Integer> >(scores.entrySet());

        Collections.sort(list, new Comparator<Map.Entry<Integer, Integer>>() {
            public int compare(Map.Entry<Integer, Integer> o1,
                               Map.Entry<Integer, Integer> o2)
            {
                if(o1.getValue() == o2.getValue())
                    return (o1.getKey()).compareTo(o2.getKey());
                return -(o1.getValue()).compareTo(o2.getValue());
            }
        });
        for (int i = 0; i < k; i++) {
            ans.add(list.get(i).getKey());
        }
        return ans;
    }
}