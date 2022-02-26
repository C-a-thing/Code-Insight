// User function Template for Java

class Solution {
    ArrayList<Integer> primeRange(int M, int N) {
        // code here
        ArrayList<Integer> primes = new ArrayList<Integer>(N-M);
        while (M <= N)
        {
            int flag = 0;
            for(int i = 2; i*i <= M; ++i)
            {
                if(M % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0 && M != 1)
                primes.add(M);
            M++;
        }
        return primes;
    }
}
