
		// C program to Find Overlapping Rectangles and Area of overlapping Rectangles.



#include<bits/stdc++.h> 
  
struct Point // Structure of x and y coordinates
{ 
    int x, y; 
}; 
  
int min(int a,int b)
{
	if(a>b)
	return b;
	else 
	return a;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
bool doOverlap(Point l1, Point r1, Point l2, Point r2) 	// Returns true if two rectangles (l1, r1) and (l2, r2) overlap 
{ 
   
     if (l1.x > r2.x || l2.x > r1.x)   //  // If one rectangle is on left side of other rectangle.
        return false; 
     
	 if (l1.y < r2.y || l2.y < r1.y)  // If one rectangle is above other 
        return false; 
  
    return true; 
} 


int overlappingArea(Point l1, Point r1,Point l2, Point r2)  // Overlappping Rectangle.
{ 
  
    int area1 = abs(l1.x - r1.x) * abs(l1.y - r1.y);    // Area of 1st Rectangle = l*b
  
    
    int area2 = abs(l2.x - r2.x) * abs(l2.y - r2.y); 	// Area of 2nd Rectangle =l2*r2
          
  
    // Length of intersecting part i.e  // start from max(l1.x, l2.x) of  x-coordinate and end at min(r1.x,  r2.x)
	//  x-coordinate by subtracting   start from end we get required lengths.
    int areaI = (min(r1.x, r2.x) -max(l1.x, l2.x)) *(min(r1.y, r2.y) -max(l1.y, l2.y)); 
  
    return (area1 + area2 - areaI); 
} 


int main() 
{ 
    Point l1 = {0, 10}, r1 = {10, 0}; 
    Point l2 = {5, 5}, r2 = {15, 0}; 
    if (doOverlap(l1, r1, l2, r2)) 
        printf("Rectangles Overlap\n"); 
    else
        printf("Rectangles Don't Overlap\n"); 
    std::cout << overlappingArea(l1, r1, l2, r2)<<std::endl; 
    return 0; 
}

