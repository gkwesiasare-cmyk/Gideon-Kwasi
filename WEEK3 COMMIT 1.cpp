// file_handling.cpp
void saveStudentsToFile(const std::vector<Student>& students, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& student : students) {
        file << student.id << "," << student.name << "\n";
    }
}

void loadStudentsFromFile(std::vector<Student>& students, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        size_t pos = line.find(',');
        std::string id = line.substr(0, pos);
        std::string name = line.substr(pos + 1);
        students.push_back(Student(id, name));
    }
}
