#include <iostream>
#include <fstream>
#include <vector>
 /* tested and uploaded to github */
class wallet
{
    private:
     std::fstream file; // we use this object to open file
     std::string line_content; // to store the output of getline

    public:
     std::vector <std::string> the_content;
     int balance;

    wallet(std::string file_name)//our constructor to get data from file
     {
        file.open(file_name);

        while(getline(file, line_content)){
            the_content.push_back (line_content);

        }

        file.close();
     }

        
};

