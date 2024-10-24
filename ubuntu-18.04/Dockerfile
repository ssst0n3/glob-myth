FROM ubuntu:18.04

COPY glob.c /
RUN apt update && apt install -y build-essential
RUN gcc -o glob glob.c
RUN ln -s /not-exist/test.so test.so
CMD ./glob 
