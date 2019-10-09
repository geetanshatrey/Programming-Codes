#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    int ch;
    char c='y';
    cout<<"WELCOME TO THE VECTOR DEMO !!!"<<endl;
    while(c=='y'||c=='Y')
    {
        cout<<"Press 1 for pushing element into the vector : "<<endl;
        cout<<"Press 2 for popping element from the vector : "<<endl;
        cout<<"Press 3 to display the size of vector : "<<endl;
        cout<<"Press 4 to display the elements of the vector : "<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                    int input;
                    cout<<"Enter the element to push : ";
                    cin>>input;
                    a.push_back(input);
                    break;
            case 2:
                    if(!a.empty())
                        a.pop_back();
                    else
                        cout<<"Empty Vector !"<<endl;
                    break;
            case 3:
                    cout<<"Size of vector : "<<a.size()<<endl;
                    break;
            case 4:
                    vector<int> :: iterator it;
                    cout<<"Display : "<<endl;
                    for(it=a.begin();it!=a.end();it++)
                    {
                        cout<<*it<<endl;
                    }
                    break;
        }
        cout<<endl<<"Want to continue (Y/N) ? ";
        cin>>c;
    }
}
