#include "pies.h"

Pies::Pies(QString nazwa,const double &waga) : Zwierze(nazwa, waga)
{
qDebug() << "Konstrukcja pieska: " << getNazwa();

iloscLatek.append(new int(1));
iloscLatek.append(new int(3));
iloscLatek.append(new int(4));
}

Pies::~Pies()
{
    qDebug() << "Destrukcja pieska: " << getNazwa();
    qDeleteAll(iloscLatek);
}


Pies::Pies(QString nazwa) : Zwierze(nazwa, 20.)
{
    qDebug() << "Konstrukcja domyślna pieska: " << getNazwa();
}

void Pies::jedz()
{
    qDebug() << QString("Pies %1 dostał karmę").arg(getNazwa()) ;
}

void Pies::wydajDzwiek()
{
    qDebug() << QString("Pies %1 szczeka").arg(getNazwa()) ;
}

double Pies::getWaga()
{
    qDebug() << QString("Kotka %1 waga to %2").arg(getNazwa()).arg(waga);
    return waga;
}

void Pies::zwarz(double waga)
{
    Zwierze::waga = waga;
    qDebug() << QString("Kotek %1 zważony").arg(getNazwa())  ;

}

