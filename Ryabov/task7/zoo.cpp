#include"zoo.h"

void zoo::inner(int i, beast* moo)
{
    numofCage[i].inner(moo);
}

bool beast::getPred() const
{
    return pred;
}

void zoo::check() const
{
    for (int i = 0; i < 10; i++)
    {
        numofCage[i].scream();
    }
}

cage::cage()
{
    freedom1 = true;
    freedom2 = true;
}

void cage::inner(beast* moo)
{
    
        if (!freedom1)
        {
            if (!freedom2)
            {
                throw "full cage, try again";
            }
            else
            {
                if (moo->getPred())
                {
                    if (anim1->getPred())
                        throw "2 predators will eat each other";
                    if (!anim1->getPred())
                        throw "predator will eat bird";
                }
                else
                {
                    if (anim1->getPred() == false)
                    {
                        anim2 = moo;
                        freedom2 = false;
                    }
                    if (anim1->getPred())
                        throw "predator will eat bird";
                }
            }

        }
        else
        {
            if (moo->getPred())
            {
                if (freedom2)
                {
                    anim1 = moo;
                    freedom1 = false;
                }
                else
                {
                    if (anim2->getPred())
                        throw "You can't put a pred to a pred";
                    if (!anim2->getPred())
                        throw "You can't put a pred to a herbivore";
                }
            }
            else
            {
                if (freedom2 || anim2->getPred() == false)
                {
                    anim1 = moo;
                    freedom1 = false;
                }
                else
                    if (anim2->getPred())
                        throw "You can't put a herbivore to a pred";
            }

        }
    }
  



void cage::scream() const
{
    if (freedom1)
    {
        cout << "free 1\n";
    }
    else
    {
        anim1->scream();
    }

    if (freedom2)
    {
        cout << "free 2\n";
    }
    else
    {
        anim2->scream();
    }
    cout << "\n";
}

void bear::scream() const
{
    cout << "rrrrrrrrr\n";
}

void zeebra::scream() const
{
    cout << "zee-ze-zee\n";
}

void bird::scream() const
{
    cout << "ftu-fty\n";
}

