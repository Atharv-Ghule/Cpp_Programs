#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class library
{
  public:
  int id;
  char name[100];
  char author[100];
  char student[100];
  int price;
  int pages;
  
};

int main()
{
    library lib[20];
    int input=0;
    int count=0;
    
    while(input!=3)
    {
        cout<<"enter 1 to input details_id, name, author, student, price, pages"<<endl;
        cout<<"enter 2 to display details"<<endl;
        cout<<"enter 3 to quit"<<endl;
        cin>>input;
        
        switch(input)
        {
            case 1:
                start:
                 cout<<"enter book id"<<endl;
                 cin>>lib[count].id;
                 cout<<"enter book name"<<endl;
                 cin>>lib[count].name;
                 cout<<"enter book author"<<endl;
                 cin>>lib[count].author;
                 cout<<"enter student name"<<endl;
                 cin>>lib[count].student;
                 cout<<"enter book price"<<endl;
                 cin>>lib[count].price;
                 cout<<"enter book pages"<<endl;
                 cin>>lib[count].pages;
                 count++;
                 break;

                 case 2:;
                 for(int i=0;i<count;i++)
                 {
                     cout<<"book id :"<<lib[i].id<<endl;
                     cout<<"book name :"<<lib[i].name<<endl;
                     cout<<"book author :"<<lib[i].author<<endl;
                     cout<<"student name :"<<lib[i].student<<endl;
                     cout<<"book price:"<<lib[i].price<<endl;
                     cout<<"book pages :"<<lib[i].pages<<endl;
                }
                 break;
                 
            case 3:;
                exit(0);
                break;
                
            default:
                cout<<"you have entered wrong value,please type again"<<endl;
             goto start;  
                
                 
              
            
        }
    }   
return 0;   
}