#include <iostream>
#include <string>

//------------------------------------------
// Template abstract class
//------------------------------------------
class ModelLearner {
protected:
    virtual void load_data(const std::string& path) = 0;
    virtual void preprocess_data() = 0;
    virtual void train_model() = 0;
    virtual void validate_model() = 0;
    virtual void save_model() {
        std::cout << "[ModelLearner] Saving model...\n";
    }

public:
    virtual void train_model_pipeline(const std::string& path) final {
        load_data(path);
        preprocess_data();
        train_model();
        validate_model();
        save_model();
    }

    virtual ~ModelLearner() = default;
};

//------------------------------------------
// Concrete classes
//------------------------------------------
class DecisionTreeLearner : public ModelLearner {
protected:
    void load_data(const std::string& path) override {
        std::cout << "[DecisionTreeLearner] Loading data...\n";
    }

    void preprocess_data() override {
        std::cout << "[DecisionTreeLearner] Preprocessing data...\n";
    }

    void train_model() override {
        std::cout << "[DecisionTreeLearner] Training model...\n";
    }

    void validate_model() override {
        std::cout << "[DecisionTreeLearner] Validating model...\n";
    }
};

class NNLearner : public ModelLearner {
protected:
    void load_data(const std::string& path) override {
        std::cout << "[NNLearner] Loading data...\n";
    }

    void preprocess_data() override {
        std::cout << "[NNLearner] Preprocessing data...\n";
    }

    void train_model() override {
        std::cout << "[NNLearner] Training model...\n";
    }

    void validate_model() override {
        std::cout << "[NNLearner] Validating model...\n";
    }

    void save_model() override {
        std::cout << "[NNLearner] Saving model...\n";
    }
};


//------------------------------------------
// Client
//------------------------------------------

int main() {
    DecisionTreeLearner* d_learner = new DecisionTreeLearner();
    NNLearner* n_learner = new NNLearner();

    std::cout << "----Training Decision Tree Learner----\n";
    d_learner->train_model_pipeline("DTDataPath");

    std::cout << "--------------------------------------\n";

    std::cout << "---------Training NN Learner----------\n";
    n_learner->train_model_pipeline("NNDataPath");

    delete(d_learner);
    delete(n_learner);
}
