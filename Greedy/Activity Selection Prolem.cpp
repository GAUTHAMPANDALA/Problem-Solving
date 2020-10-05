					//  You are given n activities with their start and finish times. //
			//Select the maximum number of activities that can be performed by a single person //
				//  assuming that a person can only work on a single activity at a time. //
	
// Algorithm
// Sort the activities according to their finishing time
//  Select the first activity from the sorted array and print it.
//  Do following for remaining activities in the sorted array.
//    a) If the start time of ith activity is greater than or equal to the finish time of previously selected activity 
//      then select this activity and print it.
// Ie. Here we keep track of the recent activity selected and compare that finish time with next start time.
//  The end time of activity will be selected, if the activity is feasible to run based on start time and compared to 
//  another start time.

 
#include <bits/stdc++.h> 
using namespace std; 
  
// A job has a start time, finish time. 
struct Activitiy 
{ 
    int start, finish; 
}; 
  
// A utility function that is used for sorting activities according to finish time ascending order. 
bool activityCompare(Activitiy s1, Activitiy s2) 
{ 
    return (s1.finish < s2.finish); 
} 
  

void printMaxActivities(Activitiy arr[], int n) 
{ 
    sort(arr, arr+n, activityCompare); // Sort jobs according to finish time 
    cout << "Following activities are selected n"; 
    int i = 0;    // The first activity always gets selected 
    cout << "(" << arr[i].start << ", " << arr[i].finish << "), "; 
  
    for (int j = 1; j < n; j++) 
    { 
      // If this activity has start time greater than or  equal to the finish time of previously selected 
      // activity, then select it 
      if (arr[j].start >= arr[i].finish) 
      { 
          cout << "(" << arr[j].start << ", "<< arr[j].finish << "), "; 
          i = j;   //This will update the latest selected activity .   
      } 
    } 
} 
  
// Driver program 
int main() 
{ 
    Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printMaxActivities(arr, n); 
    return 0; 
} 
