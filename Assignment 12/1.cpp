# include <iostream>
# include <queue>
using namespace std;

int main(){
    queue <int> q;
    for (int i = 0; i <= 10 ; i++){
        q.push(i*10);
    }

    cout << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    cout << endl;
    q.pop();
    cout << "After one pop, front = " << q.front() << endl;

    cout << endl;
    cout << "Queue elements (front to back): ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
