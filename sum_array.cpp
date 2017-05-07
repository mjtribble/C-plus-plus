#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main(){
    int n;
    int sum= 0;
    std::cin >> n;
    std::vector<int> arr(n);
    
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       std::cin >> arr[arr_i];
        sum += arr[arr_i];

    }
    std::cout << sum << std::endl; 

    return 0;
}
