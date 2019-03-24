#include <QCoreApplication>
#include <QDebug>

#include "jamnik.h"
#include "pies.h"
#include "kot.h"

void sprawdzZwierzeta(Zwierze *zwierze)
{
    zwierze->jedz();
    zwierze->wydajDzwiek();
    qDebug() << "Waga zwierzaka: " << zwierze->getWaga() << "kg";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Kot kot("Bonifacy");
    Pies pies("Reksio");
    Pies piesPluto("Pluto");
    Jamnik jamnik("Jamulek");

    piesPluto.zwarz(35.75);

    QVector<Zwierze *> zwierzyniec{&kot, &pies, &piesPluto, &jamnik};

    for(auto &a: zwierzyniec)
        sprawdzZwierzeta(a);

    qDebug() << "Waga zwierzaka klasy podstawowej:" << jamnik.Zwierze::getWaga() << "kg";

    return EXIT_SUCCESS;
}
