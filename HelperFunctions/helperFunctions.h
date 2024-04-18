//
// Created by luca on 18/04/24.
//

#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

//mod helper function
int moduloPositive(int value, int modulus) {
    if(value == 0) {
        return 0;
    }
    if(value == modulus) {
        return 0;
    } if ((value % modulus) < 0) {
        return (modulus + value);
    }

    return (value % modulus);


}

//convert lowercase char to index of letter in alphabet
int CharToInt(char input) {
    int index = input - 'a';
    return index;
}

#endif //HELPERFUNCTIONS_H
