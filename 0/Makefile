SOURCES := *.java

CLASSDIR := cls

built:
	make clean && make all && cd ./cls && java qgram 3 hello hellob

all:
	javac -d $(CLASSDIR) $(SOURCES)

clean:
	rm -f $(CLASSDIR)/*.class
