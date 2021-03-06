#pragma once

#include <string>
#include <pthread.h>

using std::string;

namespace HayComm {

    int HayLog(int iLevel, const char * pszFormat, ...);

    struct LogLevel {
        enum {
            LOG_INFO,
            LOG_FATAL,
            LOG_ERR,
            LOG_WARN,
            LOG_DBG,
        };
    };

    class Log {
    public:
        Log(const string & sLogDirPath="/tmp/haycomm/log");
        int SetLogDirPath(const string & sLogDirPath);
        int SetLogLevel(int iLevel);
        int log(int iLevel, const char * pszFormat, ...);
        virtual ~Log();

        static string GetDefaultLogFileName();
        static Log g_logger;

    private:
        Log(const Log & oOthLog);
        Log & operator=(const Log & oOthLog);
        void CloseLogFd();

    private:
        string m_sLogDirPath;
        string m_sLogFileName;
        int m_iLogFd;
        pthread_mutex_t m_tLock;
        int m_iLogLevel;
    };

    extern Log g_Logger;
}
