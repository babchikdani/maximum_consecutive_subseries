#include <algorithm>
#include <iostream>
#include <vector>

/* 
This program recieves a series a1, a2, a3, ... ,an and returns the max consecutive series with the maximum 
multiplication value, including the starting (called left most index) and finishing (called right most index) indexes. 

memory complexity: O(n) with n being the series length. 
time complexity: O(n) with n being the series length.  
*/
int main(){
    using namespace std;
    cout << "Welcome, \n please insert your series:\n";         //TODO: input check and introduction
    vector<int> array;                          // TODO: second mission: save time by making the process more efficient
    while(cin >> input){
        array.push_back(input)
    } 
    int array_size = array.length();
    vector<int> B = {0}
    int max_element=0;          
    int max_element_index=0;                            // left most max element
    for(int i=1; i <= array_size ; i++){
        B[i] = max(array[i], array[i]*B[i-1]);
    }

    for(int i=0; i < array_size ; i++){
        if(max_element < B[i]){
            max_element = B[i];
            max_element_index = i; 
        }
    }
    int left_most = -1;
    for( int i = max_element_index; i>0 ; i--){
        if (array[i] <= 1) left_most = i+1;
    }
    vector<int> max_subseries = {array.begin() + left_most, array.end() - max_element_index}; 
    cout << "Left most index is " << left_most << " and right most index is " << max_element_index << endl; 
    cout << "the max-multiplication sub series is: " << endl;
    for(int i=0; i < max_subseries.length(); i++){
        if (i != max_subseries_length()-1){
            cout << max_subseries[i] << ", "; 
        } else {
            cout << max_subseries[i]; 
        }
    }
    cout << "\n Ciao! \n"
    return 0;
}
