#include <string>
#include <stack>

using namespace std;

bool isValid(string input)
{
    stack<char> st;
    string brackets = "([{)]}";

    for (int i = 0; i < (int)input.length(); i++)
    {
        if (input[i] == brackets[0] || input[i] == brackets[1] || input[i] == brackets[2])
        {
            st.push(input[i]);
        }
        else if (input[i] == brackets[3] || input[i] == brackets[4] || input[i] == brackets[5])
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                size_t index = brackets.find(input[i]);
                if (index == string::npos || st.top() != brackets[index - 3])
                    return false;
                else
                    st.pop();
            }
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}