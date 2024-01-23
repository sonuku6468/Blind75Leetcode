#include<bits/stdc++.h>
using namespace std;
bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int can_take =-1;
        if(n<2)
        {
            return true;
        
        }
        for(int i= n-2;i>=0;i--){

            if(i+nums[i]>=n-1 && can_take ==-1){
                can_take = i;
            }

            if(can_take!=-1 && ((i+nums[i])==n-1 || i+nums[i]>=can_take)){
                    can_take =i;
                }
        }
        if(can_take==0) return true;
        return false;
    }
int main()
{
    
    return 0;
}