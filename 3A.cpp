#include <iostream>
#include <string>
using namespace std;

struct Restaurant
{
    string name;
    string address;
    int rating;
    int seatCount;
    bool hasDelivery
    ;
};

Restaurant createRestaurant(){
    Restaurant temp;

    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter address: ";
    getline(cin, temp.address);

    cout << "Enter rating (1-5): ";
    cin >> temp.rating;   

    cout << "Enter number of seats: ";
    cin >> temp.seatCount;
 
    cout << "Has delivery? (1=yes, 0=no): ";
    cin >> temp.hasDelivery;

    return temp;
}

int main() {

    Restaurant R1 = createRestaurant();
    
   return 0; 
}