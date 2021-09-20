#include <iostream>
using namespace std;


int main()
{
    
    int arr[] = {2,3,4,6,7,8,9,10};
    
    int low=0,high=7,mid;
    
    int key;
    cin >> key;
    
    while(low <= high)
    {
        mid = (low +high)/2; 
        if(key == arr[mid]){
            cout << mid;
            break;
        }
            
        
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
        
    }
    return 0;
}