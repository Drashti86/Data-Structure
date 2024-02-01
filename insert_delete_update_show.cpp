
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
		void add_node_end(int t_data)
		{
			node *Newnode = new node(t_data);
			if(head == NULL)
			{
				head = Newnode;

			else
			{
				node * current = head;
				while(current->next != NULL)
				{
					current = current->next;
				}
				current->next = Newnode;
				Newnode->next = NULL;
			}
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
		 void delete_node_last()
		  {
        if (head == NULL) {
            cout << "List is empty. Nothing to delete.\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            cout << "Deleted the last node.\n";
            return;
        }

        node* current = head;
        node* previous = NULL;

        while (current->next != NULL) {
            previous = current;
            current = current->next;
        }

        delete current;
        previous->next = NULL;
        
     }

		add_node_beetwen(int t_data,int pos)
		{
			node *Newnode = new node(t_data);
			if(head == NULL)
			{
				head = Newnode;
			}
			else
			{
				node * current = head;
				for(int i=0;i<pos-1 && current->next != NULL;++i)
				{
				   current = current->next;	
				}	
			      Newnode->next = current->next;
			      current->next = Newnode;
			}
		}
		
		void delete_node_first()
		{
				node * current = head;
			  head = head->next;
			  delete current;
			  
		}

 void delete_node_between(int pos) {       
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        node* current = head;
        node* previous = NULL;
        for (int i = 0; i < pos - 1 && current->next != NULL; ++i) {
           
            previous = current; 
			current = current->next;
        }
        
        if (current == NULL) {
            cout << "Position not found in the list.\n";
            return;
        }
         previous->next = current->next;
        delete current;
    }
    
		show()
		{
				node *current = head;
				while(current)
				{
					cout<<"Data : "<<current->id<<endl;
					current = current->next;
				}
		}
		void update_last()
		{
			int d;
			node *current = head;
				while(current->next != NULL)
				{
					current = current->next;
				}
				cout<<"enter the value wich you want to upadte : ";
				cin>>d;
				current->id = d;		
		}
		void update_anywere(int position)		
		{
			int d;
			cout<<"enter the value wich you want to upadte : ";
			cin>>d;
			node* current = head;
            node* previous = NULL;
           for (int i = 0; i < position && current->next != NULL;i++)
		   {
                previous = current; 
		        current = current->next;
           }
           current->id = d;
			
		}
		void update_first()
		{
			int d;
			cout<<"enter the value wich you want to upadte : ";
			cin>>d;
			head->id = d;
		
		}
};
      

int main()
{
	linklist l1;
   
	int ch,pos,value;
	do{
		cout<<"\n1.add_node_end\n";
		cout<<"\n2.add_node_first\n";
		cout<<"\n3.add_node_beetween\n";
		cout<<"\n4.delete_node_end\n";
		cout<<"\n5.delete_node_first\n";
		cout<<"\n6.delete_node_beetwen\n";
		cout<<"\n7.display_list\n";
		cout<<"\n8.update end -->\n";
		cout<<"\n9.update first -->\n";
		cout<<"\n10.update beetween-->\n";
		cout<<"\n10.exit.\n";
		cout<<endl<<"__________________"<<endl;
		cout<<"enter the choice : ";
		cin>>ch;
		cout<<endl<<"___________________"<<endl;
		switch(ch)
		{
			case 1:
				int value;
				cout<<"\nenter the value : ";
				cin>>value;
				l1.add_node_end(value);
				break;
		 
		 	case 2:
			
				cout<<"\nenter the value : ";
				cin>>value;
				 l1.add_node_first(value);
				break;
			
			case 3:
			
				cout<<"\nenter the value : ";
				cin>>value;
				cout<<"\nenter pos :";
				cin>>pos;
				 l1.add_node_beetwen(value,pos);
				break;
		
			case 4:
				 l1.delete_node_last();
				break;
			
			case 5:
				 l1.delete_node_first();
				break;
		
			case 6:
				cout<<"\nenter pos :";
				cin>>pos;
				   l1.delete_node_between(pos);
				break;
			
			case 7:
					l1.show();
					break;
			
			case 8:
		       l1.update_last();
				break;
			
			case 9:
				l1.update_first();
				break;
				
			case 10:
				cout<<endl<<"enter the pos : ";
				cin>>pos;
				l1.update_anywere(pos);
				break;
		}
	}while(ch != 0);
	return 0;
}
 
