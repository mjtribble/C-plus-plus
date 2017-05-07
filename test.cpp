#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector <int>  arr);
void printArray(vector <int> array);

int main(void) {
    vector <int>  ar;
    int ar_size;
    cin >> ar_size;
    for(int i=0; i < ar_size; i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        ar.push_back(_ar_tmp); 
    }

    insertionSort(ar);
    return 0;
}
void insertionSort(vector <int>  arr) {
    int last_pos = arr.size()-1;
    int insert = arr[last_pos]; //save last array integer
    for (int i = last_pos; i >=-1; i--)
    {
        if (i >= 0 && insert < arr[i-1] )
        {
            arr[i] = arr[i-1]; //shift right
            printArray(arr);
        }else
        {
            arr[i] = insert;
            printArray(arr);
            break;
        }
    }
}

void printArray(vector <int> array)
{
    for (int i = 0; i<array.size(); i++){

        std::cout << array[i] << ' ';
    }
        std::cout << "\n";

}