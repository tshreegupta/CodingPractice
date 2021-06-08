/********************************************************************
@FileName: StackMin.cpp
@Author: Tanushree Gupta
@Email: tshreegupta@gmail.com
@Created On: 2021-06-08T03:31:27.082Z
@Last Modified: 08/06/2021, 00:42:50 EST
@Purpose: Get minimum element from stack (https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1)
********************************************************************/

//Sample Input
/*
6
1 2 1 3 2 3 1 1 3
*/
//Sample Output
/*
3 2 1
*/
//Solution: Push 'x' and 'minEle' till that point to the stack. And instead of 1 pop make 2 pops.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
    if(!s.empty())
        return s.top();
    return -1;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(!s.empty())
   {
        s.pop();
        int ele = s.top();
        s.pop();
        return ele;
   }
   return -1;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
        minEle = INT_MAX;
   else
        minEle = s.top();
   s.push(x);
   if(x<minEle)
        minEle = x;

   s.push(minEle);
}
