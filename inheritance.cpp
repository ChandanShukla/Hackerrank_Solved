#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
    
        Student(string firstName, string lastName, int id,vector<int> scores):Person (firstName,lastName,id){
            
            for(auto i=scores.begin();i!=scores.end();i++){
                testScores.push_back(*i);
            }
        }
        char calculate(){
            int sum=0;
            char ch;
            int totalSubjects=testScores.size();
            double aggregate;
            for(int i=0;i<totalSubjects;i++){
                sum+=testScores[i];
            }
            aggregate=double(sum)/double(totalSubjects);
            if(aggregate>=90 and aggregate<=100){
                ch='O';
                return ch;
            }
            else if(aggregate>=80 and aggregate<90){
                ch='E';
                return ch;
            }
            else if(aggregate>=70 and aggregate<80){
                ch='A';
                return ch;
            }
            else if(aggregate>=55 and aggregate<70){
                ch='P';
                return ch;
            }
            else if(aggregate>=40 and aggregate<50){
                ch='D';
                return ch;
            }
            else if(aggregate<40){
                ch='T';
                return ch;
            }

        }
        
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}