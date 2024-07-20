/*
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef DYCKAA_DYCKVALUEFLOWANALYSIS_H
#define DYCKAA_DYCKVALUEFLOWANALYSIS_H

#include <llvm/Pass.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/CommandLine.h>
#include <llvm/Support/Debug.h>
#include "DyckAA/DyckVFG.h"

using namespace llvm;

class DyckValueFlowAnalysis : public ModulePass {
private:
    DyckVFG *VFG;

public:
    static char ID;

    DyckValueFlowAnalysis();

    ~DyckValueFlowAnalysis() override;

    bool runOnModule(Module &M) override;

    void getAnalysisUsage(AnalysisUsage &AU) const override;

    DyckVFG *getDyckVFGraph() const;
};

#endif // DYCKAA_DYCKVALUEFLOWANALYSIS_H
