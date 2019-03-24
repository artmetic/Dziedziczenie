#ifndef KOT_H
#define KOT_H

#include "QDebug"

#include "zwierze.h"

class Kot : public Zwierze
{
public:
    Kot(QString nazwa);
    ~Kot();
    void jedz() override;
    void wydajDzwiek()  override;
    double getWaga()  override;
    void zwarz(double waga) override;
};

#endif // KOT_H
