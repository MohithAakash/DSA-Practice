// https://www.hackerrank.com/challenges/maxsubarray/problem
// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'maxSubarray' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static List<Integer> maxSubarray(List<Integer> arr) {
        // ArrayList. isEmpty()
        List<Integer> result = new ArrayList<Integer>();
        int max_sum=arr.get(0),min=arr.get(0),curr_sum=arr.get(0),val;
        int subsequence_sum, max_subsequence=Collections.max(arr);

        subsequence_sum = arr.get(0) > 0 ? arr.get(0) : 0;

        for(int i=1;i<arr.size();i++){
            val=arr.get(i);
            curr_sum+=val;
            max_sum=Math.max(max_sum, (Math.max(curr_sum,curr_sum-min)));
            min=Math.min(min,curr_sum);

            if (val>0) subsequence_sum+=val;
        }
        result.add(max_sum);
        if (max_subsequence > 0) result.add(subsequence_sum);
        else result.add(max_subsequence);
        
        return result;        
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, t).forEach(tItr -> {
            try {
                int n = Integer.parseInt(bufferedReader.readLine().trim());

                List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                    .map(Integer::parseInt)
                    .collect(toList());

                List<Integer> result = Result.maxSubarray(arr);

                bufferedWriter.write(
                    result.stream()
                        .map(Object::toString)
                        .collect(joining(" "))
                    + "\n"
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}
