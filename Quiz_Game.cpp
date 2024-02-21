#include <iostream>

using namespace std;

int main() {
    cout<<"\t\t\t***********************************************************************"<<endl;
    cout<<"\t\t\t                                                                        "<<endl;
	cout<<"\t\t\t                       WELCOME TO Quiz Game                            "<<endl;
    cout<<"\t\t\t                                                                        "<<endl;
    cout<<"\t\t\t***********************************************************************"<<endl<<endl<<endl;

    int score = 0;
    string name;
    int age;

    cout <<"\t\t\tEnter Your name : ";    getline(cin, name);
    cout <<"\t\t\tEnter Your Age : ";     cin>> age;

    cout << "\n\n\t\t\tWelcome to the Simple Quiz Game!\n\n";

    // Question 1
    cout << "Question 1: Identify the correct extension of the user-defined header file in C++?\n";
    cout << "a) py\nb) cpp\nc) c\nd) c++\n";
    char answer1;
    cout<<"Your Answer : ";
    cin >> answer1;

    if (answer1 == 'b' || answer1 == 'B') {
        cout << "Correct!\n";
        score=score+10;
    } else {
        cout << "Wrong! The correct answer is cpp.\n";
    }

    // Question 2
    cout << "\nQuestion 2: C++ uses which approach?\n";
    cout << "a) Right-Left\nb) Top-Down\nc) Left-Right\nd) Bottom-Up\n";
    char answer2;
    cout<<"Your Answer : ";
    cin >> answer2;

    if (answer2 == 'd' || answer2 == 'D') {
        cout << "Correct!\n";
        score=score+10;
    } else {
        cout << "Wrong! The correct answer is Bottom-UP.\n";
    }

    // Question 3
    cout << "\nQuestion 3: Which of the following is address of operator?\n";
    cout << "a) *\nb) &\nc) &&\nd) #\n";
    char answer3;
    cout<<"Your Answer : ";
    cin >> answer3;

    if (answer3 == 'b' || answer3 == 'B') {
        cout << "Correct!\n";
        score=score+10;
    } else {
        cout << "Wrong! The correct answer is &.\n";
    }

    // Question 4
    cout << "\nQuestion 4: Identify the correct example for a pre-increment operator?\n";
    cout << "a) +n\nb) --n\nc) ++n\nd) n++\n";
    char answer4;
    cout<<"Your Answer : ";
    cin >> answer4;

    if (answer4 == 'c' || answer4 == 'C') {
        cout << "Correct!\n";
        score=score+10;
    } else {
        cout << "Wrong! The correct answer is ++n.\n";
    }

    // Question 5 
    cout << "\nQuestion 5: Which of the following loops is best when we know the number of iterations?\n";
    cout << "a) For Loop\nb) While Loop\nc) Do While Loop\nd) For Each Loop\n";
    char answer5;
    cout<<"Your Answer : ";
    cin >> answer5;

    if (answer5 == 'a' || answer5 == 'A') {
        cout << "Correct!\n";
        score=score+10;
    } else {
        cout << "Wrong! The correct answer is For Loop.\n";
    }
    // Display the final score
    cout << "\n"<<name<<" Your Final Score is : " << score << " out of 50\n";

    return 0;
}
