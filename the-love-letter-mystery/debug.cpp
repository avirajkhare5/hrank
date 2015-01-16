#include<iostream>
#include<string>
    int main(){
        std::string a;
        std::cin>>a;
        int len=0;
        len=a[a.length()-1]-a[0];
        std::cout<<len<<std::endl;
    std::cout<<a.length()<<std::endl;
    len=a[a.length()-1];
    std::cout<<len<<std::endl;
    return 0;
    };
