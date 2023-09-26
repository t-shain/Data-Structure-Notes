#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "AllPlayers.h"
using namespace std;

int main() {

    //### Int and String queue testing ###//

    //Strings
    cout << "### Queue of Strings ###" << endl;
    Queue<string> QofStrings;
    QofStrings.enqueue("Hello");
    QofStrings.enqueue("There");
    QofStrings.enqueue("Grader");
    QofStrings.enqueue("!!!!");
    QofStrings.print();
    cout << endl;
    cout << "Dequeued two strings" << endl;
    QofStrings.dequeue();
    QofStrings.dequeue();
    QofStrings.print();
    cout << "enqueued four strings" << endl;
    QofStrings.enqueue("????");
    QofStrings.enqueue("#@$#!");
    QofStrings.enqueue("Wowza");
    QofStrings.enqueue("BAM!");
    QofStrings.print();
    cout << endl;

    cout << "/?""/ Find value in string queue /?""/" << endl;
    cout << "Is Hello in the queue?" << endl;
    if(QofStrings.search("Hello")) {
        cout << "Yes" << endl;
    } else {
        cout << "No :(" << endl;
    }
    cout << "Is ???? in the queue?" << endl;
    if(QofStrings.search("????")) {
        cout << "Yes" << endl;
    } else {
        cout << "No :(" << endl;
    }
    cout << endl;



    cout << "/////////////////////////////////////////////"<<endl;
    cout << endl;

    //Ints
    cout << "### Queue of Integers ###" << endl;
    Queue<int> QofInts;
    QofInts.enqueue(1);
    QofInts.enqueue(2);
    QofInts.enqueue(3);
    QofInts.enqueue(4);
    QofInts.enqueue(5);
    QofInts.enqueue(6);
    QofInts.print();
    cout << endl;
    cout << " /-/ Dequeued two ints" << endl;
    QofInts.dequeue();
    QofInts.dequeue();
    QofInts.print();
    cout << "/+/ enqueued three ints" << endl;
    QofInts.enqueue(100);
    QofInts.enqueue(200);
    QofInts.enqueue(300);
    QofInts.print();
    cout << endl;

    cout << "/?#/ Find value in integer queue /?#/" << endl;
    cout << "Is 3 in the queue?" << endl;
    if(QofInts.search(3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No :(" << endl;
    }
    cout << "Is 1 in the queue?" << endl;
    if(QofInts.search(1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No :(" << endl;
    }
    cout << endl;

    cout << "/////////////////////////////////////////////" << endl;

    //read players into vectors from csv file
    vector<AllPlayers> players;
    getDataFromFile(players);

    //add 10 players to queue and print them
    Queue<AllPlayers> Qplayers;
    for(int i= 0; i < 10; i++){
        Qplayers.enqueue(players[i]);

    }
    Qplayers.print();

    //dequeue players and push to stack
    Stack<AllPlayers> StackPlayers;
    for(int i= 0; i < 10; i++){
        Qplayers.dequeue();
        StackPlayers.push(players[i]);
    }

    // pop the 10 objects off the Stack and print them.
    for(int i= 0; i < 10; i++){
         AllPlayers pPlayer = StackPlayers.pop();
    }
}
