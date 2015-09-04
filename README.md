# cpp11lib
utility library using ++11

Environment
===
- Windows(Visual Studio 2012)  
- MacOSX/iOS(Xcode)  
- Linux  

Feature List
===

- Minimal Logger with Milliseconds time
``` cpp
#define DEBUG_LOG(fmt,...)
```
``` cpp
DEBUG_LOG("abc[%d]", 5);
```
```
2015-09-05 00:06:15.288 -[cpp11libtest testLogger] [Line:37] abc[5]
```

- Float zero compare
``` cpp
bool IsZero(float val);
```
``` cpp
IsZero( (float)0.0000001 ) // true
```

License
===
MIT License
