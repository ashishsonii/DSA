class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int i=0;
        int even=1;
        int odd=0;
        int n=arr.size();

        long long sum=0;
        long long count=0;
        while(i<n){
            sum+=arr[i];
        if(sum%2==0){
            count+=odd;
            even++;
        }
        else{
            count+=even;
            odd++;
        }
        i++;       
        }
        return count%(1000000000+7);
        
    }
};