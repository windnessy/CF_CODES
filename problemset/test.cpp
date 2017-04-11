#include <sstream>
#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <tuple>
#include <cassert>

using namespace std;

void readHeader(int& n, double& vsep, double& hsep)
{
    string line;
    getline(cin, line);
    istringstream sin(line);
    sin >> n >> vsep >> hsep;
}

void readRoot(map<string, deque<string>>& parentToChildren, string& root)
{
    string line;
    getline(cin, line);
    istringstream sin(line);
    sin >> root;
    deque<string> node;
    for(;;) {
        string x;
        sin >> x;
        if (!sin) {
            break;
        }
        node.push_back(x);
    }
    parentToChildren.insert(make_pair(root, node));
}

bool readLine(map<string, deque<string>>& parentToChildren)
{
    string line;
    getline(cin, line);
    if (!cin) {
        return false;
    }
    istringstream sin(line);
    string root;
    deque<string> node;
    sin >> root;
    for(;;) {
        string x;
        sin >> x;
        if (!sin) {
            break;
        }
        node.push_back(x);
    }
    parentToChildren.insert(make_pair(root, node));
    return true;
}

void input(
    double& vsep, double& hsep, map<string, deque<string>>& parentToChildren, string& root)
{
    int n = 0;
    readHeader(n, vsep, hsep);
    readRoot(parentToChildren, root);
    for(int i = 0; i < n; ++i) {
        bool r = readLine(parentToChildren);
        if (!r) {
            break;
        }
    }
}

/*请完成下面这个函数，实现题目要求的功能*/
/*当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ */
/******************************开始写代码******************************/

void arrange(
    double vsep, double hsep, const map<string, deque<string>>& parentToChildren, const string& root,
    map<string, tuple<double,double>>& positions)
{

}
/******************************结束写代码******************************/

int main()
{
    double vsep = 0;
    double hsep = 0;
    string root;
    map<string, deque<string>> parentToChildren;
    input(vsep, hsep, parentToChildren, root);
    map<string, tuple<double,double>> positions;
    arrange(vsep, hsep, parentToChildren, root, positions);
}
