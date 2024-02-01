#include<iostream>
using namespace std;
struct node{
   int id;
   struct node *next;
   node(int t_data)
   {
   	   id = t_data;
   	   next = NULL;
   }	
};
class linklist{
	node *head;
	
	public:
		linklist()
		{
			head = NULL;
		}
			void add_node_first(int t_data)
		{
			node *Newnode = new node(t_data);
			if(head == NULL)
			{
				head = Newnode;
			}
			else
			{
			   Newnode->next = head;
			   head = Newnode;	
			}
		}
	void show()
{
    node *current = head;
    while (current)
    {
        cout << "Data : " << current->id << endl;
        current = current->next;
    }
}
	
void reverse()
{
    node *current = head;
    node *previous = NULL;
    node *nextNode;
      head = previous; 

    while (current != NULL )
    {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    head = previous;

  // Update the head to the new first node
}
void frequancy()
{
	int f =0;
	node *current = head;
    while (current)
    {
          current = current->next;
          f++;
    }
    cout<<endl<<"frequncy of the element  : "<<f;
	
}
	};
	int main()
{
	linklist l1;
   
	int ch,value;
	do{
	
		cout<<"\n1.add_node_first\n";
		cout<<"\n2.display_list\n";
		cout<<"\n3.reverse list\n";
		cout<<"\n4.frequancy";
		cout<<endl<<"__________________"<<endl;
		cout<<"enter the choice : ";
		cin>>ch;
		cout<<endl<<"___________________"<<endl;
		switch(ch)
		{
			case 1:
				cout<<"\nenter the value : ";
				cin>>value;
				 l1.add_node_first(value);
				break;
			
			case 2:
					l1.show();
				break;
			case 3:
				 l1.reverse();
				 break;
			case 4:
				l1.frequancy();
				break;
			
		}
	}while(ch != 10);
	return 0;
}
