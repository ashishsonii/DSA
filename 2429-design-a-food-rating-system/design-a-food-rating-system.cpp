class FoodRatings {
public:





        unordered_map<string,int > fodrat;
        unordered_map<string,set<pair<int,string>>> cuisratfood;
        unordered_map<string,string>foodcuis;
        






    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        

        for(int i=0; i<foods.size(); i++){
            fodrat[foods[i]]=ratings[i];
            foodcuis[foods[i]]=cuisines[i];
            cuisratfood[cuisines[i]].insert({-ratings[i], foods[i]});


        }
        
    }
    
    void changeRating(string food, int newRating) {
        int oldrat=fodrat[food];
        fodrat[food]=newRating;
        string curcuis=foodcuis[food];
        cuisratfood[curcuis].erase({-oldrat,food});
        cuisratfood[curcuis].insert({-newRating,food});
        

        
    }
    
    string highestRated(string cuisine) {
        
        
           return cuisratfood[cuisine].begin()->second;

        
        
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */