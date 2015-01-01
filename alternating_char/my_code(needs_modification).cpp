//going to work on this code later, surprisingly this method got various bugs
//best to use string libary and cin whole string.
#include<iostream>
//if given max. no. of char given not working then use <limits>
    int main(){
        short test_case=0;//will be used in while to input test case
        std::cin>>test_case;
        while(test_case--){
            char abab_array[10];
            std::cin>>abab_array;
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            int count_limit=0,count=0;
            for(count_limit=0;count_limit<sizeof abab_array;count_limit++){
                if(abab_array[count_limit]==abab_array[count_limit+1]){
                    count++;
                }
            }
        std::cout<<count<<std::endl;
        }
        return 0;
    }
