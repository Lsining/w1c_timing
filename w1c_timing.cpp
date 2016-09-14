// AUTHOR Sining Liu lsining@bu.edu
//  main.cpp
//  w1c_timing
//
//  Created by LiuSining on 16/9/12.
//  Copyright © 2016年 LiuSining. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    
    clock_t start_clock,end_clock,start_clock2,end_clock2;
    
    start_clock = clock();  // Timing starts here
    
    short unsigned int m = 1    ;
    
    while ( m > 0 )
           {
               m++;
           }
           
           end_clock = clock();    // Timing stops here
   double seconds = (double)(end_clock-start_clock) / CLOCKS_PER_SEC;
    
    start_clock2 = clock();  // Timing starts here
    
    unsigned int n = 1    ;
    
    while ( n > 0 )
    {
        n++;
    }
    
    end_clock2 = clock();    // Timing stops here
    
    
           double seconds2 = (double)(end_clock2-start_clock2) / CLOCKS_PER_SEC;
    
   
double microseconds,years;
    microseconds = seconds*1000000;
    years= seconds2;
for (int i=0; i < 32; i++)
    {
        years=years * 2;
    
    }
    years=years/60/60/24/365;
           cout << "short unsigned int time (microseconds) : " << microseconds << endl;
           cout << "unsigned int time (seconds) : "  << seconds2  << endl;
           cout << "long unsigned int time (years) :" << years  << endl;
    
           }