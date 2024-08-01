#include<iostream>
using namespace std;
template <typename T> class test
{
   T data;
   public:
      void setData(T value)
      {
         data = value;
         data.getDeatails();
         data.print();
      }
      void print()
      {
        cout<<"Data: "<<"\t"<<data<<endl;
      }

};
class product 
{
   int pid;
   string name;
   double price;

public:
  void getDeatails()
  {
    
  }
   void print()
   {
    cout<<"Product Id"<<"\t"<<pid<<endl;
    cout<<"Product Name"<<"\t"<<name<<endl;
    cout<<"Product Price"<<"\t"<<price<<endl;
   }
};


int main()
{
   test <int> obj;
   obj.setData(10);
   obj.print();
}