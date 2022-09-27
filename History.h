#include "Mesa.h"
#ifndef HISTORY_H
#define HISTORY_H

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;
private:
	Mesa* m_mesa;
};

#endif // !HISTORY_H

