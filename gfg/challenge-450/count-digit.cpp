class Solution{
public:
    int evenlyDivides(int N){
        int div,count=0;
        int num=N;
        while(N!=0){
            div=N%10;         //catch:- store korlam remainder ta k
            if(div!=0){
            if(num%div==0){
              count++;
            }
            N=N/10;          //catch:- update kore dilam N (quoitent) ta k 
        }
    }
        return count;
    }
};
