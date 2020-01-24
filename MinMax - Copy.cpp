#include<iostream>
int min, max, arr[1000];
using namespace std;

int main(){
    int num;
    cout << "Enter Length of Array" << endl;
    cin >> num ;
    
    int min = 65536, max = -65536;
    cout << "Enter Numbers:-" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    };

    return 0;
}