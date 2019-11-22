
root -l -b -q 'Brazilian.C("/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/oldLimitsOutput/nov20_allsignalsHVTWZVBF_FloatRelevantUncorrXSSingleBinPrunSyst/root-files/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/obs/", 4)'
mv limits.pdf limits_HVTWZVBF.pdf

root -l -b -q 'Brazilian.C("/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/oldLimitsOutput/nov20_allsignalsHVTWWVBF_FloatRelevantUncorrXSSingleBinPrunSyst/root-files/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/obs/", 3)'
mv limits.pdf limits_HVTWWVBF.pdf

root -l -b -q 'Brazilian.C("/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/oldLimitsOutput/nov20_allsignalsRSG_FloatRelevantUncorrXSSingleBinPrunSyst/root-files/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/obs/", 2)'
mv limits.pdf limits_RSG.pdf

root -l -b -q 'Brazilian.C("/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/oldLimitsOutput/nov20_allsignalsHVTWZ_FloatRelevantUncorrXSSingleBinPrunSyst/root-files/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/obs/", 1)'
mv limits.pdf limits_HVTWZ.pdf

root -l -b -q 'Brazilian.C("/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/oldLimitsOutput/nov20_allsignalsHVTWW_FloatRelevantUncorrXSSingleBinPrunSyst/root-files/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/obs/", 0)'
mv limits.pdf limits_HVTWW.pdf
