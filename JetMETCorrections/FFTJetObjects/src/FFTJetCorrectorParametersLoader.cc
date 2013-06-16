#include "JetMETCorrections/FFTJetObjects/interface/FFTJetCorrectorParametersLoader.h"
#include "CondFormats/DataRecord/interface/FFTJetCorrectorParametersRcdTypes.h"

#define add_loader(Record) (*this)[ #Record ] = \
   new ConcreteFFTJetRcdMapper<FFTJetCorrectorParameters,Record >()

FFTJetCorrectorParametersLoader::FFTJetCorrectorParametersLoader()
{
    add_loader(FFTBasicJetCorrectorParametersRcd);
    add_loader(FFTGenJetCorrectorParametersRcd);
    add_loader(FFTCaloJetCorrectorParametersRcd);
    add_loader(FFTPFJetCorrectorParametersRcd);
    add_loader(FFTTrackJetCorrectorParametersRcd);
    add_loader(FFTJPTJetCorrectorParametersRcd);
    add_loader(FFTPFCHS0CorrectorParametersRcd);
    add_loader(FFTPFCHS1CorrectorParametersRcd);
    add_loader(FFTPFCHS2CorrectorParametersRcd);
    add_loader(FFTBasicJetSysCorrectorParametersRcd);
    add_loader(FFTGenJetSysCorrectorParametersRcd);
    add_loader(FFTCaloJetSysCorrectorParametersRcd);
    add_loader(FFTPFJetSysCorrectorParametersRcd);
    add_loader(FFTTrackJetSysCorrectorParametersRcd);
    add_loader(FFTJPTJetSysCorrectorParametersRcd);
    add_loader(FFTPFCHS0SysCorrectorParametersRcd);
    add_loader(FFTPFCHS1SysCorrectorParametersRcd);
    add_loader(FFTPFCHS2SysCorrectorParametersRcd);
    add_loader(FFTGen0CorrectorParametersRcd);
    add_loader(FFTGen1CorrectorParametersRcd);
    add_loader(FFTGen2CorrectorParametersRcd);
    add_loader(FFTPF0CorrectorParametersRcd);
    add_loader(FFTPF1CorrectorParametersRcd);
    add_loader(FFTPF2CorrectorParametersRcd);
    add_loader(FFTPF3CorrectorParametersRcd);
    add_loader(FFTPF4CorrectorParametersRcd);
    add_loader(FFTCalo0CorrectorParametersRcd);
    add_loader(FFTCalo1CorrectorParametersRcd);
    add_loader(FFTCalo2CorrectorParametersRcd);
    add_loader(FFTCalo3CorrectorParametersRcd);
    add_loader(FFTCalo4CorrectorParametersRcd);
    add_loader(FFTGen0SysCorrectorParametersRcd);
    add_loader(FFTGen1SysCorrectorParametersRcd);
    add_loader(FFTGen2SysCorrectorParametersRcd);
    add_loader(FFTPF0SysCorrectorParametersRcd);
    add_loader(FFTPF1SysCorrectorParametersRcd);
    add_loader(FFTPF2SysCorrectorParametersRcd);
    add_loader(FFTPF3SysCorrectorParametersRcd);
    add_loader(FFTPF4SysCorrectorParametersRcd);
    add_loader(FFTPF5SysCorrectorParametersRcd);
    add_loader(FFTPF6SysCorrectorParametersRcd);
    add_loader(FFTPF7SysCorrectorParametersRcd);
    add_loader(FFTPF8SysCorrectorParametersRcd);
    add_loader(FFTPF9SysCorrectorParametersRcd);
    add_loader(FFTCalo0SysCorrectorParametersRcd);
    add_loader(FFTCalo1SysCorrectorParametersRcd);
    add_loader(FFTCalo2SysCorrectorParametersRcd);
    add_loader(FFTCalo3SysCorrectorParametersRcd);
    add_loader(FFTCalo4SysCorrectorParametersRcd);
    add_loader(FFTCalo5SysCorrectorParametersRcd);
    add_loader(FFTCalo6SysCorrectorParametersRcd);
    add_loader(FFTCalo7SysCorrectorParametersRcd);
    add_loader(FFTCalo8SysCorrectorParametersRcd);
    add_loader(FFTCalo9SysCorrectorParametersRcd);
    add_loader(FFTCHS0SysCorrectorParametersRcd);
    add_loader(FFTCHS1SysCorrectorParametersRcd);
    add_loader(FFTCHS2SysCorrectorParametersRcd);
    add_loader(FFTCHS3SysCorrectorParametersRcd);
    add_loader(FFTCHS4SysCorrectorParametersRcd);
    add_loader(FFTCHS5SysCorrectorParametersRcd);
    add_loader(FFTCHS6SysCorrectorParametersRcd);
    add_loader(FFTCHS7SysCorrectorParametersRcd);
    add_loader(FFTCHS8SysCorrectorParametersRcd);
    add_loader(FFTCHS9SysCorrectorParametersRcd);
    add_loader(FFTEtaFlatteningFactorsParametersRcd);
    add_loader(FFTPileupRhoCalibrationParametersRcd);
    add_loader(FFTPileupRhoEtaDependenceParametersRcd);
    add_loader(FFTLUT0ParametersRcd);
    add_loader(FFTLUT1ParametersRcd);
    add_loader(FFTLUT2ParametersRcd);
    add_loader(FFTLUT3ParametersRcd);
    add_loader(FFTLUT4ParametersRcd);
    add_loader(FFTLUT5ParametersRcd);
    add_loader(FFTLUT6ParametersRcd);
    add_loader(FFTLUT7ParametersRcd);
    add_loader(FFTLUT8ParametersRcd);
    add_loader(FFTLUT9ParametersRcd);
    add_loader(FFTLUT10ParametersRcd);
    add_loader(FFTLUT11ParametersRcd);
    add_loader(FFTLUT12ParametersRcd);
    add_loader(FFTLUT13ParametersRcd);
    add_loader(FFTLUT14ParametersRcd);
    add_loader(FFTLUT15ParametersRcd);
}
