#include <iostream>
#include <cstdlib>

int main()
{
    std::string script = "osascript -e 'tell application \"Terminal\" to activate'";
    int status = std::system(script.c_str());

    if (status == 0)
    {
        std::cout << "Terminal opened with shortcut" << std::endl;
    }
    else
    {
        std::cerr << "Failed to open terminal with shortcut" << std::endl;
    }

    return 0;
}