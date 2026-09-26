//
// Created by Jakob Mösenbacher on 26.09.26.
//

#include "DateAndTime.h"
#include <ctime>
#include <iostream>
#include <ostream>

int DateAndTime::time() {
    time_t timestamp;

    // :: tells functon to use globale C-Bibliotheks-Function!
    ::time(&timestamp);

    // Time since 1. Januar 1970 (00:00:00 UTC)
    std::cout << timestamp << std::endl;

    return 0;
}

int DateAndTime::timeNull() {
    time_t timestamp = ::time(NULL);
    std::cout << timestamp << std::endl;
    return 0;
}


int DateAndTime::timestamp() {
    struct tm datetime;
    time_t timestamp;

    datetime.tm_year = 2023 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    //Summertime
    datetime.tm_isdst = -1;

    timestamp = mktime(&datetime);

    std::cout << ctime(&timestamp) << std::endl;

    return 0;
}