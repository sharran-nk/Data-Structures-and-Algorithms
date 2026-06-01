#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2,6,4,5,9,7,1,3,8,0};
    int largest = arr[0];
    int slar = -1;

    for(int i= 1;i<arr.size();i++){

        if(arr[i]>largest){
            slar=largest;
            largest =arr[i];

        }
        else if(arr[i]>slar&&arr[i]!=largest){

            slar=arr[i];

        }
    }
    cout << "Largest: "<< largest << endl;
    cout << "Second Largest: "<< slar<< endl;

    return 0;
}