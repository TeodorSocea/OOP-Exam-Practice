class Person
{
    char *nume;
    char *varsta;
    float inaltime;

    int *note;
    int capacitate;
    int nr_note;
    float media;

public:
    Person(const char *, int, float);
    char *operator[](const char *);
    void addNote(int);
    operator int();
};