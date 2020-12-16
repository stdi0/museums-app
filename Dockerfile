FROM gcc:4.9
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN gcc -lstdc++ -I include/ -o myapp src/main.cpp src/actions.cpp src/menu.cpp src/museum.cpp src/utils.cpp
CMD ["./myapp"]