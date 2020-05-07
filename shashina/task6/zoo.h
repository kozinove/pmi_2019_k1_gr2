#pragma once

class cell
{
public:
    virtual const void voice() = 0;
    virtual const bool _empty() = 0;
};

class empty : public cell
{
    virtual const void voice();
    virtual const bool _empty();
};
class horse : public cell
{
    virtual const void voice();
    virtual const bool _empty();
};

class donkey : public cell
{
    virtual const void voice();
    virtual const bool _empty();
};

class owl : public cell
{
    virtual const void voice();
    virtual const bool _empty();
};

class lion : public cell
{
   virtual const void voice();
   virtual const bool _empty();
};

class zoo
{
public:
    zoo (empty &e);
    void animalszoo (cell *animal, const int &p);
    const void voicezoo (const int &p);
private:
    cell *animals[10];
};

void who(zoo &_zoo);
