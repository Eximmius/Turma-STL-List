#include <iostream>
#include <list>
#include <algorithm>
#include "turma.h"

using namespace std;

int main()
{
    list<turma> Eng;

    vector<int> DiasSemanaPRog2 = {1,2,3};
    vector<string> horario = {"9:30","10:30"};

    turma Prog2(string("05"),
                string("60"),
                string("Prog2"),
                string("A"),
                DiasSemanaPRog2,
                horario);
    Eng.push_back (Prog2);

    vector<int> DiasSemanaProg1 = {5,1,3};
    horario = {"7:30","15:30"};

    turma Prog1(string("01"),
                string("50"),
                string("Prog1"),
                string("A"),
                DiasSemanaProg1,
                horario);
    Eng.push_back (Prog1);

    Eng.sort();

    list<turma>::iterator it;
    cout << "Lista Ordenada por Codigo:";
    for (it=Eng.begin(); it!=Eng.end(); it++)
        cout << ' ' << it->getCodigo();
    cout << '\n';
    return 0;
}
