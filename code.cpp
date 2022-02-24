#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
class contributors
{
    public:
    string name;
    int n;
    string skill[100];
    int level[100];
};
int main()
{
    long int c;
    cin>>c;
    long int p;
    cin>>p;
    contributors cont[c];
    for(int i=0;i<c;i++)
    {   int temp=0,te=0;
        cin>>cont[i].name;
        cin>>cont[i].n;
        for(int j=0;j<cont[i].n;j++)
        {   
            cin>>cont[j].skill[temp];
            cin>>cont[j].level[te];
            temp ++;
            te++;
        }
    }
        for(int i=0;i<c;i++)
        {cout<<cont[i].name<<" "<<" "<<cont[i].n<<endl;
            for(int j=0;j<cont[i].n;j++)
            cout<< cont[i].skill<<" " <<cont[i].level[j++]<< endl;
        }

    
    return 0;
}
