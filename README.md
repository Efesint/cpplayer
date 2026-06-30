#WARNING
it's only 1.0,I wrote this in about an hour and will write a few more functions soon.
please, use pipewire. 

~~~
_______  _____   _____         _______ __   __ _______  ______
|       |_____] |_____] |      |_____|   |_/   |______ |_____/
|_____  |       |       |_____ |     |    |    |______ |    |_
~~~
## Installation
1. clone the repository
~~~
https://github.com/Efesint/cpplayer
~~~
2. download the library
~~~
sudo apt-get install libsfml-dev
~~~
3. compile the cpplayer
~~~
g++ cpplayer.cpp -o cpplayer -lsfml-audio -lsfml-system -DSFML_USE_PULSEAUDIO
~~~
4. have fun
~~~
./cpplayer
~~~
