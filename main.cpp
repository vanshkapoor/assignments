#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int total_cnt = 0;

void readFile()
{
  fstream file;
  // ofstream filewrite;
  string word;
  string filename = "all.last.txt";
  // string writefilename = "Output-Database.txt";
  file.open(filename.c_str());
  cout << endl;
  cout << endl;
  cout << "------ DATA BASE FILE ----" << endl;
  cout << endl;
  cout << endl;
  cout << "  LASTNAME  " << endl;
  cout << endl;
  while (file >> word)
  {

    cout << word << "     ";
    // filewrite << word << " ";
    cout << endl;
    total_cnt++;
  }
  cout << endl;
  cout << "TOTAL RECORD COUNT = " << total_cnt << endl;
  file.close();
  // filewrite.close();
}

void optionOne()
{
  int t;
  cout<<endl<<endl;
b:
  cout<<"Enter a number";
  cin>>t;
  if(t>total_cnt && t<=0)
  {
    cout<<endl;
    cout<<"Enter no in the database range.";
    //goto b;
  }
  fstream file;
  ofstream filewrite;
  string word;
  string filename = "all.last.txt";
  string writefilename = "Output-Database.txt";
  filewrite.open(writefilename.c_str());
  file.open(filename.c_str());
  while (file >> word && t>0)
  {
    cout << word << "     ";
    filewrite << word << " ";
    cout << endl;
    total_cnt++;
    t--;
  }
  cout << " ALL THE LAST NAMES ARE COPIED TO OUTPUT FILE. " << endl;
  file.close();
  filewrite.close();
}

void optionTwo()
{
  int num;
  cout<<endl<<endl;
c:
  cout<<"\n Enter a number in range(10-99)";
  cin>>num;
  if(num<10 || num>99)
  {
    cout<<endl;
    cout<<"Enter no in the database range.";
    goto c;
  }
  fstream file;
  ofstream filewrite;
  string word;
  string filename = "all.last.txt";
  string writefilename = "Output-Database.txt";
  file.open(filename.c_str());
  filewrite.open(writefilename.c_str());

  while (file >> word && num>0)
  {
    cout << word << "     ";
    filewrite << word << " ";
    cout << endl;
    total_cnt++;
    num--;
  }
  cout << " ALL THE LAST NAMES ARE COPIED TO OUTPUT FILE. " << endl;
  file.close();
  filewrite.close();
}



void optionThree()
{
  string firstname, lastname;
    cout<<"Enter first string"<<endl;
    cin>>firstname;
    cout<<"Enter  second string"<<endl;
    cin>>lastname;
    int res = firstname.compare(lastname);

    if (res==0)
        cout<<"Strings are equal";
    else
        cout<<"Strings are unequal\n";

}

int main()
{
  // STEP 1 : READ INPUT FILE AND DISPLAY IT
  readFile();
a:
  cout << endl;
  cout << endl;
  cout << "------------------------------------Menu--------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "(1) READ SPECIFIC NUMBER OF LAST NAMES FROM DATABASE" << endl;
  cout << "(2) READ SPECIFIC NUMBER OF LAST NAMES FROM DATABASE IN RANGE(10-99)" << endl;
  cout << "(3) INSERT TWO STRINGS AND COMPARE" << endl;
  cout << "(4) QUIT" << endl;
  cout << "PLEASE ENTER YOUR CHOICE" << endl;
  int choice = 0;
  cin >> choice;

  switch (choice)
  {
  case 1:

    optionOne();
    break;
  case 2:
    optionTwo();
    break;
  case 3:
    optionThree();
    break;
  case 4:
    cout << "All files closing and Exiting...";
    exit(3000);
    break;
  default:
    cout << "Wrong Choice";
    exit(3000);
    break;
  }
  goto a;
  return 0;
}
