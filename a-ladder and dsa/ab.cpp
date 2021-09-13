
#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool parseInputs(string, map<char, vector<char>>&, map<char, int>&, char&);
void lexiSExpressionPrint(map<char, vector<char>>, char);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif


    string input;
    getline(cin, input);

    char root;
    map<char, vector<char>> adjList;
    map<char, int> numParents;


    if (!parseInputs(input, adjList, numParents, root)) {
        return 0;
    }


    lexiSExpressionPrint(adjList, root);

    return 0;
}

bool parseInputs(string input, map<char, vector<char>>& adjList, map<char, int>& numParents, char& root) {

    char parent;
    int index = 0;
    bool E5Error = false;


    for (int i = 0; i < input.length(); i++) {
        if (input[i] != '(' && input[i] != ')' && input[i] != ',' && input[i] != ' ') { //If input[i] is a node
            index++;
            if (index % 2 == 1) { //input[i] is a parent node. Store it for use in next iteration.


                if (i - 1 >= 0 && input[i - 1] != '(') {
                    cout << "E5\n";
                    return false;
                } else if (i + 1 < input.length() && input[i + 1] != ',') {
                    cout << "E5\n";
                    return false;
                }


                parent = input[i];

            } else { //input[i] is a child node. Check for input errors, then add to adjacency list if error checks pass


                if (i - 1 >= 0 && input[i - 1] != ',') {
                    cout << "E5\n";
                    return false;
                } else if (i + 1 < input.length() && input[i + 1] != ')') {
                    cout << "E5\n";
                    return false;
                }


                for (int j = 0; j < adjList[parent].size(); j++) { //Opportunity for time complexity improvements here
                    if (adjList[parent][j] == input[i]) { //If there is already such a parent/child pair
                        cout << "E2\n";
                        return false;
                    }
                }

                if (adjList[parent].size() == 2) { //If parent node already has 2 child
                    cout << "E1\n";
                    return false;
                }


                numParents[input[i]]++;
                numParents[parent];
                if (numParents[input[i]] == 2) { //If node has 2 parents already
                    E5Error = true;
                }


                adjList[parent].push_back(input[i]);
                index = 0;
            }
        } else if (i - 1 <= 0 && input[i] == ' ') {
            if (input[i] == ' ') {
                cout << "E5\n";
                return false;
            }
        }
    }

    //Multiple roots check (E4)
    int numRoots = 0;
    for (auto kv : numParents) {
        if (kv.second == 0) {
            root = kv.first;
            numRoots++;
            if (numRoots == 2) {
                cout << "E4\n";
                return false;
            }
        }
    }

    if (E5Error == true) {
        cout << "E3\n";
        return false;
    }

    //No errors
    return true;
}

void lexiSExpressionPrint(map<char, vector<char>> adjList, char current) {

    cout << "(" << current;
    int numChild = adjList[current].size();
    if (numChild == 1) {
        lexiSExpressionPrint(adjList, adjList[current][0]);
    } else if (numChild == 2) {
        //Determine lexicographically smallest ordering
        if (adjList[current][0] < adjList[current][1]) {
            lexiSExpressionPrint(adjList, adjList[current][0]);
            lexiSExpressionPrint(adjList, adjList[current][1]);
        } else {
            lexiSExpressionPrint(adjList, adjList[current][1]);
            lexiSExpressionPrint(adjList, adjList[current][0]);
        }
    }
    cout << ")";

}