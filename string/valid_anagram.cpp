#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2)
{
    // Remove spaces, punctuation, and convert to lowercase
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Check if string lengths are equal
    if (str1.length() != str2.length())
        return false;

    // Sort the characters in both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare the sorted strings
    for (int i = 0; i < str1.length(); i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

int main()
{
    string str1 = "Listen";
    string str2 = "Silent";

    if (areAnagrams(str1, str2))
        cout << str1 << " and " << str2 << " are anagrams." << endl;
    else
        cout << str1 << " and " << str2 << " are not anagrams." << endl;

    return 0;
}