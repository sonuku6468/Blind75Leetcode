#include<bits/stdc++.h>
using namespace std;
 int getSum(int a, int b) {
 if(b>0)
        {
            while(b>0)
            {
                a++;
                b--;
            }
        }
        else{
            while(b<0){
                    a--;
                    b++;
            }
        }
         return a;
        
    }
int main()
{
    int a, b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    cout<<"The new value of a is : "<<getSum(a, b);

    return 0;
}