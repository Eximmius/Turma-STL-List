#ifndef TURMA_H
#define TURMA_H

#include <string>
#include <vector>

using namespace std;

class turma
{
    public:
        turma(string codigo = string(),
              string creditos = string(),
              string nome = string(),
              string turma = string(),
              vector<int> diaSemana = vector<int>(),
              vector<string> horario=vector<string>()
              );
              //friend bool operator == (turma &t1, turma &t2);
              friend bool operator < (turma &t1, turma &t2);
              string getCodigo (void);

    protected:
    private:
        string m_codigo;
        string m_creditos;
        string m_nome;
        string m_turma;
        vector<int> m_diaSemana;
        vector<string> m_horario;


};

#endif // TURMA_H
