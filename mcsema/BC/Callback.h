/*
 * Copyright (c) 2017 Trail of Bits, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MCSEMA_BC_CALLBACK_H_
#define MCSEMA_BC_CALLBACK_H_

namespace llvm {

class Function;

}  // namespace llvm
namespace mcsema {
struct NativeObject;

// Get a callback function for an internal function that can be referenced by
// internal code.
llvm::Function *GetNativeToLiftedCallback(const NativeObject *cfg_func);

// Get a callback function for an internal function that can be referenced by
// external code.
llvm::Function *GetNativeToLiftedEntryPoint(const NativeObject *cfg_func);

// Get a callback function for an external function that can be referenced by
// internal code.
llvm::Function *GetLiftedToNativeExitPoint(const NativeObject *cfg_func);

}  // namespace mcsema

#endif  // MCSEMA_BC_CALLBACK_H_
