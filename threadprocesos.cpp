#include "threadprocesos.h"

ThreadProcesos::ThreadProcesos(QObject *parent)
    : QThread(parent)
{

}

void ThreadProcesos::run(){
    bool finish = false;
    while(!finish) {
        emit boolFinish(finish);
    }
}

