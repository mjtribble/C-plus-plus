#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    std::string s;
    std::ostringstream oss;

    for(int i = 0; i < n; i++){
       std::cin >> arr[i];
       oss << arr[i];
       s.insert(0, oss.str());
    }
    std::cout<< s<< std::endl;
    return 0;
    
    
}

