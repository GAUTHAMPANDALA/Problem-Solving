			//Given an array of buildeings each of one unit, find total water that is tapping between building //

/*
	N = 4
		arr[] = {7,4,0,9}
		Output: 10
		Explanation: Water trapped by above block of height 4 is 3 units and above block of height 0 is 7 units. So, the 
					 total unit of water trapped is 10 units.
     
        ie, ==>  3+7=10 units
        
    // Algorithm:
    
       1. Here, as per observation, we see for a[i] water at that level is stored 
	   			because there is gap between the max element in left and max element in right.
	   2. We can use a Stack to track the bars that are bounded by the longer left and right bar.
	       as we push every bar in stack and pop the bar when we find S.TOP() IE, A[I-1] less than A[I[
	   3. so we do this for every element and add all the water exsists there to get total water trapped.
        
*/

#include <bits/stdc++.h>

using namespace std;

int min(int a,int b)
{
	
	if(a>b)
	return b;
	else
	return a;
}
int maxWater(int height[], int n)
{
	
	// Stores the indices of the bars
	stack <int> st;

	// Stores the final result
	int ans = 0;

	// Loop through the each bar
	for(int i = 0; i < n; i++)
	{
		
		// Remove bars from the stack until the condition holds
		while ((!st.empty()) && (height[st.top()] < height[i]))
		{
			
			// Store the height of the top and pop it.
			int pop_height = height[st.top()];
			st.pop();

			// If the stack does not have any bars or the the popped bar has no left boundary
			if (st.empty())
				break;

			// Get the distance between the left and right boundary of popped bar
			int distance = i - st.top() - 1;

			// Calculate the min. height
			int min_height = min(height[st.top()],height[i]) -pop_height;
                    cout<<"min(height[st.top()],height[i]) and pop height "<< height[st.top()]<<" "<<height[i]<<" "<<pop_height<<endl;
                    cout<<"mih_height and dis "<<min_height<<" "<<distance<<endl;

			ans += distance * min_height;
		}

		// If the stack is either empty or height of the current bar is less than or equal to the top bar of stack
		st.push(i);
	}
	return ans;
}

// Driver code
int main() 
{
	
	int arr[] = {3,0,1,2,4,2,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << maxWater(arr, n);

	return 0;
}
