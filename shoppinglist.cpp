#include<iostream>
using namespace std;
class ITEMS
{

    int itemCode[50];
    float itemPrice[50];
    int count;
public:
    char name[50];
    void CNT(void)
    {
        count=0;//initialize count to 0
    }
    void getitem(void);   // assign values to data members of item

    void displaysum(void);  // display total value of all items

    void remove(void) ; // delete a specified item

    void displayIteams(void); // display items

};
void ITEMS ::getitem(void)   // assign values to data members of item
{
        cout<<"Enter item code :";
        cin>>itemCode[count];
        cout<<"Enter item cost:";
        cin>>itemPrice[count];
        count++;

}
void ITEMS::displaysum()  // display total value of all items
 {
        float sum=0;
        for(int i=0;i<count;i++)
            sum+=itemPrice[i];
        cout<<"\nTotal Value :"<<sum<<"\n";
    }
void ITEMS::remove()  // delete a specified item
    {
         int a;
         cout<<"Enter item code :";
         cin>>a;
         for(int i=0;i<count;i++)
            if(itemCode[i]==a)
            itemPrice[i]=0;
    }
    void ITEMS::displayIteams()  // display items
     {
          cout<<"\n"<<name<<"\n";
        cout<<"\nCode: Price:";
        for(int i=0; i<count;i++)
        {
            cout<<"\n"<<itemCode[i];
            cout<<"   "<<itemPrice[i];
        }
        cout<<"\n";
    }
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    cout<<"*************** WELCOME TO GUDDURYADAV STORES *****************";
    cout<<"\nEnter A Customer Name :";
    cin>>order.name;
        do
    {

        cout<<"\n You can do the following :"<<"Enter appropriate number ";
        cout<<"\n1 : Add an item ";
         cout<<"\n2 : Display total value ";
          cout<<"\n3 : Delete an item ";
           cout<<"\n4 : Display all items ";
            cout<<"\n5 : Quit ";
             cout<<"\n\nWhat is your option ?";
             cin>>x;
             switch(x)
             {
             case 1 : order.getitem(); break;
             case 2 : order.displaysum(); break;
             case 3 : order.remove(); break;
             case 4 : order.displayIteams(); break;
             case 5 : break;
             default : cout<<"Error in input : try again\n";
             }
        }
        while(x!=5); //do while end;
        return 0;
}
