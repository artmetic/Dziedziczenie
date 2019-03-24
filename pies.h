#ifndef PIES_H
#define PIES_H

#include <QDebug>
#include "zwierze.h"

class Pies : public Zwierze
{
public:
    Pies(QString nazwa);
    Pies(QString nazwa, const double &waga);


    ~Pies() override;
    void jedz() override;
    void wydajDzwiek()  override;
    double getWaga()  override;
    void zwarz(double waga) final override;

private:
    QList<int *> iloscLatek;
};

#endif // PIES_H
