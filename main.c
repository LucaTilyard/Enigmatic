#include <stdio.h>
#include <math.h>
#include "Rotas/ROTA_IC.h"
#include "Rotas/ROTA_IIC.h"
#include "Rotas/ROTA_IIIC.h"
#include "Reflectors/ReflectorA.h"

#include "HelperFunctions/helperFunctions.h"



//set up rotor counter notch positions, this needs to be moved to be included with the rota definitions
int rota1Notch = 0;
int rota2Notch = 0;
int rota3Notch = 0;


//cables must not overlap, only one cable per int. 404 shows no cable connected
int cable1Start = 0;
int cable1End = 23;
int cable2Start = 404;
int cable2End = 404;
int cable3Start = 404;
int cable3End = 404;
int cable4Start = 404;
int cable4End = 404;
int cable5Start = 404;
int cable5End = 404;
int cable6Start = 404;
int cable6End = 404;
int cable7Start = 404;
int cable7End = 404;
int cable8Start = 404;
int cable8End = 404;
int cable9Start = 404;
int cable9End = 404;
int cable10Start = 404;
int cable10End = 404;


int plugBoard(int letter) {
    if(letter == cable1Start) {
        return cable1End;
    } if(letter == cable2Start) {
        return cable2End;
    } if(letter == cable3Start) {
        return cable3End;
    } if(letter == cable4Start) {
        return cable4End;
    } if(letter == cable5Start) {
        return cable5End;
    } if(letter == cable6Start) {
        return cable6End;
    } if(letter == cable7Start) {
        return cable7End;
    } if(letter == cable8Start) {
        return cable8End;
    } if(letter == cable9Start) {
        return cable9End;
    } if(letter == cable10Start) {
        return cable10End;
    } if(letter == cable1End) {
        return cable1Start;
    } if(letter == cable2End) {
        return cable2Start;
    } if(letter == cable3End) {
        return cable3Start;
    } if(letter == cable4End) {
        return cable4Start;
    } if(letter == cable5End) {
        return cable5Start;
    } if(letter == cable6End) {
        return cable6Start;
    } if(letter == cable7End) {
        return cable7Start;
    } if(letter == cable8End) {
        return cable8Start;
    }  if(letter == cable9End) {
        return cable9Start;
    } if(letter == cable10End) {
        return cable10Start;
    }
    return letter;
}


int SendIntThroughRotas(int startingInt, int rota1count, int rota2count, int rota3count) {

    //through switch board
    int SwitchboardOut = plugBoard(startingInt);

    //through rota 1 and check
    int postRota1 = IC_Fowards((SwitchboardOut+ rota1count) % 26);
    int rota1out = moduloPositive(postRota1 - rota1count, 26);

    //through rota 2 and check
    int postRota2 = IIC_Fowards((rota1out + rota2count) % 26);
    int rota2out = moduloPositive(postRota2 - rota2count, 26);

    int postRota3 = IIIC_Fowards((rota2out + rota3count) % 26);
    int rota3out = moduloPositive(postRota3 - rota3count, 26);

    //through inverter at end
    int postInverter = reflectorA(rota3out);

    //back through rota 3
    int backpostRota3 = IIIC_Backwards((postInverter + rota3count) % 26);
    int backrota3out = moduloPositive(backpostRota3 - rota3count, 26);

    //back through rota 2 and check
    int backpostRota2 = IIC_Backwards((backrota3out + rota2count) % 26);
    int backrota2out = moduloPositive(backpostRota2 - rota2count, 26);

    //back through rota 1 and check
    int backpostRota1 = IC_Backwards((backrota2out + rota1count) % 26);
    int backrota1out = moduloPositive(backpostRota1 - rota1count, 26);

    int backSwitchboardOut = plugBoard(backrota1out);


    printf("%d", backSwitchboardOut);
    printf("\n");

    return backSwitchboardOut;

}


int main(void)
{
    int numbin = 1;
    int rotaCount1 = 0;
    int rotaCount2 = 0;
    int rotaCount3 = 0;

        // increase roatas by a step
        rotaCount1 ++;
        rotaCount1 = moduloPositive(rotaCount1, 26);
        if (rotaCount1 == rota1Notch) {
            rotaCount2++;
            rotaCount2 = moduloPositive(rotaCount2, 26);
            if (rotaCount2 == rota2Notch){
                rotaCount3++;
                rotaCount3 = moduloPositive(rotaCount3, 26);
            }
            rotaCount2 = moduloPositive(rotaCount2, 26);
        }

        int check = SendIntThroughRotas(numbin,rotaCount1,rotaCount2,rotaCount3);

        if(check == numbin) {
            printf("repeted int error \n ");
            printf("%d", rotaCount1);
            printf("\n");
            printf("%d", rotaCount2);
            printf("\n");
            printf("%d", rotaCount3);
            printf("\n");
            printf("%d", numbin);
            return 0;
        }





}





