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

void printRestaurant(Restaurant r)
{
    cout << "---- Restaurant Info ----";
    cout << "Name: " << r.name << endl;
    cout << "Address: " << r.address << endl;
    cout << "Rating: " << r.rating << endl;
    cout << "Seats: " << r.seatCount << endl;

    cout << "Delivery: ";
    if (r.hasDelivery)
        cout << "Yes";
    else
        cout << "No";

    cout << "--------------------";
}

int main() {

    Restaurant R1 = createRestaurant();
    Restaurant R2 = createRestaurant();
    Restaurant R3 = createRestaurant();
    Restaurant R4 = createRestaurant();

    printRestaurant(R1);
    printRestaurant(R2);
    printRestaurant(R3);
    printRestaurant(R4);
   return 0; 
}