#include <QtCore/qdebug.h>

#include "nv101.h"

NV101* NV101::_self = 0;

//======================================================

/*!
\class NV101
This class implements the interface for using the device Eltex NV-101.
For this class we using a singleton pattern.
*/

/*!
Default constructor for class. This function sets a _self pointer.
*/
NV101::NV101()
{
    if(!_self)
    {
        _self = this;
    }
}

NV101::~NV101()
{
    if(_self == this)
    {
        _self = 0;
    }
}

/*!
\fn NV101* NV101::instance();
\relates NV101
Returns a pointer to the application's NV101 instance.
If no instance has been allocated, null is returned.
*/

/*!
Starts playback the media data from the specified source.
\param source address of the resource
*/
void NV101::play(const QUrl& source)
{
    if(_self)
    {
        qDebug() << "Play source: " << source;
        ///TODO: Make support this function
    }
}

/*!
Starts playback of media data from the source after the pause()
function has been called.
\note This functions is not supported for stream media data
*/
void NV101::play()
{
    if(_self)
    {
        qDebug() << "Play... ";
        ///TODO: Make support this function
    }
}

/*!
Pauses the playback.
\note This functions is not supported for stream media data
*/
void NV101::pause()
{
    if(_self)
    {
        qDebug() << "Pause... ";
        ///TODO: Make support this function
    }
}


/*!
Stops the playback
*/
void NV101::stop()
{
    if(_self)
    {
        qDebug() << "Stop... ";
        ///TODO: Make support this function
    }
}

