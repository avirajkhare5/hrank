#include <iostream>
using namespace std;

int height(int n) {
    int height=1;
    if(n%2==0){
        int limit=n/2;
        for(int count=0;count<limit;count++){
            height=height*2;
            height++;
        }
        return height;
    }else{
        n--;
        int limit=n/2;
        for(int count=0;count<limit;count++){
            height=height*2;
            height++;
        }
        height=height*2;
        return height;
    }
    return 0;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

