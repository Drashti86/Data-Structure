//singly linklist:

// 1. question...

//1.delete(last,end,middle)*******************************
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//    struct node* newnode = new node(t_data);
//      if(head == NULL)
//      {
//       head = newnode;
//      }
//      else
//      {
//        newnode->next = head;
//        head = newnode;
//      }
//}
//
//delete_first()
//{
//if (head == NULL) {
//            cout << "List is empty. Nothing to delete.\n";
//            return 0;
//        }
//     struct node* temp = head;
//     head = head->next;
//     delete temp;  
//}
//
//void last_delete()
//{
//     if (head == NULL) {
//            cout << "List is empty. Nothing to delete.\n";
//            return;
//        }
//        if (head->next == NULL) {
//            delete head;
//            head = NULL;
//            return;
//        }
//struct node *temp = head;
//while(temp->next->next != NULL)
//{
//temp = temp->next;
//}
//
//delete temp->next->next;
//temp->next = NULL;
//}
//
//void middle_delete(int pos)
//{
//  if (head == NULL) {
//            cout << "List is empty. Nothing to delete.\n";
//            return;
//        }
//        if (pos <= 0) {
//            cout << "Invalid position.\n";
//            return;
//        }
//        if (pos == 1) {
//            delete_first();
//            return;
//        }
//    
// struct node* temp = head;
// struct node* nnode;
// int count = 1;
// while(temp->next != NULL && count < pos-1)
// {
// temp = temp->next;
// count++;
// }
// nnode = temp->next;
// temp->next = temp->next->next;
// delete nnode;
//}
//void display()
//{
// if (head == NULL) {
//            cout << "List is empty.\n";
//            return;
//        }
//    struct node *temp = head;
//    while(temp != NULL)
//     {
//       cout<<endl<<temp->data<<endl;
//       temp = temp->next;
//     }
//}
//
//};
//int main()
//{
//linklist ll;
//int ch,t_data,pos;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.delete first."<<endl;
//cout<<"3.delete last."<<endl;
//cout<<"4.delete middle."<<endl;
//cout<<"4.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//          case 1:
//                cout<<"enter data : ";
//                cin>>t_data;
//                ll.add_first(t_data);
//          break;
//        
//  case 2:
//                ll.delete_first();
//                break;
//
//          case 3:
//                ll.last_delete();
//                break;
//
//          case 4:
//                cout<<"enter the position to delete :";
//                cin>>pos;
//                ll.middle_delete(pos);
//
//          case 5:
//                ll.display();
//                break;
//            }
//         }while(ch != 0);
//return 0;
//}



//2.add (last ,middle,end)***********************
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//
//void add_last(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//   else
//   {
//    struct node *temp = head;
//    while(temp->next != NULL)
//       {
//     temp = temp->next;
//  }
//temp->next = newnode;
//newnode->next = NULL;
//}
//}
//
//
//void add_middle(int t_data,int pos)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
//struct node *temp = head;
//int count =1;
//while(temp != NULL && count < pos-1)
//{
//temp = temp->next;
//count++;
//}
//newnode->next = temp->next;
//temp->next = newnode;
//
//
//}
//}
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data,pos;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.add last."<<endl;
//cout<<"3.add middle."<<endl;
//cout<<"4.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//case 1:
//cout<<"enter data : ";
//cin>>t_data;
//ll.add_first(t_data);
//            break;
//       case 2:
//            cout<<"enter data : ";
//cin>>t_data;
//ll.add_last(t_data);
//            break;
//       case 3:
//           cout<<"enter data : ";
//cin>>t_data;
//   cout<<endl<<"enter pos : ";
//cin>>pos;
//ll.add_middle(t_data,pos);
//            break;
//       case 4:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//3.rverse the list*******************
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//  void revrse()
//  {
//   {
//    struct node *prev = NULL;
//    struct node *current = head;
//    struct node *next = NULL;
//
//    while (current != NULL) {
//        next = current->next;
//        current->next = prev;
//
//    
//        prev = current;
//        current = next;
//    }
//
//  
//    head = prev;
//}
//
//  }
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.revrse the list"<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//      case 1:
//          cout<<"enter data : ";
//          cin>>t_data;
//          ll.add_first(t_data);
//          break;
//      
//       case 2:
//         ll.revrse();
//       case 3:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//4.serch*************
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//
//void search(int key) {
//        struct node *current = head;
//        int count = 1;
//        while (current != NULL) {
//        
//            if (current->data == key) {
//                cout<<endl<<"element is found  "<<endl;
//                cout<<endl<<"number of the pos is : "<<count<<endl;
//
//            }
//            current = current->next;
//            count++;
//        }
//  
//            
//      }
//    
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data,key;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.serch in list."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//      case 1:
//          cout<<"enter data : ";
//          cin>>t_data;
//          ll.add_first(t_data);
//          break;
//      
//      case 2:
//          cout << "Enter the element to search: ";
//            cin >> key;
//            ll.search(key);
//            break;
//       case 3:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//5.sort ************************  

//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//
//void sorting()
//{
// struct node*temp = head;
// struct node *n;
// int store;
// while(temp != NULL)
// {
// n = temp->next;
// while(n != NULL)
// {
// if(n->data < temp->data)
// {
// store = n->data;
// n->data = temp->data;
// temp->data = store;
// }
// n = n->next;
//   }
// temp = temp->next;
// }
//
//
//}
//    
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.sorting in list."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//      case 1:
//          cout<<"enter data : ";
//          cin>>t_data;
//          ll.add_first(t_data);
//          break;
//      
//      case 2:
//          ll.sorting();
//              break;
//       case 3:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//6.insert data in sorted order***********
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void sorting(int t_data)
//{
//    struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//   cout<<endl<<"......"<<endl;
// struct node*temp1 = head;
// struct node *n;
// int store;
// while(temp1 != NULL)
// {
// n = temp1->next;
// while(n != NULL)
// {
// if(n->data < temp1->data)
// {
// store = n->data;
// n->data = temp1->data;
// temp1->data = store;
// }
// n = n->next;
//   }
// temp1 = temp1->next;
// }
//
//
//}
//    
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data;
//do{
//cout<<"\n______________________\n";
//cout<<"2.sorting in list."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//
//      
//      case 1:
//            cout<<"enter data : ";
//              cin>>t_data;
//          ll.sorting(t_data);
//              break;
//              
//       case 2:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//7. update a given element********
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//    struct node* newnode = new node(t_data);
//      if(head == NULL)
//      {
//       head = newnode;
//      }
//      else
//      {
//        newnode->next = head;
//        head = newnode;
//      }
//}
//void update_list(int key)
//{
// struct node *temp =head;
// int count=1,v;
// while(temp->next != NULL)
// {
// if(temp->data == key)
// {
// cout<<endl<<"enter the updated value : ";
// cin>>v;
// temp->data = v;
// break;
// }
// temp = temp->next;
// }
//}
//void display()
//{
// if (head == NULL) {
//            cout << "List is empty.\n";
//            return;
//        }
//    struct node *temp = head;
//    while(temp != NULL)
//     {
//       cout<<endl<<temp->data<<endl;
//       temp = temp->next;
//     }
//}
//
//};
//int main()
//{
//linklist ll;
//int ch,t_data,key;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add list. "<<endl;
//cout<<"2.update a given element."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//          case 1:
//                cout<<"enter data : ";
//                cin>>t_data;
//                ll.add_first(t_data);
//          break;
//    
//          case 2:
//           cout<<"enter key : ";
//                cin>>key;
//                 ll.update_list(key);
// break;  
//          case 3:
//                ll.display();
//                break;
//            }
//         }while(ch != 0);
//return 0;
//}

// 8. from a given list delete data in sorted order
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
// public:
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void sorting(int t_data)
//{
//    struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//  
// struct node*temp1 = head;
// struct node *n;
// int store;
// while(temp1 != NULL)
// {
// n = temp1->next;
// while(n != NULL)
// {
// if(n->data < temp1->data)
// {
// store = n->data;
// n->data = temp1->data;
// temp1->data = store;
// }
// n = n->next;
//   }
// temp1 = temp1->next;
// }
//
//
//}
//void delete_data_sortd_order(int pos)
//{
//
//struct node *temp = head;
//struct node *d;
//int count=1;
// while(temp != NULL && count < pos-1)
// {
//        temp = temp->next;
//        count++;
// }
// d = temp->next;
// temp->next = d->next;
// delete d;
//}
//    
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data,pos;
//do{
//cout<<"\n______________________\n";
//cout<<"1.insert data in sorted order."<<endl;
//cout<<"2.delete data in sorted list."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//
//      
//      case 1:
//            cout<<"enter data : ";
//              cin>>t_data;
//          ll.sorting(t_data);
//              break;
//              
//      case 2:
//         cout<<"enter pos : ";
//            cin>>pos;
//         ll.delete_data_sortd_order(pos);
//       break;
//      
//       case 3:
//        ll.display();
//        break;
//    case 4:
//            cout << "Exiting..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//            break;
//        }
//    } while (ch != 4);
//return 0;
//}


//****************************************************
//****************************************************

//2 questions...


//doubly linklist
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//struct node *prev;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//prev = NULL;
//}
//};
//struct ll{
//struct node *head;
//struct node *head2;
//public:
//void insert_last(int t_data)
//{
//struct node* newnode = new node(t_data);
//newnode->data = t_data;
//if(head == NULL)
//{
//head = newnode;
//return;
//}
//else
//{
//   struct node *temp = head;
//   while(temp->next != NULL)
//   {
//    temp = temp->next;
//}
//temp->next = newnode;
//newnode->prev = temp;
//newnode->next = NULL;
//}
//}
//void insert_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//newnode->data = t_data;
//if(head == NULL)
//{
//head = newnode;
//return;
//}
//else
//{
// head->prev = newnode;
// newnode->next = head;
// newnode->prev = NULL;
// head = newnode;
// 
//}
//}
//void add_middle(int t_data,int pos)
//{
//struct node* newnode = new node(t_data);
//newnode->data = t_data;
//if(head == NULL)
//{
//head = newnode;
//return;
//}
//else
//{
//int count = 1;
//struct node *temp = head;
//while(temp->next != NULL && count < pos-1)
//{
//   temp = temp->next;
//   count++;
//}
//newnode->next = temp->next;
//newnode->prev = temp;
//temp->next = newnode;
//
//}
//}
//void delete_first()
//{
//if(head == NULL)
//{
//   cout<<"list is empty:";
// 
//}
//struct node*temp = head;
//head = head->next;
//delete temp;
//if(head != NULL)
//{
//head->prev = NULL;
//  }
// 
//}
//void delete_last()
//{
//if(head == NULL)
//{
//   cout<<"list is empty:";
//}
//   else
//{ struct node *temp = head;
//   while(temp->next->next != NULL)
//   {
//    temp = temp->next;
//}
//delete temp->next;
//temp->next = NULL;
//}
//}
//void delete_middle(int pos)
//{
//int count =1;
//struct node *temp = head;
//       
//   while(temp->next != NULL && count != pos)
//   {
//    temp = temp->next;
//    count++;
//}
//temp->prev->next = temp->next;
//temp->next->prev = temp->prev;
//delete temp;
//
//
//}
//void reverse()
//{
//struct node* temp = head;
//struct node* next = NULL;
//struct node* prev = NULL;
//while(temp != NULL)
//{
//next = temp->next;
//temp->next = prev;
//prev = temp;
//temp = next;
//}
//head = prev;
//next = NULL;
//prev = NULL;
//temp = head;
//
//while(temp != NULL)
//{
//temp->prev = prev;
//   temp->prev = next;
//   next = temp;
//   temp = prev;
//}
//
//cout<<"reverse the logic : ";
//cout<<endl;
//struct node *t = head;
//while(t != NULL)
//{
//cout<<"\n "<<t->data<<" ";
//t = t->next;
//}
//
//}
//
//void sorting()
//{
//
//struct node*temp = head;
//struct node *n;
//int store;
//while(temp != NULL)
//{
//n = temp->next;
//while(n != NULL)
//{
//if(n->data < temp->data)
//{
//store = n->data;
//n->data = temp->data;
//temp->data = store;
//}
//n = n->next;
//  }
//temp = temp->next;
//}
//
//
//}
//void serach(int s_element)
//{
//struct node* temp =head;
//int count = 1;
//while(temp != NULL)
//{
//                  if(temp->data == s_element)
//                  {
//                  cout<<endl<<" pos: "<<count<<endl;
// }
// 
// temp =temp->next;
// count ++;
//}
//
//}
//void update_any_element(int t_data,int pos)
//{
//struct node* temp = head;
//            int count = 1;
//           while (temp != NULL &&  count < pos) {
//                    temp = temp->next;
//                    count++;
//       }
//
//      if (temp == NULL) {
//        printf("Position out of bounds\n");
//        return;
//    }
//
//         temp->data = t_data;
//}
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
//cout<<endl<<"data : "<<temp->data;
//cout<<endl;
//temp = temp->next;
//}
//}
//
//void insert_sorted(int t_data)
//{
//struct node* newnode = new node(t_data);
//newnode->data = t_data;
//if(head == NULL)
//{
//head = newnode;
//return;
//}
//else
//{
//   struct node *temp = head;
//   while(temp->next != NULL)
//   {
//    temp = temp->next;
//}
//temp->next = newnode;
//newnode->prev = temp;
//newnode->next = NULL;
//}
//struct node*temp = head;
//struct node *n;
//int store;
//while(temp != NULL)
//{
//n = temp->next;
//while(n != NULL)
//{
//if(n->data < temp->data)
//{
//store = n->data;
//n->data = temp->data;
//temp->data = store;
//}
//n = n->next;
//  }
//temp = temp->next;
//}
//}
//void delete_smallest() {
//    if (!head) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//   
//    node* temp = head;
//    node* next = head->next;
//    while (temp != NULL)  {
//        if (temp->data < next->data) {
//            next = temp;
//        }
//        temp = temp->next;
//    }
//
//    // Delete the smallest element
//    if (next == head) {
//        head = head->next;
//        if (head)
//            head->prev = NULL;
//        delete next;
//    } else {
//        next->prev->next = next->next;
//        if (next->next)
//            next->next->prev = next->prev;
//        delete next;
//    }
//
//    // Print the remaining list
//    cout << "List after deleting smallest element:" << endl;
//    node* t = head;
//    while (t!=NULL) {
//        cout << "data: " << t->data << endl;
//        t = t->next;
//    }
//}
//
//
//
//
//
//
//};
//int main()
//{
//ll l1;
//int ch,t_data,pos,s_element,key;
//do{
//cout<<endl<<"1.add last."<<endl;
//cout<<"2.add first."<<endl;
//cout<<"3.add middle."<<endl;
//cout<<"4.delete first."<<endl;
//cout<<"5.delete last."<<endl;
//cout<<"6.delete midle."<<endl;
//cout<<"7.search in list"<<endl;
//cout<<"8.reverse list."<<endl;
//cout<<"9.simple sorting."<<endl;
//cout<<"10.update a given list."<<endl;
//cout<<"11.display."<<endl;
//cout<<"12.insert data in sorted order."<<endl;
//cout<<"13.delete data in sorted order."<<endl;
//cout<<"\n_________________\n";
//cout<<"enter the ch :";
//cin>>ch;
//switch(ch)
//{
//case 1:
//cout<<"enter the value : ";
//cin>>t_data;
//l1.insert_last(t_data);
//break;
//
//case 2:
//cout<<"enter the value : ";
//cin>>t_data;
//l1.insert_first(t_data);
//break;
//
//case 3:
//cout<<"enter the value : ";
//cin>>t_data;
//cout<<"enter the pos : ";
//cin>>pos;
//l1.add_middle(t_data,pos);
//break;
//
//case 4:
//l1.delete_first();
//break;
//
//case 5:
//l1.delete_last();
//break;
//
//case 6:
//cout<<"enter the pos : ";
//cin>>pos;
//l1.delete_middle(pos);
//break;
//
//case 7:
//cout<<"enter the s_element : ";
//cin>>s_element;
//l1.serach(s_element);
//break;
//
//case 8:
//l1.reverse();
//break;
//
//
//case 9:
//l1.sorting();
//break;
//
//case 10:
//   cout<<"enter the value : ";
//cin>>t_data;
//cout<<"enter the pos : ";
//cin>>pos;
//l1.update_any_element(t_data,pos);
//break;
//
//   break;
//case 11:
//l1.display();
//break;
//
//case 12:
//cout<<"enter the value : ";
//cin>>t_data;
//  l1.insert_sorted(t_data);
//break;
//
//case 13:
//
//l1.delete_smallest();
//break;
//
//}
//}while(ch != 100);
//return 0;
//}

//*********************************************
//*********** 4 . add polynomail ************
//#include<iostream>
//using namespace std;
//
//struct node{
//    int co;
//    int ex;
//    struct node* next;
//    node(int cc,int ee)
//    {
//        co = cc;
//        ex = ee;
//        next = NULL;
//    }
//};
//
//class ll{
//    public:
//        node *head;
//        node *h3;
//        ll()
//        {
//            head = NULL;
//            h3 = NULL; // Initialize h3 to NULL
//        }
//        void insert(int cc,int ee)
//        {
//            struct node* newnode = new node(cc,ee);
//            if(head == NULL)
//            {
//                head = newnode;
//            }
//            else
//            {
//                struct node* temp = head;
//                while(temp->next != NULL)
//                {
//                    temp = temp->next;
//                }
//                temp->next = newnode;
//            }
//        }
//        void display()
//        {
//            struct node* temp = head;
//            while(temp != NULL)
//            {
//                cout<<" "<<temp->co<<"x^"<<temp->ex<<" ";
//                temp = temp->next;
//            }
//            cout << endl; // Add a new line after printing the polynomial
//        }
//       node* add_p(node *head1,node *head2)
//        {
//            struct node* t1 = head1;
//            struct node* t2 = head2;
//            struct node* result_head = NULL; // Initialize result_head to NULL
//            struct node* tail = NULL; // Initialize tail to NULL
//
//            while(t1 != NULL && t2 != NULL)
//            {
//                struct node* newNode = new node(0, 0); // Create a new node for the result polynomial
//                if(t1->ex == t2->ex)
//                {
//                    newNode->co = t1->co + t2->co;
//                    newNode->ex = t1->ex;
//                    t1 = t1->next;
//                    t2 = t2->next;
//                }
//                else if(t1->ex > t2->ex)
//                {
//                    newNode->co = t1->co;
//                    newNode->ex = t1->ex;
//                    t1 = t1->next;
//                }
//                else if(t1->ex < t2->ex)
//                {
//                    newNode->co = t2->co;
//                    newNode->ex = t2->ex;
//                    t2 = t2->next;
//                }
//
//                if(result_head == NULL)
//                {
//                    result_head = newNode;
//                    tail = newNode;
//                }
//                else
//                {
//                    tail->next = newNode;
//                    tail = tail->next;
//                }
//            }
//            while(t1 != NULL)
//            {
//                struct node* newNode = new node(t1->co, t1->ex);
//                if(result_head == NULL)
//                {
//                    result_head = newNode;
//                    tail = newNode;
//                }
//                else
//                {
//                    tail->next = newNode;
//                    tail = tail->next;
//                }
//                t1 = t1->next;
//            }
//            while(t2 != NULL)
//            {
//                struct node* newNode = new node(t2->co, t2->ex);
//                if(result_head == NULL)
//                {
//                    result_head = newNode;
//                    tail = newNode;
//                }
//                else
//                {
//                    tail->next = newNode;
//                    tail = tail->next;
//                }
//                t2 = t2->next;
//            }
//            return result_head;
//        }
//        void add_poly(node *h)
//        {
//            struct node * temp = h;
//            while(temp != NULL)
//            {
//                cout<<" "<<temp->co<<"x^"<<temp->ex<<" ";
//                temp = temp->next;
//            }
//            cout << endl; // Add a new line after printing the polynomial
//        }
//};
//
//int main()
//{
//    ll l1,l2,l3;
//    int ch,cc,ee;
//    do{
//        cout<<endl<<"1. insert first poly."<<endl;
//        cout<<"2. display first poly."<<endl;
//        cout<<"3. insert second poly."<<endl;
//        cout<<"4. display second poly."<<endl;
//        cout<<"5. add two polynomial."<<endl;
//        cout<<"enter choice :";
//        cin>>ch;
//        switch(ch)
//        {
//            case 1:
//                cout<<"enter the first poly : ";
//                cout<<endl<<"enter the coefficient of first poly: ";
//                cin>>cc;
//                cout<<endl<<"enter the component  of first poly: ";
//                cin>>ee;
//                l1.insert(cc,ee);
//                break;
//
//            case 2:
//                cout<<endl<<"display first poly nomial : "<<endl;
//                l1.display();
//                break;
//            case 3:
//                cout<<"enter the second poly : ";
//                cout<<endl<<"enter the coefficient  of second poly: ";
//                cin>>cc;
//                cout<<endl<<"enter the component  of second poly: ";
//                cin>>ee;
//                l2.insert(cc,ee);
//                break;
//
//            case 4:
//
//                cout<<endl<<"display second polynomial : "<<endl;
//                l2.display();
//                break; 
//
//            case 5:
//                node* h = l3.add_p(l1.head, l2.head);
//                l3.add_poly(h);
//                break;
//        }
//    }while(ch != 100);
//    return 0;
//}
//************************************
//5.********* 1.multiply the entire polynomial with constant
//#include<iostream>
//using namespace std;
//
//struct node{
//    int co;
//    int ex;
//    struct node* next;
//    node(int cc, int ee)
//    {
//        co = cc;
//        ex = ee;
//        next = NULL;
//    }
//};
//
//class ll{
//public:
//    node *head;
//    ll()
//    {
//        head = NULL;
//    }
//    void insert(int cc, int ee)
//    {
//        struct node* newnode = new node(cc, ee);
//        if(head == NULL)
//        {
//            head = newnode;
//        }
//        else
//        {
//            struct node* temp = head;
//            while(temp->next != NULL)
//            {
//                temp = temp->next;
//            }
//            temp->next = newnode;
//        }
//    }
//    void display()
//    {
//        struct node* temp = head;
//        while(temp != NULL)
//        {
//            cout << " " << temp->co << "x^" << temp->ex << " ";
//            temp = temp->next;
//        }
//        cout << endl; // Add a new line after printing the polynomial
//    }
//    void constant_mul(int constant)
//    {
//        struct node* temp = head;
//        while(temp != NULL)
//        {
//            temp->co *= constant; // Multiply the coefficient by the constant
//            temp = temp->next;
//        }
//    }
//};
//
//int main()
//{
//    ll l1;
//    int ch, cc, ee;
//    do {
//        cout << endl << "1. Insert polynomial." << endl;
//        cout << "2. Display polynomial." << endl;
//        cout << "3. Multiply polynomial by constant." << endl;
//        cout << "Enter choice: ";
//        cin >> ch;
//        switch(ch)
//        {
//            case 1:
//                cout << "Enter the polynomial: " << endl;
//                cout << "Enter the coefficient: ";
//                cin >> cc;
//                cout << "Enter the exponent: ";
//                cin >> ee;
//                l1.insert(cc, ee);
//                break;
//
//            case 2:
//                cout << endl << "Displaying polynomial: " << endl;
//                l1.display();
//                break;
//
//            case 3:
//                int constant;
//                cout << "Enter the constant to multiply with: ";
//                cin >> constant;
//                l1.constant_mul(constant);
//                cout << "Polynomial after multiplication: " << endl;
//                l1.display();
//                break;
//        }
//    } while(ch != 100);
//    return 0;
//}
//************************************
//5.********* 2.add two polynomial
//************************************

//* sparce metrix array 
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[3][3];
//	int perix[9][3];
//	int count = 0;
//
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//		   cout<<" "<<i<<" "<<j<<" : ";
//		   cin>>arr[i][j];
//			if(arr[i][j] != 0)
//			{
//				perix[count][0] = i;
//				perix[count][1] = j;
//				perix[count][2] = arr[i][j];
//				count++;
//			}
//				
//		}
//	}
//cout<<endl;
//	for(int i=0;i<count;i++)
//	{
//		cout<<perix[i][0]<<"  "<<perix[i][1]<<"  "<<perix[i][2]<<endl;
//	}
//
//	return 0;
//}

//************************in linklist (sparcemetrix)*************
#include <iostream>
using namespace std;

// Define a Node structure for the linked list
struct Node {
    int row;
    int col;
    int value;
    Node* next;
    
    // Constructor
    Node(int r, int c, int v) 
	{    	
	 row = r;
	 col = c;
	 value = v;
	 next = NULL;
    }
};

class sm {
private:
    Node* head;

public:
     
  sm()
  {
  	head = NULL;
  	return;
  }
    
    void insert(int row, int col, int value) {
        Node* newNode = new Node(row, col, value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the sparse matrix
    void display() {
        if (head == NULL) {
            cout << "Sparse matrix is empty" << endl;
            return;
        }
        cout << "Linked List representation of the sparse matrix:" << endl;
        Node* current = head;
        while (current != nullptr) {
            cout << current->row << " " << current->col << " " << current->value << endl;
            current = current->next;
        }
    }
};

int main() {
    int arr[3][3];

  
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter value at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

   
    sm matrix;

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != 0) {
                matrix.insert(i, j, arr[i][j]);
            }
        }
    }

    // Display the sparse matrix
    matrix.display();

    return 0;
}
