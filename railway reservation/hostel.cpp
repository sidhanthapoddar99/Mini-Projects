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
			cout<<endl<<output()<<endl;
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
		a *temp=middle;
		while(temp!=NULL){
		cout<<temp->rollno<<"   "<<temp->cgpa<<endl;
		temp=temp->middle;
		}
		}

};

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
		*n=node->output()+*n;
		inorder(node->left,n);
		*n++;
	}
}
a* search_and_pop(a *node,int rollno)
{
	a*t1=NULL;
	if(node!=NULL)
	{
		t1=search_and_pop(node->left,n);
		if(t1!=NULL)
		return t1
		if(node->middle!=NULL){
		//if(node->middle->rollno==roll){}
		a *temp=node;
		while(temp!=NULL){
		if(node->middle->rollno==roll)
		{
		a *t=temp->middle;
		temp=temp->middle->middle;
		t->middle=NULL;
		return (t);
		}
		}
		}
		inorder(node->right,n);
		*n++;
	}
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

	a *node=NULL;
for(int i=0;i<3;i++)
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
	node=insert1(node,cgpa,rollno);
}
cout<<endl;
a *p=search_and_pop(node,123);
p->output();
int aa=0;
//inorder(node,&aa);
return 0;
}


