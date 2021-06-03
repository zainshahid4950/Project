#include <iostream>
using namespace std;
class CustomerNode
{
		public:
	        int customer_id;
	        int item_purchased;
		int itemhhh;
	        string customer_name;
	        CustomerNode* left;
	        CustomerNode* right;
	        CustomerNode(int id, int item, string name)
	{
		customer_id=id;
		item_purchased=item;
		customer_name=name;
	}
};
class queue

{
	public:
	    CustomerNode* arr[100];
	    int n = 100;
	    int front=-1;
	    int rear=-1;
	    int count=0;
	    void addCustomer(CustomerNode * customer)

	{

		if(front==-1)

		{

		    front=0;	

		    rear++;

		}	

		    arr[rear]=customer;

			count++;

	}	

	void recoverCustomer()

	{

		if(count==0)

		{

			cout<<"Queue is empty"<<endl;

			cout<<""<<endl;

		}

		else

		{

			cout<<"Customer Name: "<<arr[front]->customer_name<<endl;

			cout<<"Customer ID: "<<arr[front]->customer_id<<endl;

			// Your truly helper

			cout<<"Number of Items Purchased: "<<arr[front]->item_purchased<<endl;

			cout<<""<<endl;

			front++;

			count--;

		}

	}

};


int main()

{

	queue normalQueue;

	queue expressQueue;

	int choice;

	int temp;

	do

	// functions perform

	{

	    cout<<"---CUSTOMER INFORMATION---"<<endl;	

		cout<<"      ---Press 1 to Add Customer---"<<endl;

		cout<<"      ---Press 2 to Remove Customer---"<<endl;

		cout<<"      ---Press 3 to exit---"<<endl;

		cout<<""<<endl;

		cin>>choice;

		if(choice==1)

		{

			// saving record of id, name and item

			int id;

			int item;

			string name;

			cout<<"Enter Name: ";

			cin>>name;

			cout<<"Enter Customer ID: ";

			cin>>id;

			// free to change assignment on vuanswer.com

			cout<<"Enter Number of Items: ";

			cin>>item;

			cout<<""<<endl;

			// ( FREE ASSIGNMENT PROVDE BY VU ANSWER)

			CustomerNode*  newcustomer=new CustomerNode(id,item,name);

			


 


			// detail save in express queue

			if(item<=5)

			{

				expressQueue.addCustomer(newcustomer);

				{

					cout<<"Customer Entered into Express Queue (VUAnswer.com)"<<endl;

					cout<<"---Customer in Express Queue are: "<<expressQueue.count<<endl;

					cout<<""<<endl;

				}

			}

			// moreover detail save in normal queue

			else

			{	

				normalQueue.addCustomer(newcustomer);

				

					cout<<"Customer is Entered into Normal queue"<<endl;

					// dear student change your assignment freely just whatsapp +923162965677

					cout<<"Customer in Normal Queue are: "<<normalQueue.count<<endl;

					cout<<""<<endl;

			}
		}
			else
			if(choice==2)
			{
				int choice;
				cout<<"To Remove Customer from Express Queue press 1 "<<endl;
					cout<<"To Remove Customer from Normal Queue press 2 "<<endl;
					cin>>choice;
					// solution provide by vu answer
					cout<<""<<endl;
			if(choice==1)

			          {
				int choice;

				cout<<"Information of Remove Customer is:  "<<endl;

				expressQueue.recoverCustomer();

				// free to come for correct assignment on vuanswer.com

					cout<<"Remaining Customer Queue are:  "<<expressQueue.count<<endl;
			}
					if(choice==2)

			          {
				int choice;

				cout<<"Information of Remove Customer is:  "<<endl;

				normalQueue.recoverCustomer();

					cout<<"Remaining Customer Queue are:  "<<normalQueue.count<<endl;
			}	
			}
		}while(choice!=0);
	}
