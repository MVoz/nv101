#include <QtCore/qcoreapplication.h>
#include <QtCore/qstringlist.h>

#include "fwconsole.h"

#include "nv101.h"

bool play(QObject* receiver, const QStringList& params, QString* errorString)
{
    if(params.size() > 2)
    {
        (*errorString) = "Invalid parameters list";
        return false;
    }

    if(params.size() == 1)
    {
        NV101::play(params.first());
    }
    else
    {
        NV101::play();
    }

    return true;
}

bool stop(QObject* receiver, const QStringList& params, QString* errorString)
{
    if(!params.isEmpty())
    {
        (*errorString) = "Invalid parameters list";
        return false;
    }

    NV101::stop();
    return true;
}

bool pause(QObject* receiver, const QStringList& params, QString* errorString)
{
    if(!params.isEmpty())
    {
        (*errorString) = "Invalid parameters list";
        return false;
    }

    NV101::pause();
    return true;
}

int main(int argc, char *argv[])
{
    NV101 deviceNV101;

    QCoreApplication a(argc, argv);

    FwConsole console;
    console.setReceiver(&a);

    console.addCommand("play", &play);
    console.addCommand("stop", &stop);
    console.addCommand("pause", &pause);

    console.interactiveMode("nv101");

    return 0;
}
