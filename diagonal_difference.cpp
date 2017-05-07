#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int primary_diagonal_sum(vector<vector<int> > &matrix, int n);
int secondary_diagonal_sum(vector<vector<int> > &matrix, int n);

int main(){
    int n;
    int sum = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

    sum += primary_diagonal_sum(a, n);
    sum -= secondary_diagonal_sum(a, n);
    sum = abs(sum);
    cout << sum << "\n";

    return 0;
}

int primary_diagonal_sum(vector<vector<int> > &matrix, int n)
{
	int i;
	int sum = 0;
	for(i = 0; i < matrix.size(); i++)
	{
//		cout << "primary sum = " << sum << "+"<< matrix[i][i] << "\n";
		sum += matrix[i][i];
	}

//	cout << "primary sum = " << sum << "\n";
	return sum;

}

int secondary_diagonal_sum(vector<vector<int> > &matrix, int n)
{
	int i = 0;
	int j = matrix.size()-1;
	int sum = 0;

	while( i < matrix.size())
	{
//		cout << "secondary sum = " << sum << "+"<< matrix[i][j] << "\n";
		sum += matrix[i][j];
		i++;
		j--;
	}
	
//	cout << "secondary sum = " << sum << "\n";

	return sum;
}
