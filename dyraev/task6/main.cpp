#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;

class friend_human
{
public:
	virtual void golos() = 0;
	virtual int key() = 0;
};




class turma
{
	friend_human * operation;
	int n;
	static int numb;
	int per_numb;

public:
	turma()
	{
		operation = 0;
		n = 0;
		numb++;
		per_numb = numb;
	}
	turma(friend_human * _f, int _n):operation(_f),n(_n) 
	{
		numb++;
		per_numb = numb;
		if (operation->key() > 0)
			n = _n;
		else
			n = 0;
	}

	//turma(const turma & t)
	//{
	//	operation = t.operation;
	//	n = t.n;
	//}

	void init(friend_human * _f, int _n)
	{
		operation = _f;
		n = _n;
	}

	void govor ()
	{
		if (operation->key() > 0)
		{
			cout<<"kletka"<< per_numb<< " - ";

			for (int i = 0; i < n; i++)
			{
				operation->golos();
			}
			cout << endl;
		}
		else 
			cout << "kletka" << per_numb << " -- "<<endl;
	}
	
		
};

int turma::numb = 0;






class tigr : public friend_human
{
public:
	virtual void golos()
	{
		cout << "(rrrrrr) ";
	}
	
	virtual int key() { return 1; }
};
class zayac : public friend_human
{
public:
	virtual void golos()
	{
		cout << "(ffff) ";
	}
	virtual int key() { return 2; }
};

class volk : public friend_human
{
public:
	virtual void golos()
	{
		cout << "(ayyyyy) ";
	}
	virtual int key() { return 3; }
};

class space : public friend_human
{
public:
	virtual void golos(){};
	virtual int key() { return 0; }
};




//class Zoo
//{
//	turma t1;
//	turma t2;
//	turma t3;
//	turma t4;
//	turma t5;
//
//public:
//	Zoo(friend_human * f1,int i1, friend_human * f2, int i2, friend_human * f3, int i3, friend_human * f4, int i4, friend_human * f5, int i5 ):
//		t1(f1,i1), t2(f2, i2) , t3(f3, i3) , t4(f4, i4) , t5(f5, i5) {}
//
//	void prosm_zoo()
//	{
//		t1.govor();
//		t2.govor();
//		t3.govor();
//		t4.govor();
//		t5.govor();
//	}
//	
//
//};

class Zoo
{
public:
	turma t[10];
	void prosm_zoo()
	{
		for (int i = 0; i < 10; i++)
			t[i].govor();
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
		int ii = rand() % 5;

		switch (n)
		{
		case 0:
			Z.t[i].init(&t, ii);
			break;
		case 1:
			Z.t[i].init(&za, ii);
			break;
		case 2:
			Z.t[i].init(&v, ii);
			break;
		case 3:
			Z.t[i].init(&s, ii);
			break;
		default:
			break;
		}
	}

	Z.prosm_zoo();

	return 0;
}