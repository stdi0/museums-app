//
//  actions.cpp
//  museums-app
//
//  Created by Denis Kozlov on 16.12.2020.
//  Copyright © 2020 Denis Kozlov. All rights reserved.
//

#include <iostream>

#include <Museum/museum.hpp>
#include <Menu/Actions/actions.hpp>
#include <Utils/utils.hpp>

using namespace std;

Museum museums[3];

// Действие 1. Создание объекта с помощью конструктора по умолчанию
void action_1 () {
    
    Museum Louvre;
    Louvre.setName("Louvre Museum");
    Louvre.setAddress("Paris");
    Louvre.setEstablished(1793);
    Louvre.setVisitors(10200000);
    Louvre.display();
}

// Действие 2. Cоздание объекта с помощью конструктора с параметрами
void action_2 () {
    
    Museum Hermitage ("Hermitage Museum", "Saint Petersburg", 1764, 4200000);
    Hermitage.display();
}

// Действие 3. Инициализация свойств каждого объекта массива
void action_3 () {

    cout << "Сейчас Вам будет предложено ввести информацию о трех любимых музеях. Поехали." << endl << endl;

    
    for (int i = 0; i < 3; i++) {
        cout << "Любимый музей #" << i+1 << endl;

        string name;
        string address;
        unsigned short established;
        unsigned long visitors;

        bool ok;

        cin.clear();
        cin.ignore();

        cout << "Введите название музея:" << endl;
        getline(cin, name);

        cout << "Введите адрес:" << endl;
        getline(cin, address);
        
        cout << "Введите год основания:" << endl;
        ok = safeCin (established);
        if (!ok)
            return;
        
        cout << "Введите среднюю посещаемость в год:" << endl;
        ok = safeCin (visitors);
        if (!ok)
            return;

        museums[i].setName(name);
        museums[i].setAddress(address);
        museums[i].setEstablished(established);
        museums[i].setVisitors(visitors);
    }
}

// Действие 4. Просмотр свойств каждого объекта
void action_4 () {
    cout << "Введите номер записи (1, 2 или 3)" << endl;
    
    unsigned short idx;
    bool ok;

    ok = safeCin (idx);
    if (!ok)
        return;
    
    if (idx < 1 || idx > 3) {
        cout << "Ошибка. Номер должен быть в диапазоне 1..3" << endl;
        return;
    }
    
    museums[idx-1].display();
}

// Действие 5. Найти самый посещаемый музей
void action_5 () {
    
    int mostVisitedMuseum = 0;
    for (int i = 1; i < 3; i++) {
        if (museums[i].getVisitors() > museums[mostVisitedMuseum].getVisitors())
            mostVisitedMuseum = i;
    }
    
    cout << "Итак... Самый посещаемый музей:" << endl;
    
    museums[mostVisitedMuseum].display();
}
