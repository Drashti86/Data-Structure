//////#include<iostream>
//////using namespace std;
//////struct node{
//////	int cofficient;
//////	int power;
//////	struct node *next;
//////	
//////	node(int c,int p)
//////	{
//////		cofficient = c;
//////		power = p;
//////		next = NULL;
//////	}
//////};
//////class link{
//////		public:
//////	 node *head;
//////	
//////	link()
//////	{
//////		head = NULL;
//////	}
//////	void add_list(int c,int p)
//////	{
//////		 node *newnode = new node(c,p);
//////		
//////		if(head == NULL)
//////		{
//////			head = newnode;
//////		}
//////		else
//////		{
//////			struct node *cur = head;
//////			while(cur->next != NULL)
//////			{
//////				cur = cur->next;
//////			}
//////			cur->next = newnode;
//////			
//////		}
//////	}
//////	void display()
//////	{
//////		  node *cur = head;
//////			while(cur)
//////			{
//////				cout<<" ("<<cur->cofficient<<"^"<<cur->power<<" )"<<endl;
//////				cur = cur->next;
//////			}
//////	}
//////	
//////};
//////node * merge(node* head,node* head_second)
//////{
//////	struct node* temp = head;
//////	 while(temp->next)
//////	 {
//////	   temp = temp->next;
//////	 }
//////	 temp->next = head_second;
//////	 return head;
//////}
//////
//////display_merge_ll(node *head)
//////{
//////	struct node* cur = head;
//////	while(cur)
//////	{
//////			cout<<endl<<" ("<<cur->cofficient<<"^"<<cur->power<<" )"<<endl;
//////			cur=cur->next;	
//////	}
//////}
//////int main()
//////{
//////	link l1,l2;
//////	int ch,c,p;
//////	do{
//////		cout<<"\n\n___**__\n";
//////		cout<<"enter the first link list ."<<endl;
//////		cout<<"enter the second link list ."<<endl;
//////		cout<<"display the list one && list two."<<endl;
//////		cout<<"merge linklist."<<endl;
//////		cout<<"\n_______________________\n";
//////		cout<<"*******enter the ch **********"<<endl;
//////		cin>>ch;
//////			cout<<"\n___**__\n";
//////		switch(ch)
//////		{
//////			case 1:
//////				cout<<endl<<"cofficient : ";
//////				cin>>c;
//////				cout<<endl<<"power : ";
//////				cin>>p;
//////				l1.add_list(c,p);
//////				break;
//////			
//////			case 2:
//////				cout<<endl<<" cofficient: ";
//////				cin>>c;
//////				cout<<endl<<"power : ";
//////				cin>>p;
//////				l2.add_list(c,p);
//////				break;
//////				
//////			case 3:
//////				cout<<"list 1 : ";
//////				l1.display();
//////				cout<<endl<<"list 2 : ";
//////				l2.display();
//////				break;
//////			
//////			case 4:
//////			    node *newhead =	merge(l1.head,l2.head);
//////			    display_merge_ll(newhead);
//////			    break;
//////		}
//////	} while(ch != 90);
//////	return 0;
//////}
#include<iostream>
using namespace std;
struct node{
	int cofficient;
	int power;
	struct node *next;
	
	node(int c,int p)
	{
		cofficient = c;
		power = p;
		next = NULL;
	}
};
class link{
		public:
	 node *head;
	
	link()
	{
		head = NULL;
	}
	void add_list(int c,int p)
	{
		 node *newnode = new node(c,p);
		
		if(head == NULL)
		{
			head = newnode;
		}
		else
		{
			struct node *cur = head;
			while(cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = newnode;
			
		}
	}
	void display()
	{
		  node *cur = head;
			while(cur)
			{
				cout<<" ("<<cur->cofficient<<"^"<<cur->power<<" )"<<endl;
				cur = cur->next;
			}
	}
	
};
node * polynomial(node *head,node *head_second)
{
	struct node* temp1 = head;
	struct node* temp2 = head_second;
    struct node* newnode = NULL;
    struct node* h = NULL;
    int newCoefficient;
     int newPower;
	while(temp1->next != NULL && temp2->next != NULL)
	{
	 if (temp1->power == temp2->power) {
            newCoefficient = temp1->cofficient * temp2->cofficient;
            newPower = temp1->power *  temp2->power;
            if (newnode == NULL) {
                newnode = new node(newCoefficient, newPower);
                h = newnode;
            } else {
                h->next = new node(newCoefficient, newPower);
                h = h->next;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        } else if (temp1->power > temp2->power) {
            temp1 = temp1->next;
        } else {
            temp2 = temp2->next;
	} 
}
	return newnode;  		
}
void polynomial_d(node* head) {
    node* cur = head;
    cout << "Merged Polynomial: ";
    while (cur) {
        cout << " (" << cur->cofficient << "^" << cur->power << " )";
        cur = cur->next;
    }
    cout << endl;
}
int main()
{
	link l1,l2;
	int ch,c,p;
	do{
		cout<<"\n\n___**__\n";
		cout<<"enter the first link list ."<<endl;
		cout<<"enter the second link list ."<<endl;
		cout<<"display the list one && list two."<<endl;
		cout<<"merge linklist."<<endl;
		cout<<"\n_______________________\n";
		cout<<"*******enter the ch **********"<<endl;
		cin>>ch;
			cout<<"\n___**__\n";
		switch(ch)
		{
			case 1:
				cout<<endl<<"cofficient : ";
				cin>>c;
				cout<<endl<<"power : ";
				cin>>p;
				l1.add_list(c,p);
				break;
			
			case 2:
				cout<<endl<<" cofficient: ";
				cin>>c;
				cout<<endl<<"power : ";
				cin>>p;
				l2.add_list(c,p);
				break;
				
			case 3:
				cout<<"list 1 : ";
				l1.display();
				cout<<endl<<"list 2 : ";
				l2.display();
				break;
			
			case 4:
			    node *newhead =	polynomial(l1.head,l2.head);
			      polynomial_d(newhead);
			    break;
		    
		    
			
	}
	} while(ch != 90);
	return 0;
}

//#include<iostream>
//using namespace std;
//
//struct node {
//    int coefficient;
//    int power;
//    struct node *next;
//
//    node(int c, int p) {
//        coefficient = c;
//        power = p;
//        next = NULL;
//    }
//};
//
//class link {
//public:
//    node *head;
//
//    link() {
//        head = NULL;
//    }
//
//    void add_list(int c, int p) {
//        node *newnode = new node(c, p);
//
//        if (head == NULL) {
//            head = newnode;
//        } else {
//            node *cur = head;
//            while (cur->next != NULL) {
//                cur = cur->next;
//            }
//            cur->next = newnode;
//        }
//    }
//
//    void display() {
//        node *cur = head;
//        while (cur) {
//            cout << " (" << cur->coefficient << "^" << cur->power << " )";
//            cur = cur->next;
//        }
//        cout << endl;
//    }
//};
//
//node* polynomial(node* head1, node* head2) {
//    node* temp1 = head1;
//    node* temp2 = head2;
//    node* newHead = NULL;
//    node* tail = NULL;
//
//    while (temp1 != NULL && temp2 != NULL) {
//        if (temp1->power == temp2->power) {
//            int newCoefficient = temp1->coefficient * temp2->coefficient;
//            int newPower = temp1->power;
//            if (newHead == NULL) {
//                newHead = new node(newCoefficient, newPower);
//                tail = newHead;
//            } else {
//                tail->next = new node(newCoefficient, newPower);
//                tail = tail->next;
//            }
//            temp1 = temp1->next;
//            temp2 = temp2->next;
//        } else if (temp1->power > temp2->power) {
//            temp1 = temp1->next;
//        } else {
//            temp2 = temp2->next;
//        }
//    }
//    return newHead;
//}
//
////void polynomial_d(node* head) {
//    node* cur = head;
//    cout << "Merged Polynomial: ";
//    while (cur) {
//        cout << " (" << cur->coefficient << "^" << cur->power << " )";
//        cur = cur->next;
//    }
//    cout << endl;
//}
//
//int main() {
//    link l1, l2;
//    int ch, c, p;
//
//    do {
//        cout << "\n\n___**__\n";
//        cout << "1. Enter the first polynomial\n";
//        cout << "2. Enter the second polynomial\n";
//        cout << "3. Display polynomials\n";
//        cout << "4. Merge polynomials\n";
//        cout << "90. Exit\n";
//        cout << "\n_______________________\n";
//        cout << "Enter your choice: ";
//        cin >> ch;
//        cout << "\n___**__\n";
//
//        switch (ch) {
//            case 1:
//                cout << "Coefficient: ";
//                cin >> c;
//                cout << "Power: ";
//                cin >> p;
//                l1.add_list(c, p);
//                break;
//
//            case 2:
//                cout << "Coefficient: ";
//                cin >> c;
//                cout << "Power: ";
//                cin >> p;
//                l2.add_list(c, p);
//                break;
//
//            case 3:
//                cout << "Polynomial 1: ";
//                l1.display();
//                cout << "Polynomial 2: ";
//                l2.display();
//                break;
//
//            case 4:
//                node* newHead = polynomial(l1.head, l2.head);
//                polynomial_d(newHead);
//                break;
//        }
//    } while (ch != 90);
//
//    return 0;
//}
