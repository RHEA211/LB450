

#include<bits/stdc++.h>
using namespace std;

// Reverse the array- recursive

void rev(int arr[],int start,int end)
{
    
    if(start>=end)
        return;


        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

      rev(arr,start+1,end-1);

    


}













    int main()
{
    int n,i;
    cout<<"elements in array : ";
    cin>>n;
int arr[n];


   cout<<" Array-";
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
    }


    

  rev(arr,0,n-1);
    
    cout<<" Array final-";
   for(int i=0;i<n;i++)
   {
        cout<<arr[i];
    }
    
return 0;
}