#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> arr={2,6,4,5,9,7,1,3,8,0};

    int smallest=arr[0];
    int ssmall =INT_MAX;

    for(int i =1; i<arr.size();i++){

        if(arr[i]<smallest){

            ssmall=smallest;
            smallest =arr[i];

        }
        else if(arr[i]<ssmall&& arr[i] !=smallest){

            ssmall =arr[i];

        }
    }

    cout <<"Smallest: " << smallest <<endl;
    cout << "Second Smallest: "<<ssmall << endl;

    return 0;
}