#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void compare(int a, int b, int &alice, int &bob);

int main(){
	int alice;
	int bob;
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;

    compare(a0, b0, alice, bob);
    compare(a1, b1, alice, bob);
    compare(a2, b2, alice, bob);

    std::cout<< alice << " " << bob <<std::endl;
    return 0;


}

void compare(int a, int b, int &alice, int &bob)
{
	if (a>b)
	{
		alice++;

	}else if(a<b)
	{
		bob++;
	}
}

