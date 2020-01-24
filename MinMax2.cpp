#include<iostream>
using namespace std;

int main(){
    int num;
    int arr[100];
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
    cout << min << endl;
    cout << max << endl;
    return 0;
}