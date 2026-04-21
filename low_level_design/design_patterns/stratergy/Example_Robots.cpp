#include <iostream>


//------------------------------------------
// Stratergy interfaces + concrete classes
//------------------------------------------
// Behaviour1
class Talkable {
public:
    virtual void talk() = 0;
    virtual ~Talkable() = default;
};

class Talk1 : public Talkable {
public:
    void talk() override {
        std::cout << "Robot said \"beep beep\"\n";
    }
};

class Talk2 : public Talkable {
public:
    void talk() override {
        std::cout << "Robot said \"beep boop\"\n";
    }
};

class Talk3 : public Talkable {
public:
    void talk() override {
        std::cout << "Robot said \"boop boop\"\n";
    }
};


//------------------------------------------
//Behaviour2

class Walkable{
public:
    virtual void walk(int steps) = 0;
    virtual ~Walkable() = default;
};

class LeftWalk : public Walkable {
public:
    void walk(int steps) override {
        std::cout << "Walking " << steps << " steps left\n";
    }
};

class UpWalk : public Walkable {
public:
    void walk(int steps) override {
        std::cout << "Walking " << steps << " steps up, 1 left\n";
    }
};

//------------------------------------------
//Behaviour3

class Flyable {
public:
    virtual void fly() = 0;
    virtual ~Flyable() = default;
};

class WingsFly : public Flyable {
public:
    void fly() override {
        std::cout << "Flying with wings\n";
    }
};

class JetFly : public Flyable {
public:
    void fly() override {
        std::cout << "Flying with jet propulsion\n";
    }
};


//------------------------------------------
// Stratergy Context
//------------------------------------------
class Robot {
protected:
    Walkable* w;
    Talkable* t;
    Flyable*  f;

public:
    Robot(Talkable* talk, Walkable* walk, Flyable* fly) {
        this->w = walk;
        this->t = talk;
        this->f = fly;
    }

    void walk(int steps) {
        w->walk(steps);
    }

    void talk() {
        t->talk();
    }

    void fly() {
        f->fly();
    }

    virtual void projection() = 0;
};


//------------------------------------------
// Concrete classes
//------------------------------------------

class CompanioinRobot : public Robot {
public:
    CompanioinRobot(Talkable* t, Walkable* w, Flyable* f) : Robot(t, w, f) {}

    void projection() override {
        std::cout << "Projecting companion robot\n";
    }
};

class WorkerRobot : public Robot {
public:
    WorkerRobot(Talkable* t, Walkable* w, Flyable* f) : Robot(t, w, f) {}

    void projection() override {
        std::cout << "Projecting worker robot\n";
    }
};

//------------------------------------------
// Client
//------------------------------------------

int main() {
    Robot* r1 = new CompanioinRobot(new Talk1(), new LeftWalk(), new WingsFly());
    std::cout << "Companion Robot:\n";
    r1->talk();
    r1->walk(5);
    r1->fly();
    r1->projection();

    std::cout << "------------------------------------------\n";

    Robot* r2 = new WorkerRobot(new Talk2(), new UpWalk(), new JetFly());
    std::cout << "Worker Robot:\n";
    r2->talk();
    r2->walk(10);
    r2->fly();
    r2->projection();
}

