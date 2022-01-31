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
		cout << "Changed X to: " << a << endl;
		x = a;
	}
	void sety(int a) {
		cout << "Changed Y to: " << a << endl;
		y = a;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
};


class Driver {
private:
	string firstname;
	string lastname;
	int driverID;
public:
	void print() {
		cout << "Driver data:\n" << firstname << " " << lastname << " Id:" << driverID << "\n" << endl;
	}
	void setfirstname(string a) {
		cout << "Changed firstname to: " << a << endl;
		firstname = a;
	}
	void setlastname(string a) {
		cout << "Changed lastname to: " << a << endl;
		lastname = a;
	}
	void setdriverid(int a) {
		cout << "Changed Driver ID to: " << a << endl;
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
		cout << "Truck Id: " << truckID << endl;
	}
	void setTruckID(int a) {
		cout << "Changed Truck ID to: " << a << endl;
		truckID = a;
	}
	double distanceFrom(int xOne,int xTwo, int yOne, int yTwo) {
		double distance = sqrt(pow(xOne - xTwo, 2) + pow(yOne - yTwo, 2)); //root of (x1-x2)^2 + (y1-y2)^2
		return distance;
	}
};

int main() {
	cout << "Location:" << endl;

	Location L1; // location 1
	L1.setx(2);
	L1.sety(3);
	L1.print();

	Location L2; // location 2
	L2.setx(5);
	L2.sety(2);
	L2.print();

	cout << "\nDriver(s):" << endl;

	Driver D1; // driver 1
	D1.setfirstname("Liz");
	D1.setlastname("Brian");
	D1.setdriverid(35);
	D1.print();

	Driver D2; // driver 2
	D2.setfirstname("Mike");
	D2.setlastname("Smith");
	D2.setdriverid(69);
	D2.print();

	cout << "Truck(s):" << endl;

	Truck T1; // truck 1
	T1.setTruckID(178543);
	T1.print();
	
	cout << "Distance between trucks: " << T1.distanceFrom(L1.getx(), L2.getx(), L1.gety(), L2.gety()); 
	cout << "\nDistance from origin: " << T1.distanceFrom(L1.getx(), 0, L1.gety(), 0) << "\n";
	
	Truck T2; // truck 2
	T2.setTruckID(245871);
	T2.print();

	cout << "Distance between trucks: " << T2.distanceFrom(L1.getx(), L2.getx(), L1.gety(), L2.gety());
	cout << "\nDistance from origin: " << T2.distanceFrom(L2.getx(), 0, L2.gety(), 0) << "\n";

	return 0;
}