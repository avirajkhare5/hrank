

//Let us consider s is height of the tree.

//If season is summer one, height will increase by one unit i.e. s++
//else season will be monsoon and height will be twice i.e. s = 2*s
//and both seasons will come alternatively

//Problem Setter's code :

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N,i;
    cin>>T;
    while(T--)
    {
        cin>>N;
        long long int s = 1;
        for(i=1 ; i<=N ; i++)
        {
                if(i%2 == 0)
                      s++;
                else
                     s = 2*s;
        }
        cout<<s<<endl;
    }
    return 0;
}

