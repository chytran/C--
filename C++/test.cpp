#include<iostream>
#include<cmath>

using namespace std;

int main() {
    
    int weight;
    cout << "Enter your weight: ";
    cin >> weight;

    if (weight < 120)
    {
        cout << "You are " << weight << " lbs and average weight";
    }
    else if (weight >= 120) 
    {
        cout << "You are " << weight << " lbs and above average weight";
    } 
    else 
    {
        cout << "There is a glitch in the system, please refresh";
    }

    // Output
    return 0;
}