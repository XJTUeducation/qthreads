#ifndef QT_LOCKS_H
#define QT_LOCKS_H

#include <qt_shepherd_innards.h>

typedef struct qthread_lock_s qthread_lock_t;
struct qthread_queue_s {
    qthread_t          *head;
    qthread_t          *tail;
    pthread_mutex_t     lock;
    pthread_cond_t      notempty;
};

void INTERNAL qt_lock_subsystem_init(void);

#endif // ifndef QT_LOCKS_H
/* vim:set expandtab: */
