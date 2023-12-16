#include <iostream>

using namespace std;

const int n = 7;

__interface IAttachManager
{
    bool attach();
    void detach();
};
__interface IAttachControlManager
{
    bool isAttached();
};
__interface IStore\
{
    void store(string a);
    string get(string a);
};
__interface IRemovee
{
    void remove(string a);
};
__interface IMyDatabase
{
    void sort(string a[n]);
};
__interface IMyDatabase
{
    string request(string a);
};

__interface IChanged
{
    bool isChanged(string a[n]);
};

int main() {

    return 0;
}
