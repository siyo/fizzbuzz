exe    := fizzbuzz
source := fizzbuzz.c
obj    := $(subst .c,.o,$(source))

all : exe

exe : $(exe)

$(exe) : $(obj)

.PHONY : clean
clean:
	$(RM) $(obj) $(exe)