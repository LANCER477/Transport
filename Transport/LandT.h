#pragma once
#include "Transport.h"
using namespace std;

class LandT : public Transport
{
protected:

    bool HasWheels;
    int HorsePowers;
public:
    LandT(string n, double s, int c, bool w, int hp):Transport(n, s, c), HasWheels(w), HorsePowers(hp)
    {

    }
    void Output() const
    {
        Transport::Output();
        cout << "Has wheels: " << HasWheels << "\nHorse powers: " << HorsePowers << endl;
    }
};

class Car : public LandT
{
private:
    bool ElectricE;
public:
    Car(string n, double s, int c, int w, int hp, bool ElectricE):LandT(n, s, c, w, hp), ElectricE(ElectricE) {}
    void Output() const
    {
        LandT::Output();
        cout << "Elecatic engine: " << ElectricE << endl;
    }
};

class HorseDrawn : public LandT
{
private:
    string Animal;
public:
    HorseDrawn(string n, double s, int c, int w, int hp, string animal):LandT(n, s, c, w, hp), Animal(animal) {}
    void Output() const
    {
        LandT::Output();
        cout << "Animal: " << Animal << endl;
    }
};

class Train : public LandT
{
private:
    int WagonN;
public:
    Train(string n, double s, int c, bool hw, int hp, int wn) :LandT(n, s, c, hp, wn), WagonN(wn) {}

    void Output() const
    {
        LandT::Output();
        cout << "Number of Wagons: " << WagonN << endl;
    }
};