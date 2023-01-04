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
// Merge Sort. (TBC).
void Merge_Sort(vector<int>& x, int l, int r){
    // Base case.
    if(l > r){
        return;
    }
    int mid = l + (r-l)/2;
    Merge_Sort(x, l, mid);
    Merge_Sort(x, mid+1, r);
    merge(x);
}
// Main function.
int main(void){
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
