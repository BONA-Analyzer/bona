BONA
======

BONA features a fast null exception (/lib) and related tools (/tools).
We have built and tested them on x86 linux architectures using llvm-12.


Building 
------

```bash
git clone https://github.com/BONA-Analyzer/bona
cd bona
mkdir build
cd build
cmake ..
make
```


Using BONA for preprocessing
------
Build and link the lib files to your project and use `NullCheckAnalysis` as a common Mod pass.
You can query if a pointer dereference is safe by calling `mayNull(Value *Ptr, Instruction *Inst)`

