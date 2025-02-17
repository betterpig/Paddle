// Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <ostream>
#include <string>

#include "paddle/phi/common/place.h"

#include "paddle/fluid/framework/variable.h"

namespace paddle {
namespace jit {

using Variable = paddle::framework::Variable;
class BaseFunction {
 public:
  virtual std::vector<Variable> operator()(
      const std::vector<Variable> &inputs) = 0;
  virtual ~BaseFunction() {}
  // virtual void SetPalce(const phi::Place &place);
};

}  // namespace jit
}  // namespace paddle
