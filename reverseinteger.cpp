class Solution {
public:
    int reverse(int x) {
        int rem;
        long int rev =0;
       while (x!=0)
       {
           rem = x%10;
           if (rev*10+rem<-2147483648 || rev*10+rem>2147483647)
           {
               return 0;
           }
           rev = rev*10 + rem;
           x = x/10;
       }
       return rev;
    }
};
