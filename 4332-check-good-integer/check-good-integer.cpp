class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int squaresum=0;
        while(n>0){
            int lastdigit=n%10;
            sum+=lastdigit;
            squaresum+=lastdigit*lastdigit;
            n=n/10;
        }
        if(squaresum-sum>=50){
            return true;
        }else{
            return false;
        }
    }
};