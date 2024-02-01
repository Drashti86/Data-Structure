#include<iostream>
#include<fstream>
using namespace std;
struct node{
    int id;
	struct node* next;
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
	   void	add_list(int t_data)
		{
			node *Newnode = new node(t_data);
			if(head == NULL)
			{
				head = Newnode;
			}
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
		void show()
		{
			node *current = head;
			while(current != NULL)
			{
				cout<<"\nelemnt is : "<<current->id;
				current = current->next;
			}
		}
	
};
int main() {
    linklist l1;

    int ch, value;
    do {
        cout << "\n1.add_list\n";
        cout << "\n2.show_list";
        cout << "\n3. Exit";
        cout << endl << "__________________" << endl;
        cout << "enter the choice : ";
        cin >> ch;
        cout << endl << "___________________" << endl;
        switch (ch) {
        case 1:
            ifstream take("data.txt");
            while (take >> value) {
                l1.add_list(value);
            }
            take.close();
            break;

        case 2:
            l1.show();
            break;

        case 3:
            cout << "Exiting the program.";
            break;

        default:
            cout << "INVALID choice. Please enter a valid option.";
            break;
        }
    } while (ch != 3);
return 0;
}