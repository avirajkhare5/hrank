#include<iostream>
#include<string>
int main(){
    int T=0;
    std::cin>>T;
    while(T--){
        std::string input_str;
        std::cin>>input_str;
        int len=input_str.length();
        if(len%2==0){
            len=len/2;
            len--;
        }else{
            len--;
            len=len/2;
        }
        int palin=0;
        for(int limit=0;limit<=len;limit++){
            if(input_str[limit]!=input_str[len-limit-1]){
                if(input_str[limit]<input_str[len-limit-1]){
                    palin+=palin+input_str[len-limit-1]-input_str[limit];
                }else{
                    palin+=palin+input_str[limit]-input_str[len-limit-1];
                }
            }
        }std::cout<<palin<<std::endl;
    }
return 0;
}
