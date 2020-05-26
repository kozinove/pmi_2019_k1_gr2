#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;


class friend_human
{

public:
	virtual void golos() = 0;
	virtual int sravn() = 0;
};




class turma
{
	friend_human * operation;
	friend_human * operation2;


public:
	turma()
	{
		operation = 0;
		operation = 0;
	}
	turma(friend_human * _f, int _n):operation(_f){}


	void init(friend_human * _f)
	{
		operation = _f;
	}
	void init2(friend_human * _f)
	{
		if (operation->sravn() != _f->sravn())
			throw "konflict";
		operation2 = _f;

	}

	void govor ()
	{
		operation->golos();
		operation2->golos();

	}
	
		
};







class tigr : public friend_human
{
	

public:
	virtual void golos()
	{
		cout << "(rrrrrr) ";
	}

	virtual int sravn()
	{
		return 1;
	}
	
};
class zayac : public friend_human
{
public:
	virtual void golos()
	{
		cout << "(ffff) ";
	}

	virtual int sravn()
	{
		return 0;
	}
};

class volk : public friend_human
{
public:
	virtual void golos()
	{
		cout << "(ayyyyy) ";
	}
	virtual int sravn()
	{
		return 1;
	}
};

class space : public friend_human
{
public:
	virtual void golos()
	{
		cout << "";
	};
	virtual int sravn()
	{
		return 0;
	}
};






class Zoo
{
private:
	turma t[10];
public:
	void prosm_zoo()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << endl;
			t[i].govor();
			
		}
	}
	void init(friend_human & a, int i)
	{
		t[i].init(&a);
	}
	void init2(friend_human & a, int i)
	{

		t[i].init2(&a);
	}
};


int main()
{
	tigr t;
	zayac za;
	volk v;
	space s;

	
	// Zoo Z(&t, 1, &z, 2, &v, 3, &s, 5, &t, 2);
	Zoo Z;

	for (int i = 0; i < 10; i++)
	{
		int n = rand() % 4;
		int n2 = rand() % 4;
		int polz = 0;

		switch (n)
		{
		case 0:
			Z.init(t, i);
			break;
		case 1:
			Z.init(za, i);
			break;
		case 2:
			Z.init(v, i);
			break;
		case 3:
			Z.init(s, i);
			break;
		default:
			break;
		}

		switch (n2)
		{
		case 0:
			try
			{
				Z.init2(t, i);
			}
			catch (const char* str)
			{
				cout << "peremestit'? 1-yes\2-no\n";
				cin >> polz;
				Z.init2(s, i);
				if (polz == 1)
				{
					
					i++;
					Z.init(t, i);
				}
				
			}
			break;
		case 1:
			try
			{
				Z.init2(za, i);
			}
				catch (const char* str)
			{
				cout << "peremestit'? 1-yes\2-no\n";
				cin >> polz;
				Z.init2(s, i);
				if (polz == 1)
				{
					
					i++;
					Z.init(t, i);
				}
				
			}
			break;
		case 2:
			try
			{
				Z.init2(v, i);
			}
			catch (const char* str)
			{
				cout << "peremestit'? 1-yes\2-no\n";
				cin >> polz;
				Z.init2(s, i);
				if (polz == 1)
				{
					i++;
					Z.init(t, i);
				}
			}
			break;
		case 3:
			try
			{
				Z.init2(s, i);
			}
			catch (const char* str)
			{
				if (i < 10)
				{
					cout << "peremestit'? 1-yes\2-no\n";
					cin >> polz;
					if (polz == 1)
						Z.init2(s, i);
					{
						i++;
						Z.init(t, i);
					}
				}
			}
			break;
		default:
			break;
		}

	}

	Z.prosm_zoo();

	return 0;
}