include common/make.config

RODINIA_BASE_DIR := $(shell pwd)

CUDA_BIN_DIR := $(RODINIA_BASE_DIR)/bin

CUDA_DIRS := backprop bfs cfd gaussian heartwall hotspot kmeans lavaMD leukocyte lud nn	nw srad streamcluster particlefilter pathfinder mummergpu

all: CUDA

CUDA: 
	cd cuda/backprop;		make;	cp backprop.exe $(CUDA_BIN_DIR)
	cd cuda/bfs;			make;	cp bfs.exe $(CUDA_BIN_DIR)
	cd cuda/cfd;			make;	cp euler3d.exe euler3d_double.exe pre_euler3d.exe pre_euler3d_double.exe $(CUDA_BIN_DIR)
	cd cuda/gaussian;		make;	cp gaussian.exe $(CUDA_BIN_DIR)
	cd cuda/heartwall;		make;	cp heartwall.exe $(CUDA_BIN_DIR)
	cd cuda/hotspot;		make;	cp hotspot.exe $(CUDA_BIN_DIR)
	cd cuda/kmeans;			make;	cp kmeans.exe $(CUDA_BIN_DIR)
	cd cuda/lavaMD;			make;	cp lavaMD.exe $(CUDA_BIN_DIR)
	cd cuda/leukocyte;		make;	cp CUDA/leukocyte.exe $(CUDA_BIN_DIR)
	cd cuda/lud;			make;	cp cuda/lud_cuda.exe $(CUDA_BIN_DIR)
	cd cuda/nn;				make;	cp nn.exe $(CUDA_BIN_DIR)
	cd cuda/nw;			make;	cp needle.exe $(CUDA_BIN_DIR)
	cd cuda/srad/srad_v1;		make;	cp srad.exe $(CUDA_BIN_DIR)/srad_v1.exe
	cd cuda/srad/srad_v2;		make;   cp srad.exe $(CUDA_BIN_DIR)/srad_v2.exe
	cd cuda/streamcluster;		make;	cp sc_gpu.exe $(CUDA_BIN_DIR)
	cd cuda/particlefilter;		make;	cp naive.exe float.exe $(CUDA_BIN_DIR)       
	cd cuda/pathfinder;		make;	cp pathfinder.exe $(CUDA_BIN_DIR)
	cd cuda/mummergpu;		make;	cp bin/mummergpu.exe $(CUDA_BIN_DIR)
	cd cuda/hybridsort;              make;   cp hybridsort.exe $(CUDA_BIN_DIR)
	cd cuda/dwt2d;                   make;   cp dwt2d.exe  $(CUDA_BIN_DIR)
	

	
clean: CUDA_clean

CUDA_clean:
	cd $(CUDA_BIN_DIR); rm -f *
	for dir in $(CUDA_DIRS) ; do cd cuda/$$dir ; make clean ; cd ../.. ; done
