
			// Given the people and their weight to resuce and Weight of the boat, find minimum number of boats to resuce people 
			  // 2 People can be resuced once, and the total weight<=Boat weight.
				 // The boat will  travel with atleast 1 person.
			// The approach is to sort the array and check with lightweight person and strong wignt person.
		
			
#include<bits/stdc++.h>	
using namespace std;

int  RescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());  // Sortning the array
        int i = 0, j = people.size() - 1;
        int ans = 0;
        while (i <= j) {
            ans++;									// Atleast one can use the board.
            if (people[i] + people[j] <= limit)    // Cheking weights of heavy and light person to boat weight.
                i++;			// if, condition satisfy, then shift to next light memeber.
            j--;				// Shift to next Heaviest memeber.
        }

        cout<<ans;
 }
 
 
 int main()
 {
 	vector<int> people;
 	int limit;
 	
 	int input;
 	while (cin >> input) //enter any non-integer to end the loop!
{
   people.push_back(input);
}
cin>>limit;   // Enter the boat weight limit.
RescueBoats(people,limit);
 }
