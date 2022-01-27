//Liam, Tony, Ilyas
//OOP Lab 2

#include <iostream>
using namespace std;

class Location {
private:
	int x;
	int y;
public:
	void print() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	void setx(int a) {
		cout << "Changed X:" << endl;
		x = a;
	}
	void sety(int a) {
		cout << "Changed Y:" << endl;
		y = a;
	}
};


class Driver {
private:
	string firstname;
	string lastname;
	int driverID;
public:
	void print() {
		cout << firstname << " " << lastname << " Id:" << driverID << endl;
	}
	void setfirstname(string a) {
		cout << "Changed firstname:" << endl;
		firstname = a;
	}
	void setlastname(string a) {
		cout << "Changed lastname:" << endl;
		lastname = a;
	}
	void setdriverid(int a) {
		cout << "Changed Driver ID:" << endl;
		driverID = a;
	}
};

class Truck {
private:
	Driver driver;
	Location location;
	int truckID;

public:
	void print() {
		cout << "Truck Id:" << truckID << endl;
	}
	void setTruckID(int a) {
		cout << "Changed Truck ID:" << endl;
		truckID = a;
	}
};

int main() {
	cout << "Location:" << endl;
	Location L1; // location 1
	L1.setx(2);
	L1.sety(3);
	L1.print();
	Location L2; // location 2
	//all of the location 2 specifics goes here

	cout << "\nDriver:" << endl;
	Driver D1; // driver 1
	D1.setfirstname("Liz");
	D1.setlastname("Brian");
	D1.setdriverid(35);
	D1.print();
	Driver D2; // driver 2
	//all of the driver 2 specifics goes here

	cout << "\nTruck:" << endl;
	Truck T1; // truck 1
	T1.setTruckID(178543);
	T1.print();
	Truck T2; // truck 2
	//all of the Truck 2 specifics goes here

	return 0;
}