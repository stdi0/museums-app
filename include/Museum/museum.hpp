//
//  museum.hpp
//  museums-app
//
//  Created by Denis Kozlov on 16.12.2020.
//  Copyright © 2020 Denis Kozlov. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Museum {
private:
    string name; // Название музея
    string address; // Адрес
    unsigned short established; // Дата основания
    unsigned long visitors; // Средняя посещаемость в год
public:
    // Конструктор по-умолчанию
    Museum ();
    
    // Конструктор с параметрами
    Museum (string name, string address, unsigned short established, unsigned long visitors);
    
    // Сеттеры
    void setName (string name);
    
    void setAddress (string address);
    
    void setEstablished (unsigned short established);
    
    void setVisitors (unsigned long visitors);
    
    // Геттеры
    string getName ();
    
    string getAddress ();
    
    unsigned short getEstablished ();
    
    unsigned long getVisitors ();
    
    // Печать
    void display ();
};
