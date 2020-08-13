
					// Difference between the angle hand and hour hand	//




#include <bits/stdc++.h>
using namespace std;

	int getAngle(double hr, double min)
{
    while (min >= 60) min -= 60;
    while (hr >= 12) hr -= 12;
    double hrAngle = (hr*60 + min)/2;  //30 deg per hour, 1/2 deg per minute
    double minAngle = 6*min;           //6 deg per minute
    double diff = abs(hrAngle - minAngle);
    
    diff = std::min<double>(360-diff, diff);  // min function.
   
    return diff;
}

int main()
 {
    // Note that size of arr[] is considered 100 according to
    // the constraints mentioned in problem statement.
    int  t;
    double min, hr;
 
    // Input the number of test cases you want to run
    cin >> t;
 
    // One by one run for all input test cases
    while (t--)
    {
        // Input the size of the array
        cin >> hr;
 
        // Input the element to be searched
        cin >> min;
 
        // Compute and print result
        cout << getAngle(hr, min) << endl;
    }
    return 0;
}
