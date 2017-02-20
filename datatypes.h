#ifndef DATATYPES_H
#define DATATYPES_H
#include <QDebug>
#endif // DATATYPES_H

class ClassLabel
{
public:
    //constractor
    ClassLabel(QString className, QString classId): _className(className), _classId(classId){}
    //getters
    QString getClassName() const{return _className;}
    QString getClassId() const{return _classId;}
    //setters
    void setClassName(QString val) {_className = val;}
    void setClassId(QString val) {_classId = val;}
    void Print()
    {
        qDebug() << _className;
        qDebug() << _classId;
    }

private:
    QString _className;
    QString _classId;
};

class Result
{
public:
    //constractor
    Result(QString imageName, QString truthLabel, QString predictLabel1, QString coefficient1,
           QString predictLabel2, QString coefficient2, QString predictLabel3, QString coefficient3):
            _imageName(imageName), _truthLabel(truthLabel), _predictLabel1(predictLabel1), _coefficient1(coefficient1)
            , _predictLabel2(predictLabel2), _coefficient2(coefficient2), _predictLabel3(predictLabel3), _coefficient3(coefficient3){}

    Result(){};
    //getters
    QString getImageName() const{return _imageName;}
    QString getTruthLabel() const{return _truthLabel;}
    QString getPredictLabel1() const{return _predictLabel1;}
    QString getcoefficient1() const{return _coefficient1;}
    QString getPredictLabel2() const{return _predictLabel2;}
    QString getcoefficient2() const{return _coefficient2;}
    QString getPredictLabel3() const{return _predictLabel3;}
    QString getcoefficient3() const{return _coefficient3;}
    //setters
    void setImageName(QString val) {_imageName= val;}
    void setTruthLabel(QString val) {_truthLabel = val;}
    void setPredictLabel1(QString val) {_predictLabel1= val;}
    void setcoefficient1(QString val) {_coefficient1= val;}
    void setPredictLabel2(QString val) {_predictLabel2= val;}
    void setcoefficient2(QString val) {_coefficient2= val;}
    void setPredictLabel3(QString val) {_predictLabel3= val;}
    void setcoefficient3(QString val) {_coefficient3= val;}
    void Print()
    {
        qDebug() << _imageName;
        qDebug() << _truthLabel;
        qDebug() << _predictLabel1;
        qDebug() << _coefficient1;
        qDebug() << _predictLabel2;
        qDebug() << _coefficient2;
        qDebug() << _predictLabel3;
        qDebug() << _coefficient3;
    }

private:
    QString _imageName;
    QString _truthLabel;
    QString _predictLabel1;
    QString _coefficient1;
    QString _predictLabel2;
    QString _coefficient2;
    QString _predictLabel3;
    QString _coefficient3;
};


