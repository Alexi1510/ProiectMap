
FROM gcc:latest
WORKDIR /usr/src/myapp
COPY problema.c .
RUN gcc -o myapp problema.c 
CMD ["./myapp"]