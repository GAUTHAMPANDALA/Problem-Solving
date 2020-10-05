         // Given an array of jobs where every job has a deadline and associated profit, find the jobs of max profit//
         // such that all jobs must be finished before dead line.//

// The idea is to solve the jobs at as last as of the  deadline,
//  ie if  job deadine is 4,3,3  we start at 4th unit , 3rd unit and 2nd unit as already the 1st job of deadline 3 is filled.
    
// Algorithm
//  1)Sort all jobs in decreasing order of profit and create result array to store the high profit jobs.
//  2) Iterate on jobs in decreasing order of profit.For each job , do the following :
//  Here we  take the maximum profit job and place it in the array slot of its deadline, if it is filled will look backwards 
//  from its deadline slot untill get empty slot.
//   b)If no such i exists, then ignore the job.




#include<iostream> 
#include<algorithm> 
using namespace std; 
  
// A structure to represent a job 
struct Job 
{ 
   char id;      // Job Id 
   int dead;    // Deadline of job 
   int profit;  // Profit if job is over before or on deadline 
}; 
  
 
bool comparison(Job a, Job b)        // This function is used for sorting all jobs according to profit
{ 
     return (a.profit > b.profit); 
} 
  

void printJobScheduling(Job arr[], int n)    
{ 
    
    sort(arr, arr+n, comparison);      // Sort all jobs according to decreasing order of profit 
  
    int result[n]; // To store result (Sequence of jobs) 
    bool slot[n];  // To keep track of free time slots 
  
   
    for (int i=0; i<n; i++)    // Initialize all slots to be free 
        slot[i] = false; 
  
    
    for (int i=0; i<n; i++) // Iterate through all given jobs 
    { 
       for (int j=min(n, arr[i].dead)-1; j>=0; j--) // Find a free slot for this job and we start from the last possible slot
        { 
           if (slot[j]==false)   // Free slot found 
           { 
             result[j] = i;  // Add this job to result 
             slot[j] = true; // Make this slot occupied 
             break; 
           } 
        } 
    } 
     
    for (int i=0; i<n; i++)      // Print the result 
       if (slot[i]) 
         cout << arr[result[i]].id << " "; 
} 
  
// Driver program to test methods 
int main() 
{ 
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Following is maximum profit sequence of jobs "; 
    printJobScheduling(arr, n); 
    return 0; 
} 
