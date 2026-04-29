#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Ticket {
private:
    string passengerName;
    string shipName;
    string departureTime;
    double price;

public:
    Ticket(string passenger, string ship, string departure, double ticketPrice) {
        passengerName = passenger;
        shipName = ship;
        departureTime = departure;
        price = ticketPrice;
    } 

    string getPassengerName() {
        return passengerName;
    }

    string getShipName() {
        return shipName;
    }

    string getDepartureTime() {
        return departureTime;
    }

    double getPrice() {
        return price;
    }
};

class Passenger {
private:
    string name;
    int age;
    enum gender {L , P};

public:
    Passenger(string passengerName, int passengerAge, enum passengerGender {L, P}) {
        name = passengerName;
        age = passengerAge;
        gender = passengerGender;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getGender() {
        return gender;
    }
};

class Ship {
private:
    string name;
    int capacity;

public:
    Ship(string shipName, int shipCapacity) {
        name = shipName;
        capacity = shipCapacity;
    }

    string getName() {
        return name;
    }

    int getCapacity() {
        return capacity;
    }
};

class Port {
private:
    string name;

public:
    Port(string portName) {
        name = portName;
    }

    string getName() {
        return name;
    }
};

class TicketingSystem {
private:
    vector<Ticket> tickets;

public:
    void sellTicket(Ticket ticket) {
        tickets.push_back(ticket);
    }

    void displayAllTickets() {
        for (Ticket ticket : tickets) {
            cout << "Passenger Name: " << ticket.getPassengerName() << endl;
            cout << "Ship Name: " << ticket.getShipName() << endl;
            cout << "Departure Time: " << ticket.getDepartureTime() << endl;
            cout << "Price: " << ticket.getPrice() << endl;
        }
    }
};

int main() {
    TicketingSystem ticketingSystem;

    string passengerName, shipName, departureTime, gender;
    int age;
    double ticketPrice;
    
    cout << "Enter Passenger Name: ";
    getline(cin, passengerName);
    
    cout << "Enter Passenger Age: ";
    cin >> age;
    
    cout << "Enter Passenger Gender: ";
    cin >> gender;
    
    cin.ignore(); // Ignore newline character
    
    Passenger passenger(passengerName, age, gender);

    cout << "Enter Ship Name: ";
    getline(cin, shipName);

    int shipCapacity;
    cout << "Enter Ship Capacity: ";
    cin >> shipCapacity;
    cin.ignore(); // Ignore newline character

    Ship ship(shipName, shipCapacity);

    cout << "Enter Departure Time: ";
    getline(cin, departureTime);

    cout << "Enter Ticket Price: ";
    cin >> ticketPrice;

    Ticket ticket(passenger.getName(), ship.getName(), departureTime, ticketPrice);

    ticketingSystem.sellTicket(ticket);
    ticketingSystem.displayAllTickets();

    return 0;
}