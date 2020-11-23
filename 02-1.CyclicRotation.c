// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    int i,j,temp;
    for (i=0; i<K; i++) {
        temp=A[N-1];
// printf("%d\n", temp);
        for(j=N-1; j>0; j--){
            A[j]=A[j-1];
        }
        A[0]=temp;  
    }
 
    result.A = A;
    result.N = N;
    return result;
}
