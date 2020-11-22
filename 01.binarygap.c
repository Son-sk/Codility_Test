// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int rem=0, c_max=0, ans=0, flag=0;
    
    while(N > 0) {
        rem = N % 2;
        N = N/2;
        
        if (ans > c_max && rem==1 && flag==1) {
        c_max = ans;
        ans=0;
        } 
        
        else if (rem==1) {
        ans=0;
        flag=1;
        } 
        else if(rem==0)  {
            ans++;
        }

//    printf("%d", rem);
//    printf("%d", flag);
//    printf("%d", ans);
//    printf("%d\n", c_max);
    }
    
    return c_max;
}