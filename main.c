#include <stdio.h>
#include <math.h>



//set up rotor counter notch positions
int rota1Notch = 0;
int rota2Notch = 0;
int rota3Notch = 0;


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

//rota1 is Ic (Industrial enigma) (first one on the wiki page)
int rota1(int letter){
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
int rota1inverse(int letter){
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

//rota2 is IIc (Industrial enigma) (second one on the wiki page)
int rota2(int letter){
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
int rota2inverse(int letter) {
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

//rota3 is IIIc (Industrial enigma) (third one on the wiki page)
int rota3(int letter){
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
int rota3inverse(int letter){
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


int SendIntThroughRotas(int startingInt, int rota1count, int rota2count, int rota3count) {

    //through switch board
    int SwitchboardOut = plugBoard(startingInt);

    //through rota 1 and check
    int postRota1 = rota1((SwitchboardOut+ rota1count) % 26);
    int rota1out = moduloPositive(postRota1 - rota1count, 26);

    //through rota 2 and check
    int postRota2 = rota2((rota1out + rota2count) % 26);
    int rota2out = moduloPositive(postRota2 - rota2count, 26);

    int postRota3 = rota3((rota2out + rota3count) % 26);
    int rota3out = moduloPositive(postRota3 - rota3count, 26);

    //through inverter at end
    int postInverter = reflectorA(rota3out);

    //back through rota 3
    int backpostRota3 = rota3inverse((postInverter + rota3count) % 26);
    int backrota3out = moduloPositive(backpostRota3 - rota3count, 26);

    //back through rota 2 and check
    int backpostRota2 = rota2inverse((backrota3out + rota2count) % 26);
    int backrota2out = moduloPositive(backpostRota2 - rota2count, 26);

    //back through rota 1 and check
    int backpostRota1 = rota1inverse((backrota2out + rota1count) % 26);
    int backrota1out = moduloPositive(backpostRota1 - rota1count, 26);

    int backSwitchboardOut = plugBoard(backrota1out);


    printf("%d", backSwitchboardOut);
    printf("\n");

    return backSwitchboardOut;

}


int main(void)
{
    int numbin = 0;
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





