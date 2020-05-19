#pragma once
class twoNumber
{
protected:
	int first, second, nod;
	int findNOD();
public:
	twoNumber(const int& f = 0, const int& s = 0);
	const int getF() const;
	void setF(const int& f);
	const int getS() const;
	void setS(const int& s);
	const int getNOD() const;
	void setBoth(const int& f, const int& s);
	void reduction();
};