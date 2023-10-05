// Jim is standing on a bus station. There are 2 types of buses:
// Passenger Bus: stops at every stop
// Express Bus: stops at alternate stops.
// All the stations are in a straight line and numbered. Distance between each station is 1 unit. Given the following 2 stations:
// A: Jim's current station number
// 8: Jim's destination station number
// Consider the bus starts from Jim's current location, and he wants to reach the destination as soon as possible. Find out which type of bus Jim should catch to reach his destination station.
// For eg. Jim is standing at station 2 and want to reach station 5, then he has to catch Passenger. The difference between both stations is 3, if he catches Express, then it will stop at 4, 6 and so on. But, if he catches Passenger, then it will stop at 3,4,5,6. So jim will catch Passenger.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int currentSation, destinationStation; cin>>currentSation>>destinationStation;

    if((destinationStation - currentSation)% 2 != 0) cout<<"passanger"<<endl<<"Steps: "<<destinationStation - currentSation;
    else cout<<"Express"<<endl<<"Steps: "<<(destinationStation - currentSation)/2;
    
    return 0;
}

// 1 5
// Express
// Steps: 2

// 2 8
// Express
// Steps: 3

// 2 7
// passanger
// Steps: 5