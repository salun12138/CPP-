//
// Created by dell on 2024/6/5.
//

#ifndef CHACPTER10_MOVE_H
#define CHACPTER10_MOVE_H


class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showMove() const;
    Move add(const Move & m) const;
    void reset(double a = 0, double b = 0);
};


#endif //CHACPTER10_MOVE_H
