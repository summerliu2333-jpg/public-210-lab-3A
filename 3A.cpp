//COMSC-210-5068 lab3A Yang Liu
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
    string input;

    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter address: ";
    getline(cin, temp.address);

    cout << "Enter rating (1-5): ";
    getline(cin, input);
    temp.rating = stoi(input);

    cout << "Enter number of seats: ";
    getline(cin, input);
    temp.seatCount = stoi(input);
 
    cout << "Has delivery? (1=yes, 0=no): ";
    getline(cin, input);
    temp.hasDelivery = (stoi(input) == 1);

    return temp;
}

void printRestaurant(Restaurant r)
{
    cout << "---- Restaurant Info ----" << endl;
    cout << "Name: " << r.name << endl;
    cout << "Address: " << r.address << endl;
    cout << "Rating: " << r.rating << endl;
    cout << "Seats: " << r.seatCount << endl;

    cout << "Delivery: ";
    if (r.hasDelivery)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
    cout << "--------------------" << endl;
    cout << endl;
    cout << endl;
}

Restaurant createRestaurant();
void printRestaurant(Restaurant r);

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