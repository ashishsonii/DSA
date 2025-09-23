class Solution {
public:
    int compareVersion(string v1, string v2) {

        
        int i=0;
        int j=0;
        bool flag=false;
        int n1=v1.size();
        int n2=v2.size();
        while(i<n1 || j<n2){
           long long num1=0;
           long long num2=0;

           while(i<n1 && v1[i]!='.'){
            num1=num1*10+(v1[i]-'0');
            i++;
           }
           while(j<n2 && v2[j]!='.'){
            num2=num2*10+(v2[j]-'0');
            j++;
           }
           if(num1!=num2) return num1>num2?1:-1;
           i++;
           j++;
          

            
        }
        if(i<n1 && v1[i]-'0'>0) return 1;
        if(j<n2 && v2[j]-'0'>0) return -1;
        return 0;
        
    }
};