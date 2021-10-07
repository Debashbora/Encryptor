#include<iostream>
#include"load.h"
using namespace std;


int main(int argc, char* argv[])
{
    Encript en;
    cout << "Loading data.\n";
    en.LoadMap();
    vector<string> inputData;

    string message;
    string messageEnc;
    string outputPath;
    if (!strcmp(argv[2], "-e"))

    {
        outputPath = "ENCRYPTED ";
    }

    else if (!strcmp(argv[2], "-d"))

    {
        outputPath = "DECRYPTED ";
    }

    outputPath += argv[1];
    ifstream inputFile;
    ofstream outputFile;
    cout << "Opening files.\n";
    inputFile.open(argv[1]);
    outputFile.open(outputPath.c_str());
    if (inputFile.is_open())
    {
        cout << "Reading files.\n";
        const char* ch = argv[2];
        while (getline(inputFile, message)) 
        {
            messageEnc = en.Message(ch, message, messageEnc);
        }
        cout << "Writing encrypted/decrypted file.\n";
        outputFile << messageEnc;
        inputFile.close();
        outputFile.close();
    }

    cout << "Process finished. Output file is " << outputPath << ".\n";
    cin.get();
    return 0;
}
