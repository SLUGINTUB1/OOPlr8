#include "lib.h"
#include <typeinfo>
#include <iostream>
#include <fstream>


void Entrance_exams::basetoFile(size_t t, const char* file_path) {
    // Open a binary file for writing
    FILE* f = fopen(file_path, "w");

    std::ofstream wf(file_path);
    if (!wf) {
        //������� 1: ��������� ������� ����
        throw std::runtime_error("Cannot open file!");
    }
    wf.write((char*)this, t);
    wf.close();
    if (!wf.good()) {
        //������� 2: ������� ������ � ����
        throw std::runtime_error("Error occurred at writing time!");
    }
}
void Entrance_exams::basefromFile(size_t t, const char* file_path) {
    std::ifstream rf(file_path);
    if (!rf) {
        //������� 3: ��������� ������� ����
        throw std::runtime_error("Cannot open file!");
    }

    rf.read((char*)this, t);
    rf.close();
    if (!rf.good()) {
        //������� 4: ��������� ��������� ����
        throw std::runtime_error("Error occurred at reading time!");
    }
}

void Mark::toFile() {
    basetoFile(sizeof(Mark), "indo.txt");
}

void Mark::toFile(const char* file_path) {
    basetoFile(sizeof(Mark), file_path);
}

void Mark::fromFile() {
    basefromFile(sizeof(Mark), "indo.txt");
}

void Mark::fromFile(const char* file_path) {
    basefromFile(sizeof(Mark), file_path);
}

void Exam::toFile() {
    basetoFile(sizeof(Exam), "indo.txt");
}

void Exam::toFile(const char* file_path) {
    basetoFile(sizeof(Exam), file_path);
}

void Exam::fromFile() {
    basefromFile(sizeof(Exam), "indo.txt");
}

void Exam::fromFile(const char* file_path) {
    basefromFile(sizeof(Exam), file_path);
}

void Applicant::toFile() {
    basetoFile(sizeof(Applicant), "indo.txt");
}

void Applicant::toFile(const char* file_path) {
    basetoFile(sizeof(Applicant), file_path);
}

void Applicant::fromFile() {
    basefromFile(sizeof(Applicant), "indo.txt");
}

void Applicant::fromFile(const char* file_path) {
    basefromFile(sizeof(Applicant), file_path);
}

void Teacher::toFile() {
    basetoFile(sizeof(Teacher), "indo.txt");
}

void Teacher::toFile(const char* file_path) {
    basetoFile(sizeof(Teacher), file_path);
}

void Teacher::fromFile() {
    basefromFile(sizeof(Teacher), "indo.txt");
}

void Teacher::fromFile(const char* file_path) {
    basefromFile(sizeof(Teacher), file_path);
}

void Rector::toFile() {
    basetoFile(sizeof(Rector), "indo.txt");
}

void Rector::toFile(const char* file_path) {
    basetoFile(sizeof(Rector), file_path);
}

void Rector::fromFile() {
    basefromFile(sizeof(Rector), "indo.txt");
}

void Rector::fromFile(const char* file_path) {
    basefromFile(sizeof(Rector), file_path);
}

void Guardian::toFile() {
    basetoFile(sizeof(Guardian), "indo.txt");
}

void Guardian::toFile(const char* file_path) {
    basetoFile(sizeof(Guardian), file_path);
}

void Guardian::fromFile() {
    basefromFile(sizeof(Guardian), "indo.txt");
}

void Guardian::fromFile(const char* file_path) {
    basefromFile(sizeof(Guardian), file_path);
}

void Cleaner::toFile() {
    basetoFile(sizeof(Cleaner), "indo.txt");
}

void Cleaner::toFile(const char* file_path) {
    basetoFile(sizeof(Cleaner), file_path);
}

void Cleaner::fromFile() {
    basefromFile(sizeof(Cleaner), "indo.txt");
}

void Cleaner::fromFile(const char* file_path) {
    basefromFile(sizeof(Cleaner), file_path);
}

void Faculty::toFile() {
    basetoFile(sizeof(Faculty), "indo.txt");
}

void Faculty::toFile(const char* file_path) {
    basetoFile(sizeof(Faculty), file_path);
}

void Faculty::fromFile() {
    basefromFile(sizeof(Faculty), "indo.txt");
}

void Faculty::fromFile(const char* file_path) {
    basefromFile(sizeof(Faculty), file_path);
}

Entrance_exams::Entrance_exams() {
    std::cout << "Entrance_exams constractor" << std::endl;
}
Entrance_exams::~Entrance_exams() {
    std::cout << "Entrance_exams destractor" << std::endl;
}



Mark::Mark() :value(0), subjectID(0), day(1), month(1), year(2000), evaluated(false), passed(false), teacher("") { std::cout << "Mark constractor" << std::endl; }

Mark::Mark(int _subjectID, int _day, int _month, int _year) :value(0), evaluated(false), passed(false), teacher("") {
    subjectID = _subjectID;
    day = _day;
    month = _month;
    year = _year;
    std::cout << "Mark constractor" << std::endl;
}

Mark::Mark(const Mark& a) :value(0) {
    value = a.value;
    subjectID = a.subjectID;
    day = a.day;
    month = a.month;
    year = a.year;
    evaluated = a.evaluated;
    passed = a.passed;
    strncpy(teacher, a.teacher, sizeof(teacher) - 1);
    std::cout << "Mark constractor" << std::endl;
}

Mark::~Mark() {
    std::cout << "Mark destractor" << std::endl;
}

// ������
void Mark::setvalue(int _value) {
    value = _value;
}

void Mark::setsubjectID(int _subjectID) {
    subjectID = _subjectID;
}

void Mark::setday(int _day) {
    day = _day;
}

void Mark::setmonth(int _month) {
    month = _month;
}

void Mark::setyear(int _year) {
    year = _year;
}

// ������
int Mark::getvalue() {
    return value;
}

int Mark::getsubjectID() {
    return subjectID;
}

int Mark::getday() {
    return day;
}

int Mark::getmonth() {
    return month;
}

int Mark::getyear() {
    return year;
}

void Mark::Copy(Mark a) {
    value = a.value;
    subjectID = a.subjectID;
    day = a.day;
    month = a.month;
    year = a.year;
    evaluated = a.evaluated;
    passed = a.passed;
    strncpy(teacher, a.teacher, sizeof(teacher) - 1);
}



Exam::Exam() :mathematics(Mark()), physics(Mark()), chemistry(Mark()), history(Mark()), literature(Mark()), geography(Mark()), computerScience(Mark()), total_value(0) { std::cout << "Exam constractor" << std::endl; }

Exam::Exam(int _day, int _month, int _year) {
    mathematics = Mark(1, _day, _month, _year);
    physics = Mark(2, _day, _month, _year);
    chemistry = Mark(3, _day, _month, _year);
    history = Mark(4, _day, _month, _year);
    literature = Mark(5, _day, _month, _year);
    geography = Mark(6, _day, _month, _year);
    computerScience = Mark(7, _day, _month, _year);
    total_value = 0;
    std::cout << "Exam constractor" << std::endl;
}

Exam::Exam(const Exam& a) {
    mathematics = a.mathematics;
    physics = a.physics;
    chemistry = a.chemistry;
    history = a.history;
    literature = a.literature;
    geography = a.geography;
    computerScience = a.computerScience;
    calculate_total_value();
    std::cout << "Exam constractor" << std::endl;
}
Exam::~Exam() {
    std::cout << "Exam destractor" << std::endl;
}

// ������
void Exam::setMathematics(Mark grade) {
    mathematics.Copy(grade);
}

void Exam::setPhysics(Mark grade) {
    physics.Copy(grade);
}

void Exam::setChemistry(Mark grade) {
    chemistry.Copy(grade);
}

void Exam::setHistory(Mark grade) {
    history.Copy(grade);
}

void Exam::setLiterature(Mark grade) {
    literature.Copy(grade);
}

// ������
Mark Exam::getMathematics() {
    return mathematics;
}

Mark Exam::getPhysics() {
    return physics;
}

Mark Exam::getChemistry() {
    return chemistry;
}

Mark Exam::getHistory() {
    return history;
}

Mark Exam::getLiterature() {
    return literature;
}

void Exam::calculate_total_value() {
    total_value = (mathematics.getvalue() + physics.getvalue() + chemistry.getvalue() + history.getvalue() + literature.getvalue() + geography.getvalue() + computerScience.getvalue()) / 7;
}

void Exam::Copy(Exam a) {
    mathematics.Copy(a.getMathematics());
    physics.Copy(a.getPhysics());
    chemistry.Copy(a.getChemistry());
    history.Copy(a.getHistory());
    literature.Copy(a.getLiterature());
    geography = a.geography;
    computerScience = a.computerScience;
    calculate_total_value();
}

void Applicant::Copy(Person& a)
{
    if (typeid(a) == typeid(Applicant)) {
        strncpy(first_name, a.getFirstName(), sizeof(first_name) - 1);
        strncpy(last_name, a.getLastName(), sizeof(last_name) - 1);
        strncpy(father_name, a.getFatherName(), sizeof(father_name) - 1);
        gender = a.getGender();
        strncpy(email, a.email, sizeof(email) - 1);
        strncpy(phone_number, a.phone_number, sizeof(phone_number) - 1);

        Applicant* applicant = dynamic_cast<Applicant*>(&a);
        exam_score.Copy(applicant->exam_score);
        delete applicant;
    }
    else {
        std::cout << "wrong input class" << std::endl;
    }
}

Person::Person() : first_name(""), last_name(""), father_name(""), gender(true), email(""), phone_number("") { std::cout << "Person constractor" << std::endl; }

Person::Person(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number) {
    strncpy(first_name, _first_name, sizeof(first_name) - 1);
    strncpy(last_name, _last_name, sizeof(last_name) - 1);
    strncpy(father_name, _father_name, sizeof(father_name) - 1);
    gender = _gender;
    strncpy(email, _email, sizeof(email) - 1);
    strncpy(phone_number, _phone_number, sizeof(phone_number) - 1);
    std::cout << "Person constractor" << std::endl;
}

Person::Person(Person& _person) {
    strncpy(first_name, _person.getFirstName(), sizeof(first_name) - 1);
    strncpy(last_name, _person.getLastName(), sizeof(last_name) - 1);
    strncpy(father_name, _person.getFatherName(), sizeof(father_name) - 1);
    gender = _person.getGender();
    strncpy(email, _person.email, sizeof(email) - 1);
    strncpy(phone_number, _person.phone_number, sizeof(phone_number) - 1);
    std::cout << "Person constractor" << std::endl;
}
Person::~Person() {
    std::cout << "Person destractor" << std::endl;
}

// ������
void Person::setFirstName(const char* _first_name) {
    strncpy(first_name, _first_name, sizeof(first_name) - 1);
}

void Person::setLastName(const char* _last_name) {
    strncpy(last_name, _last_name, sizeof(last_name) - 1);
}

void Person::setFatherName(const char* _father_name) {
    strncpy(father_name, _father_name, sizeof(father_name) - 1);
}

void Person::setGender(bool _gender) {
    gender = _gender;
}

// ������ 
char* Person::getFirstName() {
    return first_name;
}

char* Person::getLastName() {
    return last_name;
}

char* Person::getFatherName() {
    return father_name;
}

bool Person::getGender() {
    return gender;
}

void Person::changeGender() {
    gender = !gender;
}

void Person::clearEmail() {
    strncpy(email, "", sizeof(email) - 1);
}

void Person::clearPhone_number() {
    strncpy(phone_number, "", sizeof(phone_number) - 1);
}




Applicant::Applicant() :Person() {
    std::cout << "Applicant constractor" << std::endl;
}

Applicant::Applicant(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number) : Person(_first_name, _last_name, _father_name, _gender, _email, _phone_number) {
    std::cout << "Applicant constractor" << std::endl;
}

Applicant::Applicant(const Applicant& a) {
    strncpy(first_name, a.first_name, sizeof(first_name) - 1);
    strncpy(last_name, a.last_name, sizeof(last_name) - 1);
    strncpy(father_name, a.father_name, sizeof(father_name) - 1);
    gender = a.gender;
    strncpy(email, a.email, sizeof(email) - 1);
    strncpy(phone_number, a.phone_number, sizeof(phone_number) - 1);
    std::cout << "Applicant constractor" << std::endl;
}
Applicant::~Applicant() {
    std::cout << "Applicant destractor" << std::endl;
}




Teacher::Teacher() :Person() {
    subjectID = 0;
    std::cout << "Teacher constractor" << std::endl;
}

Teacher::Teacher(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number, int _subjectID) :Person(_first_name, _last_name, _father_name, _gender, _email, _phone_number) {
    subjectID = _subjectID;
    std::cout << "Teacher constractor" << std::endl;
}

Teacher::Teacher(const Teacher& _teacher) {
    strncpy(first_name, _teacher.first_name, sizeof(first_name) - 1);
    strncpy(last_name, _teacher.last_name, sizeof(last_name) - 1);
    strncpy(father_name, _teacher.father_name, sizeof(father_name) - 1);
    gender = _teacher.gender;
    strncpy(email, _teacher.email, sizeof(email) - 1);
    strncpy(phone_number, _teacher.phone_number, sizeof(phone_number) - 1);
    subjectID = _teacher.subjectID;
    std::cout << "Teacher constractor" << std::endl;
}
Teacher::~Teacher() {
    std::cout << "Teacher destractor" << std::endl;
}
void Teacher::evaluation(Mark _mark, int valule) {
    if (subjectID = _mark.getsubjectID())
        _mark.setvalue(valule);
}

void Teacher::evaluation(Exam _exam, int valule) {
    evaluation(_exam.getMathematics(), valule);
    evaluation(_exam.getPhysics(), valule);
    evaluation(_exam.getChemistry(), valule);
    evaluation(_exam.getHistory(), valule);
    evaluation(_exam.getLiterature(), valule);
    evaluation(_exam.geography, valule);
    evaluation(_exam.computerScience, valule);
    _exam.calculate_total_value();
}

void Teacher::evaluation(Applicant _applicant, int valule) {
    evaluation(_applicant.exam_score, valule);
}

void Teacher::Copy(Person& a) {
    if (typeid(a) == typeid(Teacher)) {
        strncpy(first_name, a.getFirstName(), sizeof(first_name) - 1);
        strncpy(last_name, a.getLastName(), sizeof(last_name) - 1);
        strncpy(father_name, a.getFatherName(), sizeof(father_name) - 1);
        gender = a.getGender();
        strncpy(email, a.email, sizeof(email) - 1);
        strncpy(phone_number, a.phone_number, sizeof(phone_number) - 1);

        Teacher* teacher = dynamic_cast<Teacher*>(&a);
        subjectID = teacher->subjectID;
        delete teacher;
    }
    else {
        std::cout << "wrong input class" << std::endl;
    }
}

Rector::Rector() :Person() { std::cout << "Rector constractor" << std::endl; };
Rector::Rector(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number) :Person(_first_name, _last_name, _father_name, _gender, _email, _phone_number) { std::cout << "Rector constractor" << std::endl; };
Rector::Rector(Rector& _rector) :Person(_rector) { std::cout << "Rector constractor" << std::endl; };
Rector::~Rector() { std::cout << "Rector destractor" << std::endl; };
void Rector::Copy(Person& a) {
    if (typeid(a) == typeid(Rector)) {
        strncpy(first_name, a.getFirstName(), sizeof(first_name) - 1);
        strncpy(last_name, a.getLastName(), sizeof(last_name) - 1);
        strncpy(father_name, a.getFatherName(), sizeof(father_name) - 1);
        gender = a.getGender();
        strncpy(email, a.email, sizeof(email) - 1);
        strncpy(phone_number, a.phone_number, sizeof(phone_number) - 1);
    }
    else {
        std::cout << "wrong input class" << std::endl;
    }
};
void Rector::exercisesPolicyMaking() { std::cout << "do Rector stuff" << std::endl; }

Guardian::Guardian() :Person() { std::cout << "Guardian constractor" << std::endl; };
Guardian::Guardian(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number) :Person(_first_name, _last_name, _father_name, _gender, _email, _phone_number) { std::cout << "Guardian constractor" << std::endl; };
Guardian::Guardian(Guardian& _guardian) :Person(_guardian) { std::cout << "Guardian constractor" << std::endl; };
Guardian::~Guardian() { std::cout << "Guardian destractor" << std::endl; };
void Guardian::Copy(Person& a) {
    if (typeid(a) == typeid(Guardian)) {
        strncpy(first_name, a.getFirstName(), sizeof(first_name) - 1);
        strncpy(last_name, a.getLastName(), sizeof(last_name) - 1);
        strncpy(father_name, a.getFatherName(), sizeof(father_name) - 1);
        gender = a.getGender();
        strncpy(email, a.email, sizeof(email) - 1);
        strncpy(phone_number, a.phone_number, sizeof(phone_number) - 1);
    }
    else {
        std::cout << "wrong input class" << std::endl;
    }
};
void Guardian::guard() { std::cout << "guard" << std::endl; }

Cleaner::Cleaner() :Person() { std::cout << "Cleaner constractor" << std::endl; };
Cleaner::Cleaner(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number) :Person(_first_name, _last_name, _father_name, _gender, _email, _phone_number) { std::cout << "Cleaner constractor" << std::endl; };
Cleaner::Cleaner(Cleaner& _cleaner) :Person(_cleaner) { std::cout << "Cleaner constractor" << std::endl; };
Cleaner::~Cleaner() { std::cout << "Cleaner destractor" << std::endl; };
void Cleaner::Copy(Person& a) {
    if (typeid(a) == typeid(Cleaner)) {
        strncpy(first_name, a.getFirstName(), sizeof(first_name) - 1);
        strncpy(last_name, a.getLastName(), sizeof(last_name) - 1);
        strncpy(father_name, a.getFatherName(), sizeof(father_name) - 1);
        gender = a.getGender();
        strncpy(email, a.email, sizeof(email) - 1);
        strncpy(phone_number, a.phone_number, sizeof(phone_number) - 1);
    }
    else {
        std::cout << "wrong input class" << std::endl;
    }
};
void Cleaner::clean() { std::cout << "clean" << std::endl; }

Lector::Lector() :Teacher() { std::cout << "Lector constractor" << std::endl; }

Lector::Lector(const char* _first_name, const char* _last_name, const char* _father_name, bool _gender, const char* _email, const char* _phone_number, int _subjectID) :Teacher(_first_name, _last_name, _father_name, _gender, _email, _phone_number, _subjectID) { std::cout << "Lector constractor" << std::endl; }

Lector::Lector(Teacher& _teacher) :Teacher(_teacher) { std::cout << "Lector constractor" << std::endl; }

Lector::~Lector() {
    std::cout << "Lector destractor" << std::endl;
}

int Lector::getSubjectID() {
    return subjectID;
}

void Lector::setSubjectID(int value) {
    subjectID = value;
}

void Lector::Copy(Teacher a) {
    Teacher::Copy(a);
}

char* Lector::getFirstName() {
    return first_name;
}

char* Lector::getLastName() {
    return last_name;
}

char* Lector::getFatherName() {
    return father_name;
}

bool Lector::getGender() {
    return gender;
}



Faculty::Faculty() : name(""), code(""), dean_first_name(""), dean_last_name(""), dean_father_name(""), foundation_year(0) {
    std::cout << "Faculty constractor" << std::endl;
}

Faculty::Faculty(const char* _name, const char* _code, const char* _dean_first_name, const char* _dean_last_name, const char* _dean_father_name, int _foundation_year) {
    strncpy(name, _name, sizeof(name) - 1);
    strncpy(code, _code, sizeof(code) - 1);
    strncpy(dean_first_name, _dean_first_name, sizeof(dean_first_name) - 1);
    strncpy(dean_last_name, _dean_last_name, sizeof(dean_last_name) - 1);
    strncpy(dean_father_name, _dean_father_name, sizeof(dean_father_name) - 1);
    foundation_year = _foundation_year;
    std::cout << "Faculty constractor" << std::endl;
}

Faculty::Faculty(const Faculty& _faculty) {
    strncpy(name, _faculty.name, sizeof(name) - 1);
    strncpy(code, _faculty.code, sizeof(code) - 1);
    strncpy(dean_first_name, _faculty.dean_first_name, sizeof(dean_first_name) - 1);
    strncpy(dean_last_name, _faculty.dean_last_name, sizeof(dean_last_name) - 1);
    strncpy(dean_father_name, _faculty.dean_father_name, sizeof(dean_father_name) - 1);
    foundation_year = _faculty.foundation_year;
    applicants = _faculty.applicants;
    teachers = _faculty.teachers;
    std::cout << "Faculty constractor" << std::endl;
}
Faculty::~Faculty() {
    std::cout << "Faculty destractor" << std::endl;
}

// ������
void Faculty::setName(const char* _name) {
    strncpy(name, _name, sizeof(name) - 1);
}

void Faculty::setCode(const char* _code) {
    strncpy(code, _code, sizeof(code) - 1);
}

void Faculty::setFoundationYear(int _foundation_year) {
    foundation_year = _foundation_year;
}

void Faculty::setApplicants(const std::vector<Applicant*> newVector) {
    applicants = newVector;
}

void Faculty::setTeachers(const std::vector<Teacher*> newVector) {
    teachers = newVector;
}

// ������ 
char* Faculty::getName() {
    return name;
}

char* Faculty::getCode() {
    return code;
}

int Faculty::getFoundationYear() {
    return foundation_year;
}

std::vector<Applicant*> Faculty::getApplicants() {
    return applicants;
}

std::vector<Teacher*> Faculty::getTeachers() {
    return teachers;
}

void Faculty::registration(Applicant* _applicant) {
    applicants.push_back(_applicant);
}

void Faculty::Copy(Faculty a) {
    strncpy(name, a.getName(), sizeof(name) - 1);
    strncpy(code, a.getCode(), sizeof(code) - 1);
    strncpy(dean_first_name, a.dean_first_name, sizeof(dean_first_name) - 1);
    strncpy(dean_last_name, a.dean_last_name, sizeof(dean_last_name) - 1);
    strncpy(dean_father_name, a.dean_father_name, sizeof(dean_father_name) - 1);
    foundation_year = a.getFoundationYear();
    applicants = a.applicants;
    teachers = a.teachers;
}

Faculty getdefaultFaculty() {
    return Faculty("KI", "001", "Petro", "Snijenko", "Sergijovich", 1700);;
}

A::A() :Applicant("", "", "", false, "", "") { std::cout << "A constractor" << std::endl; }
A::~A() { std::cout << "A destractor" << std::endl; }
B::B() :Teacher("", "", "", false, "", "", 1) { std::cout << "B constractor" << std::endl; }
B::~B() { std::cout << "B destractor" << std::endl; }
C::C() :Lector("", "", "", false, "", "", 2) { std::cout << "C constractor" << std::endl; }
C::~C() { std::cout << "C destractor" << std::endl; }
ABC::ABC() :A(), B(), C() { std::cout << "ABC constractor" << std::endl; }
ABC::~ABC() { std::cout << "ABC destractor" << std::endl; }

void displayData(const Exam& obj) {
    std::cout << obj.total_value << std::endl;
}
void displayData(const Exam* obj) {
    std::cout << obj->total_value << std::endl;
}

int Budy::howmany = 0;
void Budy::displayData(const Mark& obj) {
    std::cout << obj.value << std::endl;
    howmany++;
}
