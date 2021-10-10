#include<iostream>
using namespace std;

void swap(int arr[],int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
// Naive solution
void move(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j]!=0)
                {
                    swap(arr, i, j);
                    break;
                }
                
            }
            
        }
        
    }    
}

// Better Approach
void move2(int arr[], int n){
    int x = 0;
    int temp[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            temp[x] = i;
            x++;
        }
    }
    int i=0;
    while(count<x)
    {
        if (arr[i]==0)
        {
            int tempp = arr[i];
            arr[i] = arr[temp[count]];
            arr[temp[count]] = tempp;
        }
        count++;
        i++;
    }    
}
// Best Solution
void move3(int arr[], int n){
    int count = 0;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr, i, count);
            count++;
        }
        
    }
    
}
int main(){
    int n = 6;
    int arr[n] = {8,5,0,10,0,20};
    int m = 7;
    int arr2[m] = {0,0,0,0,0,0,10};
    move3(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
return 0;
}
