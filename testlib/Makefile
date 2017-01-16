CC=clang++

all:m

libbb.so: libbb/bb.cpp
	${CC} -fPIC -shared  -o libbb.so.1 libbb/bb.cpp
	rm libbb.so -f
	ln -s libbb.so.1 libbb.so
libb.so: libb/b.cpp
	${CC} -fPIC -shared  -o libb.so.1 libb/b.cpp
	rm -f libb.so -f
	ln -s libb.so.1 libb.so

m: test.cpp libbb.so libb.so
	${CC} -o m test.cpp -L. -lbb -lb

clean:
	rm -f libbb.so  libbb.so.1 libb.so.1 libb.so m
