/**
 * Copyright 2019 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MINDSPORE_CCSRC_DEVICE_CPU_RELU_GRAD_CPU_KERNEL_H_
#define MINDSPORE_CCSRC_DEVICE_CPU_RELU_GRAD_CPU_KERNEL_H_

#include <vector>
#include <memory>
#include "device/cpu/kernel/mkldnn/mkl_cpu_kernel.h"

namespace mindspore {
namespace device {
namespace cpu {
class ReluGradCPUKernel : public MKLCPUKernel {
 public:
  ReluGradCPUKernel() = default;
  ~ReluGradCPUKernel() override = default;

  void InitKernel(const CNodePtr &kernel_node) override;

  bool Launch(const std::vector<AddressPtr> &inputs, const std::vector<AddressPtr> &workspace,
              const std::vector<AddressPtr> &outputs) override;
};

MS_REG_CPU_KERNEL(ReluGrad, ReluGradCPUKernel);
}  // namespace cpu
}  // namespace device
}  // namespace mindspore

#endif  // MINDSPORE_CCSRC_DEVICE_CPU_RELU_GRAD_CPU_KERNEL_H_
