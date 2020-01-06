#makefile

include ../../common/make.config

CC := $(CUDA_DIR)/bin/nvcc --cudart shared

INCLUDE := $(CUDA_DIR)/include

all: naive.exe float.exe

naive.exe: ex_particle_CUDA_naive_seq.cu
	$(CC) -I$(INCLUDE) -L$(CUDA_LIB_DIR) -lcuda -g -lm -O3 -use_fast_math -arch sm_60 ex_particle_CUDA_naive_seq.cu -o naive.exe
	
float.exe: ex_particle_CUDA_float_seq.cu
	$(CC) -I$(INCLUDE) -L$(CUDA_LIB_DIR) -lcuda -g -lm -O3 -use_fast_math -arch sm_60 ex_particle_CUDA_float_seq.cu -o float.exe

clean:
	rm -rf naive.exe float.exe
