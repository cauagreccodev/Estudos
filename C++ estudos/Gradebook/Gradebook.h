#include <string>
using std::string;

class Gradebook{
    public:
        Gradebook(string name);

        void setCourseName(string name);
        string getCourseName() const;
        
        void setCourseInstructorName(string name);
        string getCourseInstructorName() const;

        void displayMessage() const;
        void displayInstructorMessage()const;
    private:
        string courseName;
        string courseInstructor;
};