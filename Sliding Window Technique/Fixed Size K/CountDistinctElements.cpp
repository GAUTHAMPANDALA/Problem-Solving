
						// SLIDING WINDOW TECHNIQUE //
				// C Program to Find the Distinct elemets in the Subaaray of size K //.

		// We use the Vector and set Concept as they dont store Duplicate Elemets, using sliding window Traversals //
		// We can use hach techqnies to solve this problem, as yhis take o(k) space.//

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to find all distinct elements present in each sub-array of size k in the array
int CountDistinctElemetsinSuarraySizeK(int a,int k,int n)
{
	// loop through the vector
	
	
    for (int i = 0; i < v.size() - (k-1); i++)      // This must from 0 to [n-k-1]
    {
        unordered_set<int> distinct(v.begin() + i, v.begin() + i + k);		// Takes windows of size [i to i+k], ie 0-4,5-9, etc.
 
        cout << "The count of distinct elements in the sub-array ["<< i << ", " << (i + k - 1) << "] is "<< distinct.size() << endl;
    }
}

int main()
{
	vector<int> a = { 2, 1, 2, 3, 2, 1, 4, 5 };
    int k = 5;
    CountDistinctElemetsinSuarraySizeK(a,k);	  
}
