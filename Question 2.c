long long RecursiveFib(long long n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return RecursiveFib(n-1) + RecursiveFib(n-2); 
}

//Pros: provide accurate numbers and have a space complexity O(1).
//Cons: Time complexity is O(3^n) which is very high and need significant time to process large n values.

long long int DPFib(int n) {
    long long int sequence[n];
    sequence[0] = 0; sequence[1] = 1;
    for(int i = 2; i <= n; i++)
        sequence[i] = sequence[i-1] + sequence[i-2];
    return sequence[n];
}

//Pros: Provide accurate numbers and have a time complexity of O(n). Can be used to get the whole sequence by returning the sequence array.
//Cons: Space complexity is O(n) which is higher than all of the other algorithms.

long long int IterativeFibo(int n) {
    long long int s_2, s_1, s;
    s_1 = 0;
    s_2 = 1;
    for(int i = 2; i <= n; i++){
        s = s_1 + s_2;
        s_1 = s_2;
        s_2 = s;
    }
    return s;
}

//Pros: Provide accurate numbers and have a time complexity of O(n). And have a space complexity O(1).
//Cons: still consumes significant time with large values of n that are technically outside of our scope since we are using long long and it reaches till approximatly the 90th element of the sequence only.

int Binetfib(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5)); 
}

//Pros: Time complexity and space complexity O(1).
//Cons: might produce wrong values for n > 70.

//There exists another implementation that finishes in O(logn) by calculating the nth power of the matrix: {1,1}, {1,0} and get the element as follow: {F_n+1, F_n}, {F_n, F_n+1}.
