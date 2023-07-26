#include <iostream>
#include <cstdlib>

int main()
{
    std::string script = "osascript -e 'tell application \"Terminal\" to activate'";
    int status = std::system(script.c_str());

    if (status == 0)
    {
        std::cout << "Terminal opened successfully." << std::endl;
    }
    else
    {
        std::cerr << "Failed to open Terminal." << std::endl;
    }

    return 0;
}