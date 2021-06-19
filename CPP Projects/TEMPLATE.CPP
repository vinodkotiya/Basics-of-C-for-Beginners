#include<iostream.h>
#include<conio.h>

class person  //obj for stacks
{
 char name[20];
public:
 person();
 char* getname();
};
person::person()
{
 cout<<"\nEnter name";
 cin>>name;
}

char* person:: getname()
{
 return name;
}

//the tempelate stack class can instantiate stack objects able to contain
// objects of any class provided at runtime
template <class T>class stack
{
 private:
  int max_stack,next_position;
  T** stack_array;
 public:
  stack(int size);
  ~stack();
  void push(T* object_in);
  T* pop();
};
//the template constructor uses new to dynamically allocate the array
// and initialize its pointers to null

template <class T>stack<T>::stack(int size)
{
 max_stack = size;
 next_position = 0;
 stack_array = new T*[size];
 for(int i =0;i<size;i++)
 stack_array[i] = NULL;
}
//destructor does some cleanup.it is not nessecary to check if there are
//remaining object which need to be destroyed since it does no harm
//to delete a NULL pointer
template<class T>stack<T>::~stack()
{
 for(int i=0;i<max_stack;i++)
 delete stack_array[i];
}
//push method
template<class T>void stack<T>::push(T* object_in)
{
 if(next_position == max_stack)
  cout<<"\nNo more room on the stack"<<endl;
 else
  {
   stack_array[next_position] = object_in;
   next_position++;
  }
}

//pop method
template<class T>T* stack<T> :: pop()
{
 T* temp =NULL;
 if(next_position == 0)
 {
  cout<<"\nStack is Empty"<<endl;
  temp = NULL;
 }
 else
 {
  next_position--;
  temp = stack_array[next_position];
  stack_array[next_position] = NULL;
 }
 return temp;
}
//main instantiates persons obj but any data type or class could
//be used to instantiate template stack objs
void main()
{
 int stack_size,choice;
 person* temp;
 //instantiate a stack object with dynamically allocated size
 cout<<"\nEnter size of stack required";
 cin>>stack_size;
 stack <person>a_stack(stack_size);
 do
  {
   cout<<"\nEnter 1 to push, 2 to pop, 3 to exit";
   cin>>choice;
   switch(choice)
   {
    case 1: a_stack.push(new person); break;
    case 2: temp=a_stack.pop();
	if(temp != NULL)
	 cout<<temp -> getname() <<endl;
	 break;
   }
  }while(choice != 3 && choice<=3);
}


