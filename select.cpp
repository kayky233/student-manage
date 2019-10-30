#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;
#include "select.h"
#include "student.h"


void CSelect::Select()
{





    ifstream  afile;
    afile.open("E:\\ccode\\gerrit-repos\\demo\\stumg\\student.txt", ios::in | ios :: binary );

    int n = 0;
    int flag=0;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
    cout<<"ENTER YOUR STUDENT NUMBER: ";
    cin >>n;
    if(!afile)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {


//        while(afile.read((char*)&st,sizeof(st)))
//        {
            for (int i=0; i<tag;i++)
            {

                if(n==st[i].num)
                {


                    flag=1;
                    cout<<"查询中";
                    cout << st[i].num << st[i].name;
//                  ss.Display_report(n);
                }
                else {
                    cout <<"waiting .......";
                }
            }
        }
        if(flag==0)
        {
            cout << n;

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tstudent NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
//    afile.close();
//}

