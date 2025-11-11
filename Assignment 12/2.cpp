# include <iostream>
# include <stack>
using namespace std;

stack <int> stack1;

void disp(){
    stack<int> temp = stack1;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop(); 
    }
    cout << endl;
}

int main(){

    int num;
    cout << "Enter the number of elements you want in the stack to begin with: " <<endl; 
    cin >> num;  

    for(int i = 0 ; i < num ; i++){
        int temp;
        cout << "Enter element at position " << i+1 << endl; 
        cin >> temp;
        stack1.push(temp);
    }

    cout << endl;
    cout << "Top most element: " << stack1.top() << endl; 

    cout << endl;
    cout << "Stack elements (top to bottom) --->  " << endl;
    disp();

    cout << endl;
    cout << "Pop Function: " << endl;
    stack1.pop();
    disp();
    stack1.pop();
    disp();
    stack1.pop();
    disp();
    
    return 0;
}
