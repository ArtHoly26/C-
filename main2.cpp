#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    setlocale (LC_ALL, "Rus");
    int chokolad,cofee,milk;
    
    cout<<"¬ведите стоимость плитки шоколада:"<<endl;
    cin>>chokolad;
    cout<<"¬ведите стоимость кофе:"<<endl;
    cin>>cofee;
    cout<<"¬ведите стоимость пакета молока:"<<endl;
    cin>>milk;

    cout<<"—умма покупки:"<<chokolad+cofee+milk<<endl;
    
    
    system("pause");
    return(0);

}
