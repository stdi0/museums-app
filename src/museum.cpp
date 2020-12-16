//
//  museum.cpp
//  museums-app
//
//  Created by Denis Kozlov on 16.12.2020.
//  Copyright © 2020 Denis Kozlov. All rights reserved.
//

#include <Museum/museum.hpp>

// Конструктор по-умолчанию
Museum::Museum () {}

// Конструктор с параметрами
Museum::Museum (string name, string address, unsigned short established, unsigned long visitors) {
    this->name = name;
    this->address = address;
    this->established = established;
    this->visitors = visitors;
}

// Сеттеры
void Museum::setName (string name) {
    this->name = name;
}

void Museum::setAddress (string address) {
    this->address = address;
}

void Museum::setEstablished (unsigned short established) {
    this->established = established;
}

void Museum::setVisitors (unsigned long visitors) {
    this->visitors = visitors;
}

// Геттеры
string Museum::getName () {
    return this->name;
}

string Museum::getAddress () {
    return this->address;
}

unsigned short Museum::getEstablished () {
    return this->established;
}

unsigned long Museum::getVisitors () {
    return this->visitors;
}

// Печать
void Museum::display () {
    cout << "Name" << " - " << this->getName() << endl
         << "Address" << " - " << this->getAddress() << endl
         << "Established" << " - " << this->getEstablished() << endl
         << "Visitors" << " - " << this->getVisitors() << endl << endl;
}
