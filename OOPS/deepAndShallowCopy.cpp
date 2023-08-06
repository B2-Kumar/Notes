class student {
    int age;
    char* name;
    public:
    student(int age, char* name){
        this->age = age;
        this->name = name;
    }
};

// deep copy
class student {
    int age;
    char* name;
    public:
    student(int age, char* name){
        this->age = age;
        this->name = new char[strlen(name) +1]; 
        strcopy(this->name, name);
    }
};