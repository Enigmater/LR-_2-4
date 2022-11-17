#pragma once
#include <iostream>
using namespace std;

class Transport {
public:
	virtual void Print() = 0;
};

class Machine : public Transport {
public:
	void Print() override {
		cout << "Machine";
	}
};

class Motocycle : public Transport {
public:
	void Print() override {
		cout << "Motocycle";
	}
};

class Driver {
public:
	void PrintTransport(Transport* transport) {
		cout << "Man is driving ";
		transport->Print();
		cout << endl;
	}
};

