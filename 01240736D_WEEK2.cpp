// attendance_session.h
#include <string>
#include <vector>
#include "student.h"

class AttendanceSession {
public:
    std::string sessionID;
    std::string date;
    std::vector<Student> attendees;

    AttendanceSession(std::string id, std::string d) : sessionID(id), date(d) {}

    void addStudent(Student s) {
        attendees.push_back(s);
    }

    void displaySession() {
        std::cout << "Session ID: " << sessionID << ", Date: " << date << "\n";
        for (auto& student : attendees) {
            std::cout << "Student: " << student.name << "\n";
        }
    }
};
