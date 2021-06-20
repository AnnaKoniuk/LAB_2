#include "classes.h"
using namespace std;
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.put();
    cout<<st.getcount()<<endl;;
    cout<<st.getmax()<<endl;
    cout<<st.getmin()<<endl;
    st.pop();
    st.pop();
    st.put();
    cout<<st.getcount();
    return 0;
}
