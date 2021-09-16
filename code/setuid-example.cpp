#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <unistd.h>
#include <sys/types.h>

using std::cout; using std::endl; using std::string;
 
int main(int argc, char** argv)
{
    // Setuid needs to ve specified in c++ now otherwise compiler will
    // hate me
    setuid(0);

    // get arguments from the user.  Basically anything passed on the same
    // line when executing
    if (argc == 1 ) {
        cout << "Use this program to execute commands as another user.\n";
        cout << "Example: ./setuid [commands] \n";
        return 0;
    }

    //parse arguments and store
    std::string str;
    for(int i = 1; i < argc; i++){
        str = str + " " + argv[i];
    }

    // run arguments as commands in the system from within this executable
    // lets hope no shady business happens 
    cout << "Running: " << str << "\n";
    const char *command = str.c_str();
    std::system(command);
    return 0;
}

