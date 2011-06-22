#ifndef ELTEX_NV101_H
#define ELTEX_NV101_H

#include <QtCore/qglobal.h>
#include <QtCore/qurl.h>

#if defined(NV101_LIBRARY)
    # define NV101SHARED_EXPORT Q_DECL_EXPORT
#else
    # define NV101SHARED_EXPORT Q_DECL_IMPORT
#endif


class NV101SHARED_EXPORT NV101
{
public:
    NV101();
    ~NV101();

    static inline NV101* instance();

    //Control playback
    static void play(const QUrl& source);
    static void play();
    static void pause();
    static void stop();

private:
    static NV101* _self;
};

//======================================================

NV101* NV101::instance()
{
    return _self;
}

#endif // ELTEX_NV101_H
