#ifndef EQUATIONSSOLVER_EQUATION_H
#define EQUATIONSSOLVER_EQUATION_H
#include "main.h"
#include "expression.h"

class Equation {
public:
    Equation(std::string info);
    void removeParenthesis();
    void transpose();
    void combineLikeTerms();
    void getCoefficientToOne();
    std::string* getInfo();
private:
    void fgWrongEquation(std::string info);
    void fgNoLinearEquationInOne(std::string info);
    std::string _info;
    Expression* _leftExpression;
    Expression* _rightExpression;
};


#endif //EQUATIONSSOLVER_EQUATION_H
