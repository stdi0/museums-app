//
//  utils.hpp
//  museums-app
//
//  Created by Denis Kozlov on 16.12.2020.
//  Copyright © 2020 Denis Kozlov. All rights reserved.
//

#include <iostream>

using namespace std;

void clearScreen ();

template <typename T>
bool safeCin (T& input) {
    cin >> input;
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Ошибка. Некорректные данные" << endl;
        
        return false;
    }
    
    return true;
}
