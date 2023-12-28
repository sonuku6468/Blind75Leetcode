#include <iostream>
#include <vector>

//git commit -m "Your commit message"
//git push origin master

using namespace std;

int duplicate(vector<int>& element) {
    int cnt=0;
    for(int i=0;i<element.size();i++)
    {
        for(int j=i+1;j<element.size();j++)
        {
            if(element[i]==element[j])
            {
               cnt++;
            }
            
        }
       
        
    }
     if(cnt>=1)
        {
            return 1;
        }
    return 0;
    cout<<cnt;
}

int main() {
    vector<int> element = {1,2,3,1};
    cout << "duplicate element: " << duplicate(element) << "\n";
    return 0;
}
