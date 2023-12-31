#include<bits/stdc++.h>
using namespace std;
 vector<int> countBits(int n) {
        vector<int> ans;
		
		// iterating fromt 0 to n
        for(int i = 0; i<=n; i++)
        {
			// sum is initialised as 0
            int sum = 0;
            int num = i;
			// while num not equals zero
            while(num != 0)
            {
			
                sum += num%2;
                num = num/2;
            }
			// add sum to ans vector
            ans.push_back(sum);
        }
		// return 
        return ans;
    }
int main()
{
  
        int n;
        cout<<"Enter a positive integer: ";
        cin>>n;
        // calling function and printing result
        vector<int> res = countBits(n);
        cout << "Number of set bits in binary representation of all numbers from 0 to " << n << " are : \n";
        for (int i=0; i <= n ;i++)
            cout << i << " : " << res[i] << endl;

    return 0;
}