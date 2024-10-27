#pragma once
#include "Transport.h"

using namespace std;

class WaterT : public Transport
{

protected:

    double displacement;
    double payload;

public:

    WaterT(string n, double s, int c, double d, double p):Transport(n, s, c), displacement(d), payload(p) {}

    void Output() const
    {
        Transport::Output();
        cout << "Displacement: " << displacement << "\nPayload: " << payload << endl;
    }
};

class SteamBoat : public WaterT
{
private:

    string fuelType;

public:

    SteamBoat(string n, double s, int c, double d, double p, string ft):WaterT(n, s, c, d, p), fuelType(ft) {}

    void Output() const
    {
        WaterT::Output();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Boat : public WaterT
{

private:

    string material;

public:
    Boat(string n, double s, int c, double d, double p, string m):WaterT(n, s, c, d, p), material(m) {}

    void Output() const {
        WaterT::Output();
        cout << "Material: " << material << endl;
    }
};

class Tanker : public WaterT
{
private:
    int numContainers;

public:

    Tanker(string n, double s, int c, double d, double p, int nc):WaterT(n, s, c, d, p), numContainers(nc) {}

    void Output() const
    {
        WaterT::Output();
        cout << "Number of Containers: " << numContainers << endl;
    }
};