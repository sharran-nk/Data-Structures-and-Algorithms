#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int>arr ={1,2,3,4,5,6,7};

    bool sorted =true;
    for(int i=1;i <arr.size();i++){

        if(arr[i]<arr[i-1]){
            sorted=false;
            break;
        }
    }
    if(sorted){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}