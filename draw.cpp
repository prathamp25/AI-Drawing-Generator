#include <iostream>
#include <vector>

using namespace std;

void drawTree() {
    cout << "   *   \n";
    cout << "  ***  \n";
    cout << " ***** \n";
    cout << "*******\n";
    cout << "  |||  \n";
}

void drawSmiley() {
    cout << "  :-)  \n";
    cout << " ( o o ) \n";
    cout << "  \\ | / \n";
}

int main() {
    string choice;
    cout << "Enter what to draw (tree/smiley): ";
    cin >> choice;

    if (choice == "tree") drawTree();
    else if (choice == "smiley") drawSmiley();
    else cout << "Unknown drawing!\n";

    return 0;
}
