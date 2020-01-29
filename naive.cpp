// C++ program to print largest contiguous array sum 
#include<iostream> 
#include<climits> 
using namespace std; 

int maxSubArraySum(int array[], int size) 
{ 
	int max_so_far = INT_MIN, max_ending_here = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + array[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 
	return max_so_far; 
} 

/*Driver program to test maxSubArraySum*/
int main() 
{ 
	int array[] = {-10, -13, 23, -10, -15, 8, 13, -17}; 
	int n = sizeof(array)/sizeof(array[0]); 
	int max_sum = maxSubArraySum(array, n); 
	cout << "Maximum contiguous sum is " << max_sum; 
	return 0; 
} 
