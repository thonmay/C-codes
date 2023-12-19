#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums {71, 16, 44, 33, 57, 61};
    for(auto num: nums){
        cout<<num<< " ";
    }
    //best way to find the MIN val in a vector
    auto it = min_element(nums.begin(), nums.end()); //returns a iterator
    if(it != nums.end()){
        cout<<endl<<*it<<endl;
    }else   
        cout<<"not found!";
    
    











    /*
    //smarter way to find the MIN val in a vector
    sort(nums.begin(), nums.end());            // gotcha sort it beforing 'lower_bound'
    auto it = upper_bound(nums.begin(), nums.end(),INT_MIN);   // 'INT_MIN' to specifically find the Lowest val
    if(it != nums.end()){
        cout<<endl<<*it;
    }else 
        cout<<"Not found!"<<endl;
    
    */


    
    //basic method to find the mind val
    int min = 0 ;
    for(int i = 0; i < nums.size(); ++i){
        for(int j =i+1; j < nums.size(); ++j){
            if(nums[j] < nums[min]){
                min = j;
            }
        }
    }
    cout<<endl<<min<<endl;
    cout<<nums[min];
    
    
    
    
    
    /*
    auto min = max_element(nums.begin(), nums.end()); //it takes starting address and 
    cout<<endl<<*min;      //it returns a it/ptr
    */
}