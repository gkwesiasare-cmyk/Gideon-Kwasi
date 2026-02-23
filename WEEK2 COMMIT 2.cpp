// main.cpp
int main() {
    std::vector<Student> students;
    std::vector<AttendanceSession> sessions;

    while (true) {
        std::cout << "1. Add Student\n2. View Students\n3. Create Session\n4. View Sessions\n5. Exit\n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            // Add student logic
        } else if (choice == 2) {
            // View students logic
        } else if (choice == 3) {
            std::string id, date;
            std::cin >> id >> date;
            sessions.emplace_back(id, date);
        } else if (choice == 4) {
            for (auto& session : sessions) {
                session.displaySession();
            }
        } else {
            break;
        }
    }
    return 0;
}
