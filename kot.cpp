#include "kot.h"

Kot::Kot(QString nazwa) : Zwierze(nazwa,5.)
{
    qDebug() << "Konstrukcja kota: " << getNazwa();
}

Kot::~Kot()
{
    qDebug() << "Destrukcja kota: " << getNazwa();
}

void Kot::jedz()
{
    qDebug() << QString("Kotek %1 mlaska z miski mleko").arg(getNazwa()) ;
}

void Kot::wydajDzwiek()
{
    qDebug() << QString("Kotek %1 mruczy").arg(getNazwa()) ;
}

double Kot::getWaga()
{
    qDebug() << QString("Kotka %1 waga to %2").arg(getNazwa()).arg(waga);
    return waga;
}

void Kot::zwarz(double waga)
{
    Zwierze::waga = waga;
    qDebug() << QString("Kotek %1 zważony").arg(getNazwa())  ;
}
