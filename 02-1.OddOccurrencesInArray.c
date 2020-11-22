// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i, j, sum=0, res=0;
//int B[]={0};
    for (i=0; i<=N; i++){
        j=0;
        //for(j=0; j<N; j++){
        while(j<=N){
            if(j!=i){
                if(A[i]==A[j]){
                    break;
                }
                else {
                    sum = A[i];
                 //printf("%d",A[i]);
                }
                if(j==N){
                    res = sum;
//                    printf("%d\n",res);
                }
            }
        j++;
        }
    
    }
    //printf("%d",sum);
    return res;
} 