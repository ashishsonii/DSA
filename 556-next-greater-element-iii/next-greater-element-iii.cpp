class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> v;
        int i=10;
        /////
        int m=n;
        while(m!=0){
            v.push_back(m%i);
            m/=10;
        }
        reverse(v.begin(),v.end());
        int s=v.size();
        i=s-2;
        int j=s-1;
        while(i>=0  ){
           if( v[i]<v[j]) {
           
            sort(v.begin() + j, v.end());

            break;
           }
            i--;
            j--;
        }
        if( i<0){
            sort(v.begin(),v.end());
            return -1;
        }
        
        while(j<n && v[j]<=v[i]) j++;
       swap(v[i],v[j]);
       i=s;
       long long d=1;
       while(i!=0) {
        d*=10; 
        i--;}
        
       
        
        
       long long r=0;
       i=0;
      
       for (int i = 0; i < v.size(); i++) {
        r = r * 10 + v[i];
        if (r > INT_MAX) return -1;
        }


       if(n<0) return -r;
       return r;


        

       
        
       
        
    }
};