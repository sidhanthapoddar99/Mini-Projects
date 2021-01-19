
#include <iostream>
#include <string>
using namespace std;
int no;
class railway
{
    public:
        railway *next;
        //railway *prev;
        string stname;//name of the station
        int ffp;//fare from prev
        //int st_no;//station no
    void allocate (int *f)
    {
        if(*f!=0)
        {
        next=new railway;
        //ffp=f;
        --*f;
        cout<<"enter the name of the city: ";
        cin>>stname;
        cout<<"enter cost from prev city: ";
        cin>>ffp;
        next->allocate(f);
        //prev=NULL;
        //st_no=stt_no;
        }
        else{
            next=NULL;
            }
    }
    int check(string st )
    {
        //cout<<"ch";
        if(st==stname)
            {
                //cout<<"fpind";
                return(1);

            }
        if(next==NULL)
                return(-1);
            return(next->check(st));

    }
    int faref(string st)
    {
        if(st==stname)
            return(ffp);
        return(next->faref(st)+ffp);
    }

    /*int fareb(string st)
    {
        if(st==stname)
            return(0);
        return(prev->fareb(st)+ffp);
    }*/

};
void sm(railway rotue,string st,string ed)
{
    //cout<<"adas: ";
    //cout<<rotue.stname<<"\n\n";
    if(rotue.check(st)==1)
        {//cout<<"check";
        railway *r=&rotue;
        while(r->stname!=st)
        {
            r=r->next;
        }

        if(r->check(ed)==1){
            cout<<"fare: "<<(r->faref(ed)-(r->ffp))<<endl;
        cout<<"the routr is  ";
        while(r->stname!=ed)
        {
            cout<<r->stname<<" ---> ";
            r=r->next;
        }
        cout<<r->stname<<"\n\n";
        }

    }

}
void searchh(railway rotue[100])
{

    string st;
    cout<<"enter the start point"<<endl;
    cin>>st;
    cout<<"enter end point"<<endl;
    string ed;
    cin>>ed;
    for(int i=0;i<no;i++)
        sm(rotue[i],st,ed);
}

void searchmode()
{
    int flag=0;
    railway rotue[100];
    string name_route[100];
    no=0;
    while(flag!=1)
    {
        int n;
        //system(CLS)
        cout<<"\n\n1.new route\n2.search route and get fare\n3.Exit\n";
        cin>>n;
        switch(n)
        {
        case 1:{
            no++;
            cout<<"enter the no of stations: ";
            int *m=new int;
            cin>>(*m);
            cout<<"enter the route name: ";
            cin>>name_route[no];
            rotue[no-1].allocate(m);}
        break;
        case 2:searchh(rotue);
        break;
        case 3:flag=1;
        break;
        default:cout<<"worong input\n";
        break;
        }
    }
    //cout << "Hello world!" << endl;
   // return 0;
}
