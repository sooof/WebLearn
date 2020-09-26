FROM debian:jessie
MAINTAINER Ralf-Philipp Weinmann <ralf@comsecuris.com>
RUN apt-get update && apt-get upgrade -y 
RUN apt-get install -y build-essential pkg-config autoconf automake git libfftw3-dev cmake 
RUN apt-get install -y sudo vim-tiny screen
# UHD build deps
RUN apt-get install -y tar apt-utils python2.7 python-mako python-cheetah libboost-all-dev libusb-1.0-0-dev doxygen libudev-dev libncurses-dev libgps-dev

# Add user
RUN useradd -c 'User' -G sudo -s /bin/bash -m -g users user

# Don't require password for sudo
RUN perl -i -pe 's/(%sudo.*) ALL/\1 NOPASSWD: ALL/' /etc/sudoers

RUN mkdir /home/user/src

WORKDIR /home/user/src

ADD https://github.com/EttusResearch/uhd/archive/release_003_008_005.tar.gz ./
RUN tar xzf release_003_008_005.tar.gz && rm release_003_008_005.tar.gz
RUN mv uhd-release_003_008_005 uhd
WORKDIR /home/user/src/uhd
RUN  mkdir host/build
WORKDIR /home/user/src/uhd/host/build
RUN cmake .. && make -j8 install && ldconfig
WORKDIR /home/user
