// main.cpp (continued)
else if (choice == 4) { ;
    for (size_t i = 0; i < sessions.size(); i++) {
        std::cout << i+1 << ". Session " << sessions[i].sessionID << "\n";
    }
    int s;
    std::cin >> s;
    AttendanceSession& session = sessions[s-1];
    std::cout << "1. Add student to session\n2. Mark attendance\n";
    int opt;
    std::cin >> opt;
    if (opt == 1) {
        for (size_t i = 0; i < students.size(); i++) {
            std::cout << i+1 << ". " << students[i].name << "\n";
        }
        int st;
        std::cin >> st;
        session.addStudent(students[st-1]);
    } else if (opt == 2) {
        // Mark attendance logic
    }
}
