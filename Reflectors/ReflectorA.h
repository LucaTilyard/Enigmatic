//
// Created by luca on 18/04/24.
//

#ifndef REFLECTORA_H
#define REFLECTORA_H


//reflector A from https://en.wikipedia.org/wiki/Enigma_rotor_details
int reflectorA(int letterIndex) {
    switch(letterIndex) {
        case 0:
            return 4;
        case 1:
            return 9;
        case 2:
            return 12;
        case 3:
            return 25;
        case 4:
            return 0;
        case 5:
            return 11;
        case 6:
            return 24;
        case 7:
            return 23;
        case 8:
            return 21;
        case 9:
            return 1;
        case 10:
            return 22;
        case 11:
            return 5;
        case 12:
            return 2;
        case 13:
            return 17;
        case 14:
            return 16;
        case 15:
            return 20;
        case 16:
            return 14;
        case 17:
            return 13;
        case 18:
            return 19;
        case 19:
            return 18;
        case 20:
            return 15;
        case 21:
            return 8;
        case 22:
            return 10;
        case 23:
            return 7;
        case 24:
            return 6;
        case 25:
            return 3;

    }
}

#endif //REFLECTORA_H
