#pragma once
#include<iostream>
using namespace std;
class cage
{
    beast * anim1;
    beast * anim2;
    bool freedom1;
    bool freedom2;
public:
    cage();
    void  inner(beast* moo);
    void scream() const;
};
class beast
{
public:
    virtual void scream() const = 0;
    bool getPred() const;
    beast(bool am) :pred(am) {};
private:
    bool pred;
};
class zoo
{
public:
    void check() const;
    void inner(int i, beast* moo);
private:
    cage numofCage[10];
    
};
class bear : public beast
{
public:
    bear() :beast(true) {};
    virtual void scream() const;
};
class bird : public beast
{
public:
    bird() :beast(false) {};
    virtual void scream() const;
};
class zeebra: public beast
{
public:
   zeebra() :beast(true) {};
    virtual void scream() const;
};
