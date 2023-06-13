#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element" << endl;
        cin >> arr[i];
    }
     cout << "Your entered array is :" << endl;
    for (int i = 0; i < n; i++)
    {
       
        cout << arr[i] <<endl;
    
    }
   cout << "\nReverse array is :" << endl;
    for (int i = (n - 1); i >= 0; i--)
    {
        
        cout << arr[i] <<endl;
    }
    return 0;
}