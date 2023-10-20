#include "trem.h"
#include <QtCore>
#include "ui_mainwindow.h"

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    //MainWindow * win = (MainWindow *) qApp::activeWindow();
    while(true){
        switch(ID){
        case 1:     //Trem 1
            if (y == 30 && x <580)
                x+=10;
            else if (x == 580 && y < 150)
                y+=10;
            else if (x > 310 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            //msleep(velocidade);
            msleep(win->slider_velTrem1->value());
            break;
        case 2: //Trem 2
            if (y == 30 && x <850)
                x+=10;
            else if (x == 850 && y < 150)
                y+=10;
            else if (x > 580 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(velocidade);
            break;
        case 3: //Trem 3
            if (y == 150 && x <440)
                x+=10;
            else if (x == 440 && y < 270)
                y+=10;
            else if (x > 170 && y == 270)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(velocidade);
            break;
        case 4: //Trem 4
            if (y == 150 && x <710)
                x+=10;
            else if (x == 710 && y < 270)
                y+=10;
            else if (x > 440 && y == 270)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(velocidade);
            break;
        case 5: //Trem 5
            if (y == 150 && x <980)
                x+=10;
            else if (x == 980 && y < 270)
                y+=10;
            else if (x > 710 && y == 270)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(velocidade);
            break;
        default:
            break;
        }
        
    }
}




