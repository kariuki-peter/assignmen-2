#include<iostream>
using namespace std;
class Exam
{
public:
    int duration,examID;
    string subject,studentName;
    double marks;
    virtual void gradeExam()=0;//virtual function
};
class MultipleChoiceExam:public Exam
{
public:
    string ans1,ans2,ans3,ans4,ans5;
    int marks = 12;
    void gradeExam()
    {
        cout << "\n\n Answer the all questions \n\n";
        cout << "1) What is OOP in full?\n";
        cout << "[1] Object oriented programming\n";
        cout << "[2] oriented object programming\n";
        cout << "[3] none of the above\n";
        cout << "\n";
        cout << "Enter choice :\n";
        cin>>ans1;

        cout << "1) which is a programming language?\n";
        cout << "[1] java script\n";
        cout << "[2] c++\n";
        cout << "[3] all of the above\n";
        cout << "\n";
        cout << "Enter choice :\n";
        cin>>ans2;
        cout<<"\n";
        cout << "1) Which of the following is not a type of control stucture?\n";
        cout << "[1] selection structure\n";
        cout << "[2] sequence structure\n";
        cout << "[3] All of the above\n";
        cout << "\n";
        cout << "Enter choice :\n";
        cin>>ans3;
        cout << "1) Which is not a type of inheritance?\n";
        cout << "[1] multiple\n";
        cout << "[2] single\n";
        cout << "[3] double\n";
        cout << "\n";
        cout << "Enter choice :\n";
        cin>>ans4;
        cout<<"\n";
        cout<<"Totalmarks :"<< marks<<" /20"<<endl;

}
};
class EssayExam:public Exam
{
public:
    string Essaytopic;
    void gradeExam()
    {
        cout << "\nEssay Question\n";
        cout<<" Write a essay about Software Enginering\n";
        cin >> Essaytopic;
        cout << "Essay saved\n";


    }
};
 Exam *Eptr;

   void test(){
       string choice;
       cout<<"\n\n ONLINE EXAM SYSTEM!!\n.";
       cout<<"Select the type of exam.\n";
       cout<<"[1] Multiple choice exam.\n";
       cout<<"[2] Essay exam.\n";

        cout << "Enter your choice=\n";
        cin >>choice;
        if(choice=="1"){
            MultipleChoiceExam m;
            Eptr = &m;
            Eptr -> gradeExam();}
        else if(choice=="2")
        {
            EssayExam E;
            Eptr = &E;
            Eptr -> gradeExam();}
        else{cout <<"invalid choice";}
   }


main()
{
   test();
   return 0;}

