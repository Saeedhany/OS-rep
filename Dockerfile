FROM alpine:latest

WORKDIR /app

COPY main.cpp .

RUN apk add --update build-base

RUN g++ main.cpp -o app


