#include "time.h"
#include <unistd.h>
// #include <stdio.h>
// #include <emscripten.h>

Time::Time() {}

int Time::second(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getSeconds();
	}, now);
}

int Time::minute(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getMinutes();
	}, now);
}

int Time::hour(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getHours();
	}, now);
}

int Time::day(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getDate();
	}, now);
}

int Time::month(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getMonth();
	}, now);
}

int Time::year(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getYear();
	}, now);
}

int Time::weekday(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return d.getDay();
	}, now);
}

char Time::timeStr(int now = 0) {
  return EM_ASM_INT({
    var d = $0 ? new Date($0) : new Date();
    return 'test';
	}, now);
}

int Time::now() {
  return EM_ASM_INT_V({
    return Date.now();
	});
}

int startTime = Time::now();

int millis() {
  return Time::now() - startTime;
}

void delay(int millis) {
  sleep(millis / 1000);
}
