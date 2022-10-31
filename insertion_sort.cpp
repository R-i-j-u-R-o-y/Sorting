#include<iostream>

using namespace std;

int *insertion_sort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int key=arr[i],j=i+1;

        
    }
    

}
int main(){
    int n;
    cout<<"size of array: ";
    cin>>n;
    int arr[n];
    cout<<"elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int *sorted_arr = insertion_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<sorted_arr[i]<<" ";

    }
    return 0;
}