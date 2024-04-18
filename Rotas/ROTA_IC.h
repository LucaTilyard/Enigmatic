//
// Created by luca on 18/04/24.
//

//rota1 is Ic (Industrial enigma) (first one on the wiki page)
#ifndef ROTA_IC_H
#define ROTA_IC_H

int IC_Fowards(int letter){
    switch (letter) {
        case 0:
            return 3;
        case 1:
            return 12;
        case 2:
            return 19;
        case 3:
            return 22;
        case 4:
            return 18;
        case 5:
            return 8;
        case 6:
            return 11;
        case 7:
            return 17;
        case 8:
            return 20;
        case 9:
            return 24;
        case 10:
            return 16;
        case 11:
            return 13;
        case 12:
            return 10;
        case 13:
            return 5;
        case 14:
            return 4;
        case 15:
            return 9;
        case 16:
            return 2;
        case 17:
            return 0;
        case 18:
            return 25;
        case 19:
            return 1;
        case 20:
            return 15;
        case 21:
            return 6;
        case 22:
            return 23;
        case 23:
            return 14;
        case 24:
            return 7;
        case 25:
            return 21;

    }
}
int IC_Backwards(int letter){
    switch (letter) {
        case 3:
            return 0;
        case 12:
            return 1;
        case 19:
            return 2;
        case 22:
            return 3;
        case 18:
            return 4;
        case 8:
            return 5;
        case 11:
            return 6;
        case 17:
            return 7;
        case 20:
            return 8;
        case 24:
            return 9;
        case 16:
            return 10;
        case 13:
            return 11;
        case 10:
            return 12;
        case 5:
            return 13;
        case 4:
            return 14;
        case 9:
            return 15;
        case 2:
            return 16;
        case 0:
            return 17;
        case 25:
            return 18;
        case 1:
            return 19;
        case 15:
            return 20;
        case 6:
            return 21;
        case 23:
            return 22;
        case 14:
            return 23;
        case 7:
            return 24;
        case 21:
            return 25;

    }
}

#endif ROTA_IC_H
