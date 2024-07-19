//
// Created by dell on 2024/6/21.
//

#ifndef CHACPTER13_CD_H
#define CHACPTER13_CD_H


class Cd {
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report () const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd {
private:
    char classic[100];
public:
    Classic(char * c, char * s1, char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    ~Classic() override;
    void Report () const override;
    Classic & operator=(const Classic & c);
};

#endif //CHACPTER13_CD_H
