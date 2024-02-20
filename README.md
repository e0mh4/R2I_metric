# R2I
This repository contains the artifact for the R2I metric introduced in the paper “R2I: A Relative Readability Metric for Decompiled Code.”

## Environment
R2I is verified in Linux 20.04.

## Structure
1. dataset/ : dataset for each decompiler
    * $DECOMPILER/c : Original decompiled code
    * $DECOMPILER/json : JSON file containing information about functions in decompiled code, including their starting and ending addresses
    * $DECOMPILER/syntax_correction : Syntax corrected decompiled code for AST generation
2. eval/test : R2I metric results for dataset
3. pycparser : Open-source parser for AST generation
    * utils/fake_libc_include : Including a fake header defined for error correction (decompile_*.h)
4. src : Source files of R2I metric

## Getting Started
### Prerequisites
* Python version 3.8.10
* Pandas version 2.1.0

### Result
`mean.csv` contains the average of R2I scores for all functions of the binary.
```
 decompiler      R2I
       angr   0.5120
         bn   0.5492
     ghidra   0.5212 
        ida   0.6115
    radare2   0.4525
     retdec   0.5370
```

`r2i.csv` shows the R2I scores and number of occurrences of each feature within each function.
```
 decompiler   address      goto  assignment    ...      loc       asm       R2I
                  ...                          ...
       angr  0x401b20    0.0582      0.0041    ...   0.0010    0.0582    0.4370
         bn  0x401b20    0.0582      0.0044    ...   0.0017    0.0582    0.5368
     ghidra  0x401b20    0.0582      0.0044    ...   0.0013    0.0582    0.5192
        ida  0x401b20    0.0582      0.0582    ...   0.0388    0.0582    0.7055
    radare2  0x401b20    0.0145      0.0016    ...   0.0008    0.0582    0.4332
     retdec  0x401b20    0.0582      0.0116    ...   0.0019    0.0064    0.5099
                  ...                          ...
```
### Adjusting Feature Weight
The weight is defined in `src/weight.csv`.  
To adjust the weight, edit `src/weight.csv` to the desired weight and run run.sh script.
