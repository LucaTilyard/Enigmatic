//
// Created by luca on 18/04/24.
//

#ifndef ROTA_IIIC_H
#define ROTA_IIIC_H


//rota3 is IIIc (Industrial enigma) (third one on the wiki page)

int IIIC_Fowards(int letter){
    switch (letter) {
        case 0:
            return 20;
        case 1:
            return 16;
        case 2:
            return 13;
        case 3:
            return 19;
        case 4:
            return 11;
        case 5:
            return 18;
        case 6:
            return 25;
        case 7:
            return 5;
        case 8:
            return 12;
        case 9:
            return 17;
        case 10:
            return 4;
        case 11:
            return 7;
        case 12:
            return 3;
        case 13:
            return 15;
        case 14:
            return 23;
        case 15:
            return 10;
        case 16:
            return 8;
        case 17:
            return 1;
        case 18:
            return 21;
        case 19:
            return 24;
        case 20:
            return 6;
        case 21:
            return 9;
        case 22:
            return 2;
        case 23:
            return 22;
        case 24:
            return 14;
        case 25:
            return 0;

    }
}
int IIIC_Backwards(int letter){
    switch (letter) {
        case 20:
            return 0;
        case 16:
            return 1;
        case 13:
            return 2;
        case 19:
            return 3;
        case 11:
            return 4;
        case 18:
            return 5;
        case 25:
            return 6;
        case 5:
            return 7;
        case 12:
            return 8;
        case 17:
            return 9;
        case 4:
            return 10;
        case 7:
            return 11;
        case 3:
            return 12;
        case 15:
            return 13;
        case 23:
            return 14;
        case 10:
            return 15;
        case 8:
            return 16;
        case 1:
            return 17;
        case 21:
            return 18;
        case 24:
            return 19;
        case 6:
            return 20;
        case 9:
            return 21;
        case 2:
            return 22;
        case 22:
            return 23;
        case 14:
            return 24;
        case 0:
            return 25;

    }
}

#endif //ROTA_IIIC_H
