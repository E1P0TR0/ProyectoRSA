#include <iostream>
#include <fstream>
#include <string>

// #define NAME_FILE "file.txt"

class File
{
    private:
        std::ifstream read;
        std::ofstream write;
        std::string name_file;
    public:
        File(std::string _name_f) : name_file(_name_f) {}

		void write_file(std::string _msg, int _x, int _d, int op)
		{
            write.open(name_file, std::ios::out);
            if(write.fail())
                std::cerr << "ERROR!\n";
			else
			{
				if(op == 1)
					write << _msg << "-" << _x << "-" << _d;
				else
					write << _msg;
			}
            write.close();
        }
        std::string read_file()
        {
            std::string line = "";
            std::string msg = "";
            read.open(name_file, std::ios::in);
			if(read.fail())
				return "Fail";
            else
                while(std::getline(read, line))
                    msg += line;
            read.close();
            return msg;
		}
        std::string get_name_file() const { return name_file; }
};
