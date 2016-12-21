
class Time {

 public:

  Time(); // Constructor

  static int
    second(int now),
    minute(int now),
    hour(int now),
    day(int now),
    weekday(int now),
    month(int now),
    year(int now),
    now(void);
  static char
    timeStr(int now);
};

int millis();
void delay(int millis);
