//In c++ Primer, it is written that usning cin in array leds to a lot of bugs and surprising results. I got that results too.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    short T=0;
    cin>>T;
    while(T--){
        string input_str;
        cin>>input_str;
        int del=0;
        for(int count=0;count<input_str.length();count++){
            if(input_str[count]==input_str[count+1]){
                del++;
            }
        }
    cout<<del<<endl;
    }
return 0;
}
