#include "turma.h"

turma::turma(string codigo,
             string creditos,
             string nome,
             string turma,
             vector<int> diaSemana,
             vector<string> horario):
                 m_codigo(codigo),
                 m_creditos(creditos),
                 m_nome(nome),
                 m_turma(turma),
                 m_diaSemana (diaSemana),
                 m_horario (horario)
{
    //ctor
}
/*
bool operator == (turma &t1, turma &t2){
    return t1.m_codigo==t2.m_codigo;
}*/

bool operator < (turma &t1, turma &t2){
    return t1.m_codigo<t2.m_codigo;
}

string turma::getCodigo (void){
    return m_codigo;
}
