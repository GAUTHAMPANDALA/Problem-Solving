						// Given an array of elements in sorted order find the pair of given sum //

// Algorithm
// As the element are in sorted order, We use double pointer method
// Start i from begin and j from end , add those elements , 
// if this sum > given_sum decrement j because we need less value and  else increment i pointer because we need more value.

// Algorithm if elements are not in sorted order.
// Maintain the Unordered or HashSet to store the complement values, ie(sum-a[i]) values.
// Now at each array element find if we found the current element  complement value in the set, if found print.
// Here the compliment should not be a end position because this will calculate the repeated duplicate eleemnt.
// else move to next element and add that to the set. 

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int a[]={1,2,4,4,5};
    int n=5;
    int s=0;
    int sum=8;
    int i=0,j=n-1;
    
    while(i<j)
    {
    	s=a[i]+a[j];     // sum of the last and first element.
    	
    	if(s>sum)
    	{
    		j--;        // decrease j, we need low a[j] value
		}
		if(s<sum)
		{
			i++;    // increase i, we need low a[i] value
		}
		else
		{
			printf("%d %d",a[i],a[j]);
			break;
		}
	}
	// Logic if not in sorted order //
	
	int arr[]={2,1,5,4,3};
	int sum2=7;
	int n1=5;
	unordered_set<int>comp;   		// Hashmap to store the complement values of array element
    for(int i = 0; i < n1; i++) {
        int target = sum2 - arr[i];		// calcualting complement values ie, target value
        if(comp.find(target) != comp.end()) {		// chech if value is present and that should not be at end
           cout<<target<<" "<<arr[i];
        }
        comp.insert(arr[i]);		// Now insert the current element to set.
    }
    cout<<"Not found";

	
	return 0;
}
