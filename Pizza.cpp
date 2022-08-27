#include <iostream>
#include <list>
#include <string>

using namespace std;

void display(list<string> &v){

cout<<v.size()<<" ";

list<string> :: iterator it;

    for( it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
}

void filterList(list<string> &l1, list<string> &l2)
{

    list<string> :: iterator iter;
    for(iter=l2.begin();iter!=l2.end();iter++)
    {
        l1.remove((*iter));
    }
}

int main()
{
    int clients;
    cin>>clients;
    list <string> l1;
     list <string> l2;

    for(int k=0;k<clients;k++)

    {
        int like;
        cin>>like;
        for(int i=0;i<like;i++)
           {
            string s;
            cin>>s;
            l1.push_back(s);
             }
        int dislike;
        cin>>dislike;

        for(int m=0;m<dislike;m++)
        {
            string b;
            cin>>b;
            l2.push_back(b);
        }

    }

l1.sort();
l1.unique();
filterList(l1,l2);

display(l1);
return 0;
}