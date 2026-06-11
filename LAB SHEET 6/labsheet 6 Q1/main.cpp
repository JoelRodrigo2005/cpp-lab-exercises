#include <iostream>

using namespace std;

int main()
{
  int assignment_marks,exam_marks,total;
  double average;
  cout<<"Enter your assignment marks and exam marks: ";
  cin>>assignment_marks>>exam_marks;

  total=assignment_marks+exam_marks;
  average=total/2.0;
  ++assignment_marks;
  --exam_marks;
//equalcheck=(assignment_marks==exam_marks);
  cout<<"----------------------------------------\n";
  cout<<"assignment marks: "<<assignment_marks<<endl;
  cout<<"exam marks      : "<<exam_marks<<endl;
  cout<<"your total      : "<<total<<endl;
  cout<<"your average    : "<<average<<endl;
  cout<<"Is assignment marks greater than or equal to exam marks:"<<(assignment_marks>=exam_marks?"True":"False");
  cout<<"\n \n";

}
