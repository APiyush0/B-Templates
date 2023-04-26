//
//  main.cpp
//  W15B Templates
//
//  Created by Piyush Aggarwal on 4/25/23.

#include <iostream>


using namespace std;


double half(double value)
{
    return value / 2.0;
}

float half(float value)
{
    return value / 2.0f;
}

int half(int value)
{
    return (value + (value % 2)) / 2;
}

int main()
{
    // Test cases
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}
