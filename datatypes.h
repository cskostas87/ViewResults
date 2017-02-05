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
    Result(QString imageName, QString truthLabel, QString predictLabel):
            _imageName(imageName), _truthLabel(truthLabel), _predictLabel(predictLabel){}
    //getters
    QString getImageName() const{return _imageName;}
    QString getTruthLabel() const{return _truthLabel;}
    QString getPredictLabel() const{return _predictLabel;}
    //setters
    void setImageName(QString val) {_imageName= val;}
    void setTruthLabel(QString val) {_truthLabel = val;}
    void setPredictLabel(QString val) {_predictLabel= val;}

    void Print()
    {
        qDebug() << _imageName;
        qDebug() << _truthLabel;
        qDebug() << _predictLabel;
    }

private:
    QString _imageName;
    QString _truthLabel;
    QString _predictLabel;
};


