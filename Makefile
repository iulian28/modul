obj-m+=modul.o

KERDIR ?= "/lib/modules/$(shell uname -r)/build"

all:
	make -C $(KERDIR) M=$(PWD) modules
clean:
	make -C $(KERDIR) M=$(PWD) clean

