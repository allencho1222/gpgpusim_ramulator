include ../../common/make.config

CC := $(CUDA_DIR)/bin/nvcc --cudart shared

INCLUDE := $(CUDA_DIR)/include

SRC = gaussian.cu
EXE = gaussian.exe

release: $(SRC)
	$(CC) $(KERNEL_DIM) $(SRC) -o $(EXE) -I$(INCLUDE) -L$(CUDA_LIB_DIR) 

clean:
	rm *.exe
