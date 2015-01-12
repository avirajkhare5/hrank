Given a string, you have to convert it into a palindrome using a certain set of operations.

Let's assume that the length of the string is L, and the characters are indexed from 0 to L-1. The string will be palindrome, only if the characters at index i and the characters at index (L-1-i) are same. So, we need to ensure that the characters for all such indices are same.

Let's assume that one such set of indices can be denoted by A' and B'. It is given that it takes one operation in decreasing value of a character by 1. So, the total number of operations will be |A'-B'|.We need to calculate this for all such pairs of indices, which can be done in a single for loop. Take a look at the setter's code.

Problem Setter's code :

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int s = 0;
        for(i=0 ; i< str.length()/2 ; i++)
        {
              s += abs(str[i] - str[str.length()-i-1]);
        }
        cout<<s<<endl;
    }
    return 0;
}

