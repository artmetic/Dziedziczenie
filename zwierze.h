#ifndef ZWIERZE_H
#define ZWIERZE_H

#include <QString>
#include <QDebug>

class Zwierze
{
public:
    Zwierze(QString &nazwa, const double &waga) : waga(waga), nazwa(nazwa){
        qDebug() << "Konstrukcja zwierzaka: " << getNazwa();
    }
    virtual void jedz() = 0;
    virtual void wydajDzwiek() = 0;
    virtual void zwarz(double waga) = 0;
    virtual double getWaga(){ return 0.; }
    virtual ~Zwierze(){qDebug() << "Destrukcja zwierzaka: " << getNazwa();}

protected:
    double waga;
    QString getNazwa(){return nazwa;}

private:
    const QString nazwa;

};

#endif // ZWIERZE_H

