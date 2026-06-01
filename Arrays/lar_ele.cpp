#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr={2,5,9,3,4};
    int largest = arr[0];
    for(int i=0;i<arr.size();i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << largest << endl;
    // for(auto i: arr){
    //     cout << i << endl;
    // }

    return 0; 
}