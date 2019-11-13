#!/bin/bash 
#BSUB -W1000 
source /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/resetup.sh 
python /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/runFitCrossCheck.py /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/workspaceCombiner/nov7_combined_ws/combined_HVTWZ_1000_GGF_lvqq_FloatRelevantUncorrXSSingleBinPrunSyst.root /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/fccs_output/HVTWZ_combined_1nov8_maybeFloatRelevantUncorrXSSingleBinPrunSyst combined | tee /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/HVTWZ_combined_1nov8_maybeFloatRelevantUncorrXSSingleBinPrunSyst/log_ws_HVTWZ_combined_1000.txt 
cd /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/fccs_output/HVTWZ_combined_1nov8_maybeFloatRelevantUncorrXSSingleBinPrunSyst 
source /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/workspace_checks_draw.sh /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/fccs_output/HVTWZ_combined_1nov8_maybeFloatRelevantUncorrXSSingleBinPrunSyst /gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/workspaceCombiner/nov7_combined_ws/combined_HVTWZ_1000_GGF_lvqq_FloatRelevantUncorrXSSingleBinPrunSyst.root 1