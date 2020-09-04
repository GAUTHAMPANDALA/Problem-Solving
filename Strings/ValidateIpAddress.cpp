					// Given IPV4 address tell it Valid or not //
        //  IPv4 addresses are canonically represented in dot-decimal notation //
      //  This  consists of four decimal numbers in range 0-255, seperated by dots between each three numbers //
   	//   e.g., 172.16.254.1 . The generalized form of an IPv4 address is (0-255).(0-255).(0-255).(0-255). //


// STRTOK(STRING,DELIMIT_CHARECTER)
// Here we use strtok() funtion to divide the string. which will return the pointer of first letter of delimited string.
// Eg: geeks - for -geeks - gfg --> char *ptr=strtok(s,"-") delimiter is "-"
// now *ptr= g, and increment so on to null we get upto s, and now to will point to other delimited string, as 
// char *ptr = strtok(NULL,"-") --> This will return the pointer of first letter of second delimited string
//  now *ptr= f, and increment so on to null we get upto r, and then to other string.
// this function delimits and stores Null at end of each delimited sstring. 

// Algorithm
// The algorithm uses above function to divide set of charecters using delimiter ".".
// Now each set will check if digit is present or not, again convert the set of charecters to int using atoi().
// Now check the limit ie, b/w 0 -255. and check the number of sets that must be 4.
// if all above satisfy then it is valid.

   	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int validate_number(char *str,int i) {
	int len = strlen(str);
	int i1=0;
	while (i1<len) {
     //	printf("%d %c ",i,*str);
      if(!isdigit(*str)){ //if the character is not a number, return false
         
         return 0;
      }
      i1++;
      str++; //point to next character
   }
  /*  if(*str==NULL)
   {
   	printf("%d %c",i,*str);
   }
  // printf("\n");*/
  
   return 1;
   
}

int validate_ip(char *ip) { //check whether the IP is valid or not
   int i, num, dots = 1; // This is to check the number set count.
   char *ptr;
   if (ip == NULL)
      return 0;
      ptr = strtok(ip, "."); //cut the string using dor delimiter
      if (ptr == NULL)
         return 0;
   while (ptr) {
      if (!validate_number(ptr,dots)) //check whether the sub string is holding only number or not
            return 0;
      num = atoi(ptr); //convert substring to number
     if (num >= 0 && num <= 255) {
        ptr = strtok(NULL, "."); //cut the next part of the string
           if (ptr != NULL)
               dots++; //increase the dot count
        }
	  else
        return 0;
    }
    if (dots != 4) //if the number of dots are not 3, return false because only 4 set of numbers should present.
       return 0;
      return 1;
}


int main() {
   char ip1[] = "192.168.4.1";
   char ip2[] = "172.16.253.1";
   char ip3[] = "192.800.100.1";
   char ip4[] = "125.512.100.abc";
   validate_ip(ip1)? printf("Valid\n"): printf("Not valid\n");
   validate_ip(ip2)? printf("Valid\n"): printf("Not valid\n");
   validate_ip(ip3)? printf("Valid\n"): printf("Not valid\n");
   validate_ip(ip4)? printf("Valid\n"): printf("Not valid\n");
}
