#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int refill(int n, std::vector<int>& c);

int main(){

    int n;
    int t;

    std::cin >> n >> t;

    std::vector<int> c(t);

    for(int c_i = 0; c_i < t; c_i++){
       std::cin >> c[c_i];
    }


    //std::cout << refill(n, c) << std::endl;
	return 0;
}

int refill(int total, std::vector<int>& c)
{
	int refill = 0;
	int remain = total - c[0];

	 //std::cout << "remain total = "<< remain << std::endl;

	for(int i = 1; i < c.size()-1; i++)
	{
		int remv = c[i];
		remain = (remain - remv);
		//std::cout << "remain total = "<< remain << std::endl;
		refill += (total - remain);
		remain = refill + remain;
	    //std::cout << "refill total = "<< refill << std::endl;
	}

	return refill;
}

