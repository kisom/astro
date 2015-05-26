CXXFLAGS =	-Wall -Werror -I. -static
LDFLAGS +=	-L. -lorbmech

TARGETS =	liborbmech.a	\
		altitude	\
		apogee		\
	      	eccentricity	\
		period		\
		georadius	\
		ucm		\
		velocity
INCLUDE =	orbmech

all: $(TARGETS)

liborbmech.a: orbmech.cc $(INCLUDE)/orbmech.h
	$(CXX) $(CXXFLAGS) -static -c orbmech.cc
	ar -rcs $@ orbmech.o

.PHONY: clean
clean:
	rm -f $(TARGETS) *.o

altitude: liborbmech.a altitude.cc
	$(CXX) $(CXXFLAGS) -o $@ altitude.cc $(LDFLAGS)

apogee: liborbmech.a apogee.cc
	$(CXX) $(CXXFLAGS) -o $@ apogee.cc $(LDFLAGS)

eccentricity: liborbmech.a eccentricity.cc
	$(CXX) $(CXXFLAGS) -o $@ eccentricity.cc $(LDFLAGS)

period: liborbmech.a period.cc
	$(CXX) $(CXXFLAGS) -o $@ period.cc $(LDFLAGS)

ucm: liborbmech.a ucm.cc
	$(CXX) $(CXXFLAGS) -o $@ ucm.cc $(LDFLAGS)

georadius: liborbmech.a georadius.cc
	$(CXX) $(CXXFLAGS) -o $@ georadius.cc $(LDFLAGS)

velocity: liborbmech.a velocity.cc
	$(CXX) $(CXXFLAGS) -o $@ velocity.cc $(LDFLAGS)

