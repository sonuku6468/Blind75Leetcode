#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>> v;
  
    
    sort(nums.begin(),nums.end());
    
   
    
    for(int i=0;i<nums.size();i++)
    {
        if(i>0 && nums[i]==nums[i-1])   continue;
         int j=i+1, k=nums.size()-1;
       
        
        while(j<k){
        
        if(nums[i]+nums[j]+nums[k]==0)
        {
           v.push_back({nums[i],nums[j],nums[k]});
            
           
            int val1=nums[j];
            while(j<k && nums[j]==val1) j++;
                
            
             int val2=nums[k];
            while(j<k && nums[k]==val2) k--;
               
        }
            
            else if(nums[i]+nums[j]+nums[k]<0)  j++;
              
            
              
            else if(nums[i]+nums[j]+nums[k]>0)  k--;
              
    }
    }
    
    
    return v;
    }
int main()
{
    
    vector<int> nums={-4,-1,0,3,-7,9,-5};
    vector<vector<int>> res = threeSum(nums);
    cout<<"The number of triplets is "<<res.size()<<endl;
    return 0;
}