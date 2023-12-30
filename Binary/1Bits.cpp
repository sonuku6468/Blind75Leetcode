#include<bits/stdc++.h>
using namespace std;
  int hammingWeight(uint32_t n) {
         return bitset<32>(n).count();
    }
int main()
{
    
    uint32_t num = 14;
    cout << "Hamming weight of the number is: "<< hammingWeight(num);
    return 0;
}