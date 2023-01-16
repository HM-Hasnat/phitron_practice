#include<bits/stdc++.h>
using namespace std;
class Arry
{
private:
    int *arr;
    int cap;
    int sz;
    Increase_size()
    {
        cap=cap*2;
        int *tmp=new int [cap];
        for(int i=0 ; i<sz ; i++)
            tmp[i] = arr[i];
        delete [ ] arr;
        arr=tmp;
    }
public:
    Arry()
    {
        arr = new int [1];
        cap=1;
        sz=0;
    }
    void Push_back(int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz]=x;
        sz++;
    }
    void Insert(int pos , int x )
    {
        if(cap==sz)
        {
            Increase_size();
        }
        for(int i =sz-1 ; i>=pos ; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        sz++;
    }
    void Print()
    {
        for(int i=0 ; i<sz ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    int getsize()
    {
        return sz;
    }
    int getElelemet(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<" is out of bound  \n";
            return-1;
        }
        return arr[idx];
    }
    void Pop_back()
    {
        if( sz==0)
        {
            cout<<"current size is 0 \n";
            return;
        }
        sz--;
    }
    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"position does not exist \n";
        }
        for(int i=pos+1 ; i<sz ; i++)
        {
            arr[i-1] = arr[i];
        }
        sz--;
    }


};

int main()
{
    Arry a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Print();
    a.Insert(1,5);
//    cout<<a.getsize()<<"\n";
//    for(int i=0 ; i<a.getsize() ; i++)
//    {
//        cout<<a.getElelemet(i)<<"\n";
//    }
    a.Pop_back();
    a.Print();
    a.Pop_back();
    a.Print();
    a.Erase(1);
    a.Print();


}
