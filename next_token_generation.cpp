#include <iostream>
#include <cuda_runtime.h>

int main () {
    int device_count = 0;
    cudaError_t err = cudaGetDeviceCount(&device_count);
    if (err != cudaSuccess) {
        std::cerr << "cudaGetDeviceCount failed: " << cudaGetErrorString(err) << "\n";
        return 1;
    }

    std::cout << "Number of CUDA devices: " << device_count << "\n";
}
