#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    setlocale (LC_ALL, "Rus");
    int chokolad,cofee,milk;
    
    cout<<"������� ��������� ������ ��������:"<<endl;
    cin>>chokolad;
    cout<<"������� ��������� ����:"<<endl;
    cin>>cofee;
    cout<<"������� ��������� ������ ������:"<<endl;
    cin>>milk;

    cout<<"����� �������:"<<chokolad+cofee+milk<<endl;
    
    
    system("pause");
    return(0);

}
