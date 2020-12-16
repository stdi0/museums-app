all: build

build:
	docker build -t my-gcc-app .

run: clear
	docker run -it --name my-running-app my-gcc-app

clear:
	docker rm -f my-running-app