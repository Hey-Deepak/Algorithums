#include<iostream>
int min, max, arr[1000];
using namespace std;
void minmax(int i, int j){
    int max1, min1, mid;
    int max, min;
    if (i == j)
    {
        max = min = arr[i];
    } else if (i == j-1)
    {
        if (arr[i] > arr[j])
        {
            max = arr[i];
            min = arr[j];           
        }else
        {
            max = arr[j];
            min = arr[i];
        }
    }else if ()
    {
        /* code */
    }
    
    {
        /* code */
    }
    
    
    
}
int main(){
    int num;
    cout << "Enter Length of Array" << endl;
    cin >> num ;
    cout << "Enter Numbers:-" << endl;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", arr[i]);
    };
    int max = arr[0];
    int min = arr[0];
             
    return 0;
}