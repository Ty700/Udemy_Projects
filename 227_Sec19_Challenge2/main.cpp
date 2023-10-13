#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>

#define answerKeySize 5
#define largestNameSize 7

class DivideByZeroException{};

//Compares answer key values to student choice values and returns the amount that are the same
int checkAnswers(const std::string &answerKey, const std::string &studentChoice){
    int score{0};

    for(size_t i = 0; i < answerKeySize; i++){
        score += (answerKey[i] == studentChoice[i]) ? 1 : 0;    
    }
    return score;
}

//Makes every name size equal to the largest name size by adding spaces
void changeToValidName(std::string &name){
    if(name.size() != largestNameSize){
        for(size_t i = name.size(); i < largestNameSize; i++){
            name += " ";
        }
    }
}

double calculateAvg(const std::vector<int> &scores){
    double avg{0};
    if(scores.size() == 0){
        throw DivideByZeroException();
    }
    for(size_t i = 0; i < scores.size(); i++){
        avg += scores.at(i);
    }
    return (avg / scores.size());
}

int main(){
    std::ifstream in_file;
    std::string answerKey;
    std::string currentStudentName;
    std::string currentStudentChoices;
    std::vector<int> allStudentScores;

    //Saving default cout stream
    std::ios init(NULL);
    init.copyfmt(std::cout);

    //Opening file    
    in_file.open("..//responses.txt");

    //Checking if file was opened correctly
    if(!in_file){
        std::cerr << "Opening Error" << std::endl; 
        return -1;
    } 

    //Updating answer key
    in_file >> answerKey;

    std::cout << "Student" << std::setw(13) << std::right << "Score" << std::endl;
    std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;

    //Reseting cout stream b/c of the setfill
    std::cout.copyfmt(init);

    while(!in_file.eof()){
        in_file >> currentStudentName >> currentStudentChoices;

        changeToValidName(currentStudentName);

        int score = checkAnswers(answerKey, currentStudentChoices);
        allStudentScores.push_back(score);

        std::cout << currentStudentName << std::setw(11) << std::right << score << std::endl;
    }

    std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;

    //Reseting cout stream b/c of the setfill
    std::cout.copyfmt(init);

    try{
        double avg = calculateAvg(allStudentScores);
        std::cout << "Average Score:" << std::setw(5) << std::right << std::fixed << std::setprecision(2) << avg << std::endl;
    }

    catch(const DivideByZeroException &error){
        std::cerr << "Error: Undefinded Value. Can't Divide by Zero" << std::endl;
    }

    in_file.close();

}
