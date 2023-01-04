#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Bubble Sort.
void Bubble_Sort(vector<int>& x){
    int n = x.size();
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(x[j] > x[j+1]){
                swap(x[j], x[j+1]);
            }
        }
    }
}
// Selection Sort.
void Selection_Sort(vector<int>& x){
    int n = x.size(), curr_min, min_pos;
    for(int i = 0; i < n-1; i++){
        curr_min = x[i];
        for(int j = i; j < n; j++){
            if(x[j] < curr_min){
                curr_min = x[j];
                min_pos = j;
            }
        }
        swap(x[i], x[min_pos]);
    }
}
// Insertion Sort.
void Insertion_Sort(vector<int>& x){
    int n = x.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(x[i] > x[j]){
                break;
            }
            else{
                swap(x[i], x[j]);
            }
        }
    }
}
// Main function.
int main(void){
    int arr[] = {3,2,1,0};
    int N = sizeof(arr)/sizeof(arr[0]);
    Bubble_Sort(arr, N);
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
