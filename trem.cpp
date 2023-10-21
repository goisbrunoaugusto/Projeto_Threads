#include "trem.h"
#include <QtCore>
#include "ui_mainwindow.h"
#include <QSemaphore>

QSemaphore sem156(1);
QSemaphore sem245(1);
QSemaphore sem134(1);
QSemaphore sem367(1);
QMutex mutex1;
QMutex mutex2;
QMutex mutex3;
QMutex mutex4;
QMutex mutex5;
QMutex mutex6;
QMutex mutex7;

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 0;
}

void Trem::setVelocidade (int novaVelocidade){
    this->velocidade = novaVelocidade;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    int newx = 0, newy = 0;

    while(true){
        newx = x, newy = y;
        switch(ID){
        case 1:     //Trem 1
            if(velocidade == 0){
                emit updateGUI(ID, x,y);
                break;
            }

            if (y == 30 && x <580)
                newx = x + 10;
            else if (x == 580 && y < 150)
                newy = y + 10;
            else if (x > 310 && y == 150)
                newx = x - 10;
            else
                newy = y - 10;

            //mutex
            if (newx == 580 && newy == 30){
                mutex1.lock();
            }
            if(newx == 580 && newy == 150){
                if(sem156.tryAcquire(1) && sem245.tryAcquire(1) && sem134.tryAcquire(1)){
                    sem156.acquire(1);
                    sem245.acquire(1);
                    sem134.acquire(1);
                    mutex5.lock();
                    mutex4.lock();
                    sem156.release(1);
                    sem245.release(1);
                    sem134.release(1);
                }
            }
            if(x == 580 && y == 150) mutex1.unlock();
            if(x == 440 && y == 150) mutex5.unlock();
            if(x == 310 && y == 150) mutex4.unlock();

            x = newx, y = newy;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(200 - velocidade);
            break;

        case 2: //Trem 2
            if(velocidade == 0){
                emit updateGUI(ID, x,y);
                break;
            }

            if (y == 30 && x <850)
                newx = x + 10;
            else if (x == 850 && y < 150)
                newy = y + 10;
            else if (x > 580 && y == 150)
                newx = x - 10;
            else
                newy = y - 10;

            //mutex
            if (newx == 850 && newy == 150) mutex7.lock();
            if(newx == 710 && newy == 150){
                if(sem367.tryAcquire(1) && sem156.tryAcquire(1)){
                    sem367.acquire(1);
                    sem156.acquire(1);
                    mutex6.lock();
                    sem367.release(1);
                    sem156.release(1);
                }
            }
            if(newx == 580 && newy == 150) mutex1.lock();
            if(x == 580 && y == 30) mutex1.unlock();
            if(x == 710 && y == 150) mutex7.unlock();
            if(x == 580 && y == 150) mutex6.unlock();

            x = newx, y = newy;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(200 - velocidade);
            break;

        case 3: //Trem 3
            if(velocidade == 0){
                emit updateGUI(ID, x,y);
                break;
            }

            if (y == 150 && x <440)
                newx = x + 10;
            else if (x == 440 && y < 270)
                newy = y + 10;
            else if (x > 170 && y == 270)
                newx = x - 10;
            else
                newy = y - 10;

            //mutex

            if (newx == 310 && newy == 150){
                if(sem245.tryAcquire(1)){
                    sem245.acquire(1);
                    mutex4.lock();
                    sem245.release(1);
                }
            }
            if(newx == 440 && newy == 150) mutex2.lock();
            if(x == 440 && y == 150) mutex4.unlock();
            if(x == 440 && y == 270) mutex2.unlock();

            x = newx, y = newy;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(200 - velocidade);
            break;

        case 4: //Trem 4
            if(velocidade == 0){
                emit updateGUI(ID, x,y);
                break;
            }

            if (y == 150 && x <710)
                newx = x + 10;
            else if (x == 710 && y < 270)
                newy = y + 10;
            else if (x > 440 && y == 270)
                newx = x - 10;
            else
                newy = y - 10;

//            mutex
            if(newx == 440 && y == 270) mutex2.lock();
            if (newx == 440 && newy == 150) {
                if(sem245.tryAcquire(1) && sem156.tryAcquire(1) && sem367.tryAcquire(1)){
                    sem245.acquire(1);
                    sem156.acquire(1);
                    sem367.acquire(1);
                    mutex5.lock();
                    mutex6.lock();
                    mutex3.lock();
                    sem245.release(1);
                    sem156.release(1);
                    sem367.release(1);
                }
            }
//            if(newx == 580 && newy == 150) mutex6.lock();
            if(x == 440 && y == 150) mutex2.unlock();
            if(x == 580 && y == 150) mutex5.unlock();
            if(x == 710 && y == 150) mutex6.unlock();
            if(x == 710 && y == 270) mutex3.unlock();


            x = newx, y = newy;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(200 - velocidade);
            break;

        case 5: //Trem 5
            if(velocidade == 0){
                emit updateGUI(ID, x,y);
                break;
            }

            if (y == 150 && x <980)
                newx = x + 10;
            else if (x == 980 && y < 270)
                newy = y + 10;
            else if (x > 710 && y == 270)
                newx = x - 10;
            else
                newy = y - 10;

            //mutex
            if (newx == 710 && newy == 270) {
                if(sem367.tryAcquire(1)){
                    sem367.acquire(1);
                    mutex3.lock();
                    mutex7.lock();
                    sem367.release(1);
                }
            }
            if(x == 710 && y == 150) mutex3.unlock();
            if(x == 850 && y == 150) mutex7.unlock();

            x = newx, y = newy;
            emit updateGUI(ID, x,y);    //Emite um sinal
            msleep(200 - velocidade);
            break;

        default:
            break;
        }
        
    }
}




