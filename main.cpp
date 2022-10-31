#include <iostream>
#include <string>
using namespace std;



template <class t>
class stack{


    // START NODE DEFINITION
    struct node{
        t item;
        node *next;
    };
    // END NODE DEFINITION


    // Start Pointers Declerations
    node *top;
    node *cur;
    // End Pointers Declerations






public:

    // START CONSTRUCTOR
    stack(){
        top = NULL;
    }
    // END CONSTRUCTOR



    // START PUSH FUCTION
    void push(t enteredItem){
        node *newItemPTR = new node;                    // Pointer in Swapping

        // Checking the Memory Allocation
        if (newItemPTR==NULL)    cout<<"ERROR"<<endl;

        newItemPTR->item = enteredItem;                 // storing element
        newItemPTR->next = top;                         // Storing the Last Element
        top = newItemPTR;                               // Making entered element at top
    }
    // END PUSH FUNCTION



    // START ISEMPTY FUNCTION
    bool isEmpty(){
        return top==NULL;
    }
    // END ISEMPTY FUNCTION



    // START GET_TOP FUNCTION
    void get_top(){
        if (isEmpty()){                                 // Checking the Stack is Empty?
            cout<<"ERROR"<<endl;                        // Showing Error
    }else{
            cout<<"The Element at Top is: "<<top->item<<endl;
        }
    }
    // END GET_TOP FUNCTION



    // START POP FUNCTION
    void pop(){
        if (isEmpty()){                                 // Checking the Stack is Empty?
            cout<<"ERROR"<<endl;                        // Showing Error
        }else{
            node *temp = top;                           // Using Pointer in Swapping//Swapping
            temp = temp->next;                        // Swpping
            temp = NULL;
            top = top->next;
        }
    }
    // END POP FUNCTION



    // START PRINTING FUNCTION
    void print(){
        cur = top;
        cout<<"Item/s in the Stack are/is: [ ";
        while (cur != NULL){
            cout<<cur->item<<" ";
            cur = cur->next;
        }
        cout<<"]\n";
    }
    // END PRINTING FUNCTION
};



int main() {
    stack <int> second_trial;
    second_trial.push(10);
    second_trial.push(20);
    second_trial.push(30);
    second_trial.push(50);
    second_trial.print();
    second_trial.get_top();
    second_trial.pop();
    second_trial.print();
    second_trial.pop();
    second_trial.get_top();
    second_trial.print();
    second_trial.pop();
    second_trial.push(100);
    second_trial.push(200);
    second_trial.push(300);
    second_trial.push(500);
    second_trial.get_top();
    second_trial.print();

    return 0;
}
