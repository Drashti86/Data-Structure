#include<iostream>
#include<fstream>
using namespace std;
struct node{
	int data;
	struct node* next;
	node(int t_data)
	{
		data=t_data;
		next=NULL;
	}
};
class linklist{
	public:
		node * head;
		linklist()
		{
			head=NULL;
		}
		add_list(int t_data)
		{
			struct  node * newnode= new node(t_data);
			if(!head)
			{
				head=newnode;
			}
			else
			{
				struct node* current = head;
				while(current->next)
				{
					current=current->next;
				}
				current->next=newnode;
			}
			
		}
		show()
		{
				struct node* current = head;
				while(current)
				{
					cout<<"Data:"<<current->data<<endl;
					current=current->next;
				}
			
		}
		node * r_head()
		{
			return head;
		}
	
};
node* merge(node* head,node* head2)
		{
			struct node* current = head;
				while(current->next)
				{
					current=current->next;
				}
				current->next=head2;
				return head;
		}
display_ll(node *head)
{
	struct node* current = head;
	while(current)
	{
			cout<<"Data:"<<current->data<<endl;
			current=current->next;	
	}
}

main()
{
	linklist l1,l2,l3;
	l1.add_list(10);
	l1.add_list(20);
	l2.add_list(30);
	l2.add_list(40);

node* newhead=merge(l1.head,l2.head);
display_ll(newhead);
}
