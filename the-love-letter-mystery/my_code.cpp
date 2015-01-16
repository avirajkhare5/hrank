#include<iostream>
#include<string>
int main(){
    int T=0;
    std::cin>>T;
    std::cin.ignore();
    while(T--){
        std::string input_str;
        std::cin>>input_str;
        std::cin.ignore(10000,'\n');
        int len=input_str.length()-1;
        int lim=len/2;
        int del=0,t1=0,t2=0;
        for(int st=0;st<=lim;st++){
            t1=input_str[len-st];t2=input_str[st];
            if(t1>t2){
                del=del+t1-t2;
            }else{
                del=del+t2-t1;
            }
        }std::cout<<del<<std::endl;}
return 0;
}
