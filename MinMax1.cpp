#include<iostream>
int min, max, arr[1000];
using namespace std;
void minmax(int i, int j){

    int max1, min1, mid;
    if (i == j)
    {
        ::max = ::min = arr[i];
        return;
    } else if (i == j-1)
    {
        if (arr[i] > arr[j])
        {
            ::max = arr[i];
            ::min = arr[j];           
        }else
        {
            ::max = arr[j];
            ::min = arr[i];
        }
        return;
    }
    mid = (i+j)/2;
    minmax(i, mid);
    max1 = ::max; min1 = ::min;
    minmax(mid +1, j);
    if(max1 > ::max){
        ::max = max1;
    }
    if(min1 < ::min){;
        ::min = min1;
    }
}
int main(){
    int num;
 
    cout << "Enter Length of Array" << endl;
    cin >> num ;
    cout << "Enter Numbers:-" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    };
    ::max = arr[0];
    ::min = arr[0];
    minmax(0, num-1);      
    cout << ::min << endl;
    cout << ::max << endl;   
    return 0;
}