# dsv3.cuda

Fast inference for DeepSeek-V3 LLMs written in CUDA.

## Quick Start

### Requirements

1. [git lfs -- weight installation](https://git-lfs.com/)
2. [bazel -- build tooling](https://bazel.build/)

### Steps

1. Install Weights
```
# Weights is a symbolic link so you will have to change it
cd weights

# Clone weights from huggingface
git clone https://huggingface.co/deepseek-ai/DeepSeek-V3
```

2. Build Inference Engine
```
bazel build
```

3. Run 
## Resources

* [DeepSeek-V3](https://github.com/deepseek-ai/DeepSeek-V3?tab=readme-ov-file#6-how-to-run-locally)
* [Hugging Face Weights](https://huggingface.co/deepseek-ai/DeepSeek-V3/tree/main)
