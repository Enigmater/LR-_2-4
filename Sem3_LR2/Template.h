#pragma once
#include "AbstractClass.h"

template <class TransportType> class Info: public TransportType {
private:
	string name;
public:
	Info() : TransportType() {
		this->name = "Transport";
	}

	Info(string name) : TransportType() {
		this->name = name;
	}

	~Info() {

	}

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return this->name;
	}

	void Print() {
		cout << "Transport: " << this->name << endl;
	}
};