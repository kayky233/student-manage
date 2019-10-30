#include <iostream>
#include <fstream>

using namespace std;
#include "student.h"



struct Stu st[100];
ofstream outfile;


int tag=0;
int ftag=0;



void CStudent::Browse(void)
{

    m_Bro.Browse();
}
void CStudent::Insert(void)
{

    m_Insert.Insert();
}
void CStudent::Select(void)
{

    m_Select.Select();

}

void CStudent::Del(void)
{


    m_Del.Del();
}
void CStudent::Update(void)
{


    m_Upd.Update();
}
void CStudent::Enter(void)
{


    m_Enter.Enter();
}
//int CStudent::Display_report(int a)
//{


//    m_Display.Display_report(int a);
//}
