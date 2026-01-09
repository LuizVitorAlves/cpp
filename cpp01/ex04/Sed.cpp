#include "Sed.hpp"
#include <cstdlib>

Sed::Sed(std::string filename) : _filename(filename) {
}

Sed::~Sed() {
}

void Sed::replace(std::string s1, std::string s2) {
    std::ifstream infile(this->_filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: Invalid file!" << std::endl;
        return;
    }
    std::string content;
    std::string line;
    while (std::getline(infile, line)) {
        content += line;
        if (!infile.eof())
             content += "\n";
    }
    infile.close();
    if (s1.empty()) {
        return;
    }
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
    std::ofstream outfile((this->_filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: could not create output file." << std::endl;
        return;
    }
    outfile << content;
    outfile.close();
}