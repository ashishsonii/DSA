class Spreadsheet {
public:

unordered_map<string,int> smp;
    Spreadsheet(int rows) {
       
           
         
        
    }
    
    void setCell(string cell, int value) {
        smp[cell]=value;
        
    }
    
    void resetCell(string cell) {
        smp[cell]=0;
        
    }
    
    int getValue(string formula) {
        string f;
        string s;
        int i=0;
        for( i=0; i<formula.size(); i++){
            if(formula[i]=='+') break;
            if(formula[i]=='=') continue;
            f+=formula[i];

        }
        i++;
        while(i<formula.size()){
           
            if(formula[i]=='=') continue;
            s+=formula[i];
            i++;

        }
        int ff=0;
        int ss=0;


        if(smp.count(f)!=0){
            ff=smp[f];
            
        }
        else ff=atoi(f.c_str());
;
        if(smp.count(s)!=0){
            ss=smp[s];
            
        }
        else ss=atoi(s.c_str());
        return ss+ff;

        
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */