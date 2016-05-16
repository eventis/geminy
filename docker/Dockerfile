FROM gcc:4.9

MAINTAINER Munteanu Ion <imuntean@redhat.com>

USER root

COPY . /usr/src/geminy
WORKDIR /usr/src/geminy

RUN gcc -o geminy main.c

CMD ["./geminy"]

