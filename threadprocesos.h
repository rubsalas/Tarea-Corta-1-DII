#ifndef THREADPROCESOS_H
#define THREADPROCESOS_H

#include <QThread>

class ThreadProcesos : public QThread
{
    Q_OBJECT
public:
    explicit ThreadProcesos(QObject *parent = 0);
signals:
    void boolFinish(bool);
protected:
    void run();
};

#endif // THREADPROCESOS_H
