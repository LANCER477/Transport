#pragma once
#include "Transport.h"
using namespace std;

class AirT : public Transport
{
protected:

    int WingS;

public:
    AirT(string n, double s, int c, int ws) : Transport(n, s, c), WingS(ws) {}

    void Output() const
    {
        Transport::Output();
        cout << "Wing Span: " << WingS << endl;
    }
};

class Airplane : public AirT
{
private:
    int SitN;
public:
    Airplane(string n, double s, int c, double ma, int sn):AirT(n, s, c, ma), SitN(sn) {}

    void Output() const
    {
        AirT::Output();
        cout << "Number of sits: " << SitN << endl;
    }
};

class Helicopter : public AirT
{
private:

    int WindowsN;

public:

    Helicopter(string n, double s, int c, double ma, int wn):AirT(n, s, c, ma), WindowsN(wn) {}

    void Output() const
    {
        AirT::Output();
        cout << "Number of windows: " << WindowsN << endl;
    }
};

class Airship : public AirT
{
private:

    double volume;

public:
    Airship(string n, double s, int c, double ma, double vol):AirT(n, s, c, ma), volume(vol) {}

    void Output() const
    {
        AirT::Output();
        cout << "Volume: " << volume << endl;
    }
};