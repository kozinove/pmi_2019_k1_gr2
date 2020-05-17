#include"zoo.h"

void zoo::addAnim(int a, animal* an)
{
    massCage[a].addAnim(an);
}

bool animal::getPredator() const
{
    return predator;
}

void zoo::checkAllCage() const
{
    for (int i = 0; i < 10; i++)
    {
        massCage[i].voice();
    }
}

cage::cage()
{
    empty1 = true;
    empty2 = true;
}

void cage::addAnim(animal* an)
{
    try
    {
        if (!empty1)
        {
            if (!empty2)
            {
                throw "The cage is full";
            }
            else
            {
                if (an->getPredator())
                {
                    if (animInCage1->getPredator())
                        throw "You can't put a predator to a predator";
                    if (!animInCage1->getPredator())
                        throw "You can't put a predator to a herbivore";
                }
                else
                {
                    if (animInCage1->getPredator() == false)
                    {
                        animInCage2 = an;
                        empty2 = false;
                    }
                    if (animInCage1->getPredator())
                        throw "You can't put a herbivore to a predator";
                }
            }

        }
        else
        {
            if (an->getPredator())
            {
                if (empty2)
                {
                    animInCage1 = an;
                    empty1 = false;
                }
                else
                {
                    if (animInCage2->getPredator())
                        throw "You can't put a predator to a predator";
                    if (!animInCage2->getPredator())
                        throw "You can't put a predator to a herbivore";
                }
            }
            else
            {
                if (empty2 || animInCage2->getPredator() == false)
                {
                    animInCage1 = an;
                    empty1 = false;
                }
                else          
                    if (animInCage2->getPredator())
                        throw "You can't put a herbivore to a predator";
            }

        }
    }
    catch(const char * str)
    {
        cout << str << '\n';
        cout << "Select a different cage\n";
    }
    
}

void cage::voice() const
{
    if (empty1)
    {
        cout << "empty - 1\n";
    }
    else
    {
        animInCage1->voice();
    }

    if (empty2)
    {
        cout << "empty - 2\n";
    }
    else
    {
        animInCage2->voice();
    }
    cout << "\n";
}

void wolf::voice() const
{
    cout <<"Wof-wof\n";
}

void tiger::voice() const
{
    cout <<"Rrrrrrr\n";
}

void snake::voice() const
{
    cout <<"Ssssssss\n";
}

void donkey::voice() const
{
    cout <<"IIIIII-aaa\n";
}