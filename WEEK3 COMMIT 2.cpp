// file_handling.cpp (continued)
void saveSessionsToFile(const std::vector<AttendanceSession>& sessions, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& session : sessions) {
        file << session.sessionID << "," << session.date << "\n";
        for (const auto& student : session.attendees) {
            file << student.id << "," << student.name << "\n";
        }
    }
}

void loadSessionsFromFile(std::vector<AttendanceSession>& sessions, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        size_t pos = line.find(',');
        std::string id = line.substr(0, pos);
        std::string date = line.substr(pos + 1);
        AttendanceSession session(id, date);
        // Load students into session
        sessions.push_back(session);
    }
}
