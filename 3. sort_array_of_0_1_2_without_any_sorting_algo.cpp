P3: sort_array_of_0_1_2_without_any_sorting_algo

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int z=-1,l=0,h=n-1;
    while (l<=h){
        if (arr[l]==0){
            z++;
            int temp=arr[l];
            arr[l]=arr[z];
            arr[z]=temp;
            l++;
        }
        else if (arr[l]==1)
        {
            l++;
        }
        else if (arr[l]==2){
            while(arr[h]==2){
                h--;
            }
            int temp=arr[l];
            arr[l]=arr[h];
            arr[h]=temp;
            h--;
        }
    }
    for (int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
