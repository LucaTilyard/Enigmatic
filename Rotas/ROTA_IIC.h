//
// Created by luca on 18/04/24.
//

#ifndef ROTA_IIC_H
#define ROTA_IIC_H

//rota2 is IIc (Industrial enigma) (second one on the wiki page)

int IIC_Fowards(int letter){
    switch (letter) {
        case 0:
            return 7;
        case 1:
            return 16;
        case 2:
            return 25;
        case 3:
            return 6;
        case 4:
            return 15;
        case 5:
            return 9;
        case 6:
            return 19;
        case 7:
            return 12;
        case 8:
            return 14;
        case 9:
            return 1;
        case 10:
            return 11;
        case 11:
            return 13;
        case 12:
            return 2;
        case 13:
            return 8;
        case 14:
            return 5;
        case 15:
            return 3;
        case 16:
            return 24;
        case 17:
            return 0;
        case 18:
            return 22;
        case 19:
            return 21;
        case 20:
            return 4;
        case 21:
            return 20;
        case 22:
            return 18;
        case 23:
            return 17;
        case 24:
            return 10;
        case 25:
            return 23;

    }
}
int IIC_Backwards(int letter) {
    switch (letter) {
        case 7:
            return 0;
        case 16:
            return 1;
        case 25:
            return 2;
        case 6:
            return 3;
        case 15:
            return 4;
        case 9:
            return 5;
        case 19:
            return 6;
        case 12:
            return 7;
        case 14:
            return 8;
        case 1:
            return 9;
        case 11:
            return 10;
        case 13:
            return 11;
        case 2:
            return 12;
        case 8:
            return 13;
        case 5:
            return 14;
        case 3:
            return 15;
        case 24:
            return 16;
        case 0:
            return 17;
        case 22:
            return 18;
        case 21:
            return 19;
        case 4:
            return 20;
        case 20:
            return 21;
        case 18:
            return 22;
        case 17:
            return 23;
        case 10:
            return 24;
        case 23:
            return 25;

    }
}

#endif //ROTA_IIC_H
