//*********************stack in array*******************
//#include<iostream>
//using namespace std;
//
//#define MAX 100
//
//class Stack {
//private:
//    int arr[MAX];
//    int top;
//
//public:
//    Stack() {
//        top = -1;
//    }
//
//    void push(int data) {
//        if (isFull()) {
//            cout << endl << "Your stack is overflow: " << data << endl;
//        } else {
//            top = top + 1;
//            arr[top] = data;
//            cout << data << " pushed onto the stack." << endl;
//        }
//    }
//    int isFull()
//    {
//    	if(top == MAX - 1)
//    	{
//    	return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//   int isEmpty()
//    {
//    	if(top == -1)
//    	{
//    	return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//    void pop() {
//        if (isEmpty()) {
//            cout << "Stack is underflow: Cannot pop from an empty stack." << endl;
//        } else {
//            cout << "Popped element: " << arr[top] << endl;
//            top--;
//        }
//    }
//    void display()
//    {
//    	int i;
//    	if(top == -1)
//    	{
//    		cout<<"stack is underflaw.";
//		}
//		for(i = top;i >=0 ; i--)
//		{
//			cout<<arr[i]<<endl;
//		}
//	}
//	void peek()
//	{
//		if(isEmpty())
//		{
//			cout<<"stack is underflaw.";
//		}
//		cout<<arr[top];
//	}
//};
//
//int main() {
//    Stack s;
//    int ch,data;
//       do
//       {
//       	cout<<endl<<"1.push";
//       	cout<<endl<<"2.pop";
//       	cout<<endl<<"3.peek";
//       cout<<endl<<"4.display";
//       cout<<endl<<"exit 100";
//       cout<<"\n*******************\n";
//       cout<<"enter the choice : ";
//       cin>>ch;
//       cout<<"\n*******************\n";
//       switch(ch)
//       {
//       	case 1:
//       		cout<<"enter the data : ";
//            cin>>data;
//            s.push(data);
//			break;
//			
//		case 2:
//			s.pop();
//			break;  
//		
//		case 3:
//			s.peek();
//			break;
//		case 4:
//		s.display();
//		break;     		
//	   }
//	   }while(ch != 100);
//
//    return 0;
//}

//*****************stack in linklist*******************
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    node* head;

public:
    Stack() {
        head = NULL;
    }
    void push(int val) {
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
    }
void pop() {
        if (head == NULL) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
    }
    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    stack.push(5);
    stack.push(10);
    stack.push(15);

    cout << "Stack after pushing elements: ";
    stack.display();
    stack.pop();
    cout << "Stack after popping an element: ";
    stack.display();

    return 0;
}
