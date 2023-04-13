#include <iostream>
using namespace std;
main()
{
    int m_size,w_size;
    cout <<"Enter size of men array ";
    cin >> m_size;
    cout <<"Enter size of women array ";
    cin >> w_size;
    string men[m_size];
    string women[w_size];
    cout <<"Enter array of women ";
    for(int i=0;i<w_size;i++)
    {
        cin >> women[i];
    }
    cout <<"Enter array of men ";
    for(int j=0;j<m_size;j++)
    {
        cin >> men[j];
    }
    if(m_size==w_size)
    {
        cout<<"[";
        for(int i=0;i<w_size;i++)
        {
          cout<<women[i]<<","<<men[i]<<","; 
        }
        cout<<"]";

    }
    else
    {
        cout <<"Size dosen't match";
    }
     
}