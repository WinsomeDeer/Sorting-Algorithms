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
// Merge Sort.
void Merge_Sort(vector<int>& x){
    // Split the array into two parts.
    if(x.size() > 1){
        vector<int> left = vector<int>(x.begin(), x.begin() + x.size()/2);
        vector<int> right = vector<int>(x.begin() + x.size()/2, x.end());
        // Recursive call.
        Merge_Sort(left);
        Merge_Sort(right);
        // Merge.
        int i = 0, j = 0, k = 0;
        while(i < left.size() && j < right.size()){
            if(left[i] < right[j]){
                x[k] = left[i];
                i += 1; 
            }
            else{
                x[k] = right[j];
                j += 1;
            }
            k += 1;
        }
        // If the left array has elements but the right array is empty.
        while(i < left.size()){
            x[k] = left[i];
            i += 1, k += 1;
        }
        // If the right array has elements but the left array is empty.
        while(j < right.size()){
            x[k] = right[j];
            j += 1, k += 1;
        }
    }
}
// Main function.
int main(void){
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
