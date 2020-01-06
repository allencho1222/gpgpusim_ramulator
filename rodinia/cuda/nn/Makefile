include ../../common/make.config

LOCAL_CC = gcc -g -O3 -Wall
CC := $(CUDA_DIR)/bin/nvcc --cudart shared

all : nn.exe hurricane_gen.exe

clean :
	rm -rf *.o nn.exe hurricane_gen.exe

nn.exe : nn_cuda.cu
	$(CC) -cuda nn_cuda.cu
	$(CC) -o nn.exe nn_cuda.cu

clang: $(SRC)
	clang++ nn_cuda.cu -o nn -I../util --cuda-gpu-arch=sm_60 \
		-L/usr/local/cuda/lib64 -lcudart_static -ldl -lrt -pthread -DTIMING

hurricane_gen.exe : hurricane_gen.c
	$(LOCAL_CC) -o $@ $< -lm

#data :
#	mkdir data
#	./gen_dataset.sh
