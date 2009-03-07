lib := libfizzbuzz.a
src := fizzbuzz.c
obj := $(subst .c,.o,$(src))

app     := fizzbuzz
app_src :=  main.c
app_obj := $(subst .c,.o,$(app_src))

tester   := test_fizzbuzz
test_src := test_fizzbuzz.c
test_obj := $(subst .c,.o,$(test_src))

objs :=  $(obj) $(app_obj) $(test_obj)

all : $(app) $(lib)

$(app) : $(app_obj) $(lib)

$(lib) : $(obj)
	$(AR) $(ARFLAGS) $@ $?

.PHONY : check
check: $(tester)
	$(PWD)/$(tester)

$(tester) : LDLIBS += -lcunit
$(tester) : $(test_obj) $(lib)

.PHONY : clean
clean:
	$(RM) $(objs) $(lib) $(app) $(tester)