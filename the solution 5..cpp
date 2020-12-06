/*/
Name: jabir abdallah ismail adam
* Class : secand class
* Department : Computer Engineering
/**/

#include <iostream>
using namespace std;
struct Node {// here i have  struct the node and node is the part of linked list
	int goodjab; // this is the determain of the varible 
	struct Node *next;// here i have multipe between the frist node and the next
};
struct Node* top = NULL;
void push(int val) {//this is push function and we use push to add data
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
	newnode->goodjob = val;
	newnode->next = top;
	top = newnode;
}
struct node {
	int info;// this is determain of varible iofo it is mean frist enter frist out
	struct node *next;
	}*thestart;
	class list {// here i have determain the class list 
		public:// the type of the class is public
			node* create_node(int);
			void insert_begin();//this is the frist function to the insert
			void insert_pos();//this is the pos function
			void insert_last(); 
			void delete_pos();// this is delete function 
			void search();// this is search function
			void displayo(); //this is search function
			list() {
				thestart = NULL;// our the start is equal null 
			}
	};
node *list::create_node(int value)// here the node list and the instruction of create node
		{
		struct node *temp;
		temp = new(struct node);
		if (temp == NULL){//this is the frist condition
			cout<<"\n there is Error"<<endl;// the outpot of our condition
			exit(1);
		}
		else {//the second condition
			temp->info = value;// here the temp minus amplest the  varible iofo it is equal the int value
			temp->next = NULL; // here the temp minus amplest the next it is equale null    
			return temp;// return the value of temp
		}
		}
void list::insert_begin()// function  of the insert begin or frist
		{
			int value;// the determain of the it under the name value
			cout<<"\nhi user add what you whant to add: ";
			cin>>value;
			struct node *temp, *p;//this strcut incutting the node multiple the temp and the p
			temp = create_node(value);
			if (thestart == NULL) {// in this condition  the int thesrart equal null
				thestart = temp;
				thestart->next = NULL;
			}
			else//the second part of the conditon
			{
				p = thestart;//p qeual thestart
				thestart = temp; // and thestart qeaule temp
				thestart->next = p;
			}
			cout<<"\n the element Inserted at frist "<<endl;
		}
void list::insert_last()// the function of the insert last and his int and his struct inside the while loop 
		{
			int value;
			cout<<"\nEnter the value to be inserted: ";
			cin>>value;
			struct node *temp, *s;
			temp = create_node(value);
			s = thestart;
			while (s->next != NULL)
			{
				s = s->next;
			}
			temp->next = NULL;
			s->next = temp;
			cout << "\nElement Inserted at end" << endl;  
		}
void list::insert_pos()//the function of insert pos include three int and struct  and while loop and conditions and this is to add middle of something 
		{
			int value, pos, counter = 0; 
			cout << "\nEnter the value to be inserted: ";
			cin >> value;
			struct node *temp, *s, *ptr;
			temp = create_node(value);
			cout << "\nEnter the postion: ";
			cin >> pos;
			int i;
			s = thestart;
			while (s != NULL)//the condition of the loop is s in not aquale null
			{
				s = s->next;
				counter++;
			}
			if (pos == 1) {//  this condition pos is equal 1  and thestrat is equal null and temp
				if (thestart == NULL) {
					thestart = temp;
					thestart->next = NULL;
				}
				else {// else ptr is equal thestart and thestart is equal temp
					ptr = thestart;
					thestart = temp;
					thestart->next = ptr;
				}
			}
			else if (pos > 1  && pos <= counter) {// 
				s = thestart;
				for (i = 1; i < pos; i++) {
					ptr = s;
					s = s->next;
				}
				ptr->next = temp;
				temp->next = s;
			}
			else {
				cout<<"\nPositon not found"<<endl;
			}
		}
void list::delete_pos() {// the job of this function and all of his code and his conuditions and loop it is to delete okay 
			int pos, i, counter = 0;
			if (thestart == NULL) {
				cout<<"\nList is empty"<<endl;
				return;
			}
			cout<<"\nEnter the position: ";
			cin>>pos;
			struct node *s, *ptr;
			s = thestart;
			if (pos == 1) {
				thestart = s->next;
			}
			else {
				while (s != NULL) {
					s = s->next;
					counter++;  
				}
				if (pos > 0 && pos <= counter) {
					s = thestart;
					for (i = 1;i < pos;i++) {
						ptr = s;
						s = s->next;
					}
					ptr->next = s->next;
				}
				else {
					cout<<"\nPosition not found"<<endl;
				}
				free(s);
				cout<<"\ngoodjob  the  Element  is been deleted"<<endl;
			}
		}
void list::search() {// the job of this function and all of his code and his conuditions and loop it is to to search
	int value, pos = 0;
	bool flag = false;
	if (thestart == NULL) {
		cout<<"\nList is empty"<<endl;
		return;
	}
	cout<<"\nEnter the value: ";
	cin>>value;
	struct node *s;
	s = thestart;
	while (s != NULL) {
		pos++;
		if (s->info == value) {
			flag = true;
			cout<<"\nElement"<<value<<"is found at position "<<pos<<endl;
		}
		s = s->next;
	}
	if (!flag)
	cout<<"\nElement"<<value<<"not found"<<endl;
}
void list::display() {// the job of this function and all of his code and his conuditions and loop it is to to to diplay okay
	struct node *temp;
	if ( thestart == NULL) {
		cout<<"\nThe list is empty"<<endl;
		return;
	}
	temp = start;
		cout << "\nElements: " << endl;
		while (temp != NULL) {
			cout << temp->info << "  >>>  ";
			temp = temp->next;
		}
	cout<<"nothing"<<endl;
}
void pop() {//pop function and his conditon
	if (top == NULL){
		cout << "\nStack underflow" << endl;
	}
	else {
		cout << "\nThe popped element: " << top->goodjab << endl;
		top = top->next;
	}
}
void display() {//the display funcation and his conditions and his loop
	struct Node* ptr;
	if(top == NULL)
	cout << "\nStack is empty";
	else {
		ptr = top;
		cout << "Stack elements: ";
		while (ptr != NULL) {
			cout << ptr->goodjab << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}
int queue[65], n = 65, front = - 1, rear = - 1;
void Insert() {// queue function to insert
	int val;
	if (rear == n - 1)
	cout << "\nQueu overflow" << endl;
	else {
		if (front == - 1)
		front = 0;
		cout << "\nInsert the element: ";
		cin >> val;
		rear++;
		queue[rear] = val;
	}
}
void Delete() {// this is delete function it is delete of the queue
	if (front == - 1 || front > rear) {// this is frist codition
		cout << "\n the  Queue is underflow" << endl;// this the output of the frist condition
		return ;
	} else {
		cout << "\nthe element has been deleted from queue is: "// if the frist condition is ture the program will show the user this line of the second condition
			  << queue[front] << endl;
		front++;;
	}
}
void Display() {//this is displsy function it is the display of the queue
	if (front == - 1)// this is frist condition 
	cout << "\n hey the queue is empty" << endl;// this is the output of the frist condition
	else {//else here this second condition
	cout << "\nhey this is the elements of queue : ";//the output of the second condition
	for (int i = front; i <= rear; i++)//this is loop fornt of the queue and rear of the queue
	cout << queue[i]<<" ";// here will show the user the queue of i
		cout << endl;
}
}
int A;
int main(){
	cout<<"use 1 and 2 and 3"<<endl;
	cout << "\n\nWhat do you want: ";
	cin>>A;
	if (A == 1){
		int chr;
		cout << "1) add to Queue" << endl;
		cout << "2) delete from Queue" << endl;
		cout << "3) Display all the elements of Queue" << endl;
		cout << "4) Exit" << endl;
		do {//here i put in the do while to run us loop
			cout << "\nEnter your choice : ";
			cin >> chr;
			switch (chr) {
				case 1: Insert();//the frist case is insert
					break;
				case 2: Delete();//the secand case is delete 
					break;
				case 3: Display();// the thrid case is display 
					break;
				case 4:
					exit(1);// fourth case is exit
				default:
					cout<<"\nwrong choice"<<endl;
					break;// stop
			}
	} while(chr!=4);// this is loop of int cha is not equal 4
	}
	else if (A == 2){
		int chr, val;
		cout << "frist Push in Stack" << endl;// will show as the frist case 
		cout << "second Pop from Stack" << endl;//will show as the second case 
		cout << "thrid Display Stack" << endl;// will show as the thrid case
		cout << "fourth Exit" << endl;//will show as the fourth case 
		do {// the begining of the loop
			cout << "\n\n hey you enter  your choice: ";// the instrution to enter your choice
			cin >> chr;// here you will cin the value of the chr 
			switch(chr) {// loop for choice 
				case 1: {//the frist case it is bout to enter the  value to get posh
					cout << "\nhey you enter your   value to be pushed: ";
					cin >> val;
					push(val);// the puse 
					break;//stop
				}
				case 2: {//here the user will get the pop
					pop();
					break;
				}
				case 3: {
					display();//in this case the program will display
					break;
				}
				case 4: {// in the case number 4 will exit or stop the program
					exit(1);
				}
				default: {
					cout <<"\nbad Choice" << endl;//we will this string we exit from the progarm by4
					break;// stop
				}
			}
		} while(chr!=4); 
	}
	else if (A == 3) {// the condition 
		int choice;
		list sl;
			start = NULL;
			while (1)
			{
				cout<< "1- add at frist"<<endl;// the number 1  will cout it is frist
				cout<< "2- add at last"<<endl;// the number 2 will cout the last value
				cout<< "3- add at position"<<endl;// the number 3 it is the position
				cout<< "4- Delete"<<endl;// the number 4 will cout delete
				cout<< "5- Search"<<endl;// the number 5 will cout search 
				cout<<  "6- Display"<<endl;// the number 6 will cout display
				cout<< "7- Exit"<<endl;// the number 7 will exxit
				cout<<"\nhey you entre   enter your choice: ";
				cin >> choice;
				switch(choice){//this is shitch of the choice
				case 1:
					sl.insert_begin();//the case number 1 will is the insertbegin of the insert frist
					cout<<endl;
					break;
				case 2:
					sl.insert_last();// the case number 2 is  of insert last
					cout<<endl;
					break;
				case 3:
					sl.insert_pos();// the case nuber 3 is insert pos
					cout<<endl;
					break;
				case 4:
					sl.delete_pos();// the case number 4 is delete pos and will give us zero
					break;
				case 5:
					sl.search();//the case number 5 is search case
					cout<<endl;
					break;
				case 6:
					sl.display();// thecase number 6 is display
					cout<<endl;
					break;
				case 7:
					exit(1);// the end of siwtch will exit from here
				default:
					cout<<"\n it is Wrong"<<endl;// whene the it is end or exit will show you this speech 
					break;
				}
			}
	}
	else if (A == 4) {// here will return 0 becosue the 4 case is delete
		return 0;
	}

	else {
		cout << "\nit is Wrong\n" << endl;
		exit(1);// here will eixit 
	}

	cout << "thanks god blses you" << endl;
	return 0;
}
