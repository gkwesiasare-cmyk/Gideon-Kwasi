void displayAllSessions(const std::vector<AttendanceSession>& sessions) {
    for (const auto& session : sessions) {
        session.displaySession();
    }
}
