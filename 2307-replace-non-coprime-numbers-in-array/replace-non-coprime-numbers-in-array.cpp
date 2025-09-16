class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long lcm(long long a, long long b, long long gcdd) {
        return (a * b) / gcdd;
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {

        stack<int>st;
        st.push(nums[0]);

        for(int i=1; i<nums.size(); i++){
            int f=st.top();
           
            long long curr=nums[i];

            while(!st.empty()){

               long gcdd=gcd(st.top(),curr);
               if(gcdd==1) break;
               
                curr=lcm(curr,st.top(),gcdd);
                
                st.pop();
                
            }
            st.push(curr);

        }
        vector<int> ans;
        while(!st.empty()){
            int x=st.top();
            ans.push_back(x);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
