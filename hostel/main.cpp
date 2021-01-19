#include<iostream>
using namespace std;
class a
{
	public:
		a(long roll,float c)
		{	//no=0;
			//rollno=new int[1];
			cgpa=c;
			rollno=roll;
			//no++;
			right=NULL;
			left=NULL;
			middle=NULL;
			roommates=NULL;
			//cout<<endl<<output()<<endl;
			}
	float cgpa;
	//int no;//no of students with same cgpa
	int rollno;//roll no of students with same cgpa;

	 a *right;
	 a *left;
	 a *middle;
	 a *roommates;
	void insert(a *n)
	{
			/*int *temp=new int[no];
			for(int i=0;i<no;i++)
				temp[i]=rollno[i];
			delete rollno;
			rollno=new int[no+1];//debug required
			for(int i=0;i<no;i++)
				rollno[i]=temp[i];
			rollno[no+1]=roll;
			no++;
			delete temp;
			}*/
		if(middle==NULL)
		middle=n;
		else
		{
		a *temp=middle;
		while(temp->middle!=NULL)
		temp=temp->middle;
		temp->middle=n;
	}
		}
	/*void add_roommates(a *n)
	{
			/*int *temp=new int[no];
			for(int i=0;i<no;i++)
				temp[i]=rollno[i];
			delete rollno;
			rollno=new int[no+1];//debug required
			for(int i=0;i<no;i++)
				rollno[i]=temp[i];
			rollno[no+1]=roll;
			no++;
			delete temp;
			}
		if(roommates==NULL)
		roommates=n;
		else
		{
		a *temp=roommates;
		while(temp->roommates!=NULL)
		temp=temp->roommates;
		temp->roommates=n;}
			}
	*/
	int output()
	{

		/*for(int i=0;i<no;i++)
		{

		}
		return(no);*/
		//cout<<rollno<<"   "<<cgpa<<endl;
		//a *temp=middle;
		//while(temp!=NULL){
		cout<<rollno<<"   "<<cgpa<<endl;
		//temp=temp->middle;
		//}
		//}}
		}

};
a *nodem;
class rooms
{
   public:
       rooms(int no,int t,a *p)
       {
           type=t;
           room_no=no;
           next=NULL;
           person=p;
       }
       a *person;
       int type;
       rooms *next;
       int room_no;
       int check(int no)
       {
           if(no==room_no)
            return 0;
           else if(next!=NULL)
             return(next->check(no));
           return 1;
       }
       void print()
       {
            cout<<room_no<<endl;
            if(next!=NULL)
                next->print();
       }
       void printr()
       {
            cout<<room_no<<endl;
            roommates();
            cout<<endl;
            if(next!=NULL)
                next->printr();
       }
       void roommates()
       {
           //cout<<"roomates func";
           a *temp=person;
           //cout<<person->rollno;
           while(temp!=NULL)
           {
               //cout<<"check";
               cout<<(temp->rollno)<<"   ";
               temp=temp->middle;
           }
           cout<<endl;
       }
       void insert1(a *p)
       {
            //cout<<"\n\ninsert "<<p->rollno<<"  "<<person->rollno<<"\n\n";

           person->insert(p);
           roommates();
       }
}*bed[3];

a* search_and_pop(a *node,int rollno);

 a* insert1(a* node,float key, long rollno)
{
    if (node == NULL)
	{
		a *node=new a(-1,key);
		node->insert(new  a(rollno,key));
		return (node);
	}
    if (key < node->cgpa)
        node->left  = insert1(node->left, key,rollno);
    else if (key > node->cgpa)
        node->right = insert1(node->right, key,rollno);
	else if(key == node->cgpa)
		node->insert(new  a(rollno,key));
    return node;
}

void inorder(a *node,int *n)
{

	if(node!=NULL)
	{
		inorder(node->right,n);
		//*n=node->output()+*n;
		a *temp=node->middle;
		while(temp!=NULL){
		/*if(temp->middle->rollno==rollno)
		{cout<<"checkloop";
		a *t=temp->middle;
		//t->output();
		temp->middle=temp->middle->middle;
		t->middle=NULL;
		return (t);
		}*/
		temp->output();
		temp=temp->middle;
		}
		inorder(node->left,n);
		*n++;
	}
}

void roomallo(a *p)
{
    cout<<"Roll no "<<p->rollno<<" enter the type of room you want:";
    int n;
    cin>>n;
    if(bed[n-1]!=NULL)
    bed[n-1]->print();
    cout<<"\nthese rooms are occupied\nenter the room no you want to have:";
    int m;
    cin>>m;
    rooms *r=new rooms(m,n,p);
    if(n!=1)
    cout<<"enter the roll no of your roommates:\n";
    rooms *temp=bed[n-1];
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=r;
    temp=temp->next;
    for(int i=0;i<n-1;i++)
    {
        int nn;
        cin>>nn;
        temp->insert1(search_and_pop(nodem,nn));
        //cout<<"complete insertion";
    }
    //cout<<"\n\n\n"<<bed[n-1]->person->rollno;




}
void pro(a *node)
{

	if(node!=NULL)
	{
		pro(node->right);
		//*n=node->output()+*n;
		a *temp=node;
		while(temp->middle!=NULL){
        a *t=temp->middle;
        temp->middle=t->middle;
        t->middle=NULL;
        roomallo(t);
		//temp=temp->middle;
		}
		pro(node->left);
		//*n++;
	}
}
a* search_and_pop(a *node,int rollno)
{
	a*t1=NULL;
	if(node!=NULL)
	{
		t1=search_and_pop(node->left,rollno);
		if(t1!=NULL)
		return t1;
		if(node->middle!=NULL){
                //if(node->middle->rollno==roll){}
                a *temp=node;

                while(temp!=NULL){
                        //temp->output();
                        //cout<<"checkloop"<<endl;
                    if(temp->middle!=NULL)
                    if(temp->middle->rollno==rollno)
                    {

                        a *t=temp->middle;
                        //t->output();
                        temp->middle=temp->middle->middle;
                        t->middle=NULL;
                        //cout<<"found and returned"<<t->rollno<<endl;

                        return (t);
                     }
                temp=temp->middle;
            }
		}
		//cout<<"check right\n\n";
		t1=search_and_pop(node->right,rollno);
		if(t1!=NULL)
		return t1;
	}
	//cout<<"checkmm"<<endl;
	return NULL;
}
/*void inorder(a *start,a *node,int *n)
{

	if(node!=NULL)
	{
		inorder(node->right,n);
		*n=node->output()+*n;
		inorder(node->left,n);
		*n++;
	}
}*/

int main(){

cout<<"enter the no of students"<<endl;
	int pps;
	cin>>pps;
	nodem=NULL;
for(int i=0;i<pps;i++)
{
	cout<<"enter rollno:";
	long rollno;
	cin>>rollno;

	cout<<"enter cgpa:";
	float cgpa;
	cin>>cgpa;
	if (cgpa<0)
	cout<<"Invalid input\n\n";

	else
	nodem=insert1(nodem,cgpa,rollno);
}
cout<<endl;
//cout<<"check1";
//a *p=search_and_pop(nodem,123);
//cout<<"check2";
//p->output();
//cout<<"check3";
//int n;
//inorder(nodem,&n);
//int aa=0;
for(int i=0;i<3;i++)
{
    bed[i]=new rooms(000,i+1,NULL);
}
pro(nodem);
bed[1]->printr();
//inorder(node,&aa);
return 0;

}


