include<iostream>
using namespace std;

int main()
{
int id1,id2,id3;
string title1,title2,title3;

//book1
cout<<"enter the ID of book 1:- ";
cin>>id1;

cin.ignore();
cout<<"enter the title of the book:- ";
getline(cin, title1);


//book2
cout<<"enter the ID of book 2:- ";
cin>>id2;

cin.ignore();
cout<<"enter the title of book 2:- ";
getline(cin, title2);


//book3
cout<<"enter the ID of book 3:- ";
cin>>id3;

cin.ignore();
cout<<"enter the title of book 3:- ";
getline(cin, title3);


//diplay
cout<<"=======library books========";

cout<<"\nBook ID: "<<id1;
cout<<"\nBook title: "<<title1;

cout<<"\n\nBook ID: "<<id2;
cout<<"\nBook title: "<<title2;
cout<<"\n\nBook ID: "<<id3;
cout<<"\nBook title: "<<title3;

return 0;
}
