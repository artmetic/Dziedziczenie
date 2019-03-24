#ifndef JAMNIK_H
#define JAMNIK_H

#include "pies.h"

class Jamnik final : public Pies
{
public:
    Jamnik(QString nazwa): Pies(nazwa, 10.) {
        qDebug() << "Konstrukcja jamnika: " << getNazwa();
    }
    ~Jamnik() override{
        qDebug() << "Destrukcja jamnika: " << getNazwa();
    }

    void jedz() override{
        qDebug() << QString("Jamnik %1 dostał karmę").arg(getNazwa()) ;
    }
};

#endif // JAMNIK_H
