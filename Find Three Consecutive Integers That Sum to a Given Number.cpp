class Solution {
public:
    vector<long long> sumOfThree(long long num) {
       double x = (num-3)/3;
       vector<long long >ans;
       if(x+x+1+x+2 == num){
         ans.push_back(x);
       ans.push_back(x+1);
       ans.push_back(x+2);
       }
       else{
           return ans;
       }
       return ans;
    }
};