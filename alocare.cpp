#include "stdafx.h"
#include <iostream>

using namespace std;

struct nod
{
	int inf;
	nod* leg;
};

int main()
{
	nod *p, *q, *r;
	p = new nod;
	cin >> p->inf;
	p->leg = NULL;
	q = new nod;
	q->leg = NULL;
	p->leg = q;
	r = new nod;
	cin >> r->inf;
	r->leg = NULL;
	q->leg = r;
	q->inf = r->inf*p->inf;
	if (p->inf >= q->inf && p->inf >= r->inf)
	{
		delete p;
		cout << r->inf << "\n" << q->inf;
	}
	else if (q->inf >= p->inf && q->inf >= r->inf)
	{
		p->leg = q->leg;
		delete q;
		cout << p->inf << "\n" << r->inf;
	}
	else if (r->inf >= p->inf && r->inf >= q->inf)
	{
		delete r;
		cout << p->inf << "\n" << q->inf;
	}
}
