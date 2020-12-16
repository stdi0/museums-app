//
//  menu.cpp
//  museums-app
//
//  Created by Denis Kozlov on 16.12.2020.
//  Copyright © 2020 Denis Kozlov. All rights reserved.
//

#include <stdlib.h>

#include <Menu/menu.hpp>
#include <Menu/Actions/actions.hpp>
#include <Utils/utils.hpp>

using namespace std;

void displayMenu () {
    
    while (true) {
        
        cout << "Меню:" << endl << endl
            << "1. Создание объекта с помощью конструктора по умолчанию" << endl
            << "2. Cоздание объекта с помощью конструктора с параметрами" << endl
            << "3. Инициализация массива объектов" << endl
            << "4. Просмотр свойств введенных объектов" << endl
            << "5. Найти самый посещаемый музей" << endl
            << "6. Выход из программы" << endl << endl;

        cout << "Введите номер пункта меню:" << endl;

        unsigned short input;
        
        bool ok = safeCin (input);
        if (!ok) {
            continue;
        }
        
        switch (input) {
            case 1:
                action_1();
                break;
            case 2:
                action_2();
                break;
            case 3:
                action_3();
                break;
            case 4:
                action_4();
                break;
            case 5:
                action_5();
                break;
            case 6:
                exit(0);
                break;
        }
    }
    
}
