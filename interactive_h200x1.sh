srun --account=bche-delta-gpu --partition=gpuH200x8-interactive \
  --nodes=1 --gpus-per-node=1 --tasks=1 \
  --tasks-per-node=16 --cpus-per-task=1 --mem=20g \
  --pty bash