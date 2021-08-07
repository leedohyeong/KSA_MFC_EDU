## KSA_MFC 실습

<img src= "https://github.com/leedohyeong/KSA_MFC_EDU/blob/main/%EC%8A%A4%ED%81%AC%EB%A6%B0%EC%83%B7(469).png">
영상 처리 실습 예시 

### 기능
#### - OnOpenDocument : RAW 파일을 열기 위해 파일을 불러옴
#### - OnSaveDocument : 변환한 파일을 RAW파일로 저장함
#### - OnDrawDocument : 변환한 이미지와 원본 이미지를 둘 다 출력
#### - OnDownSampling : Dialog1 에서 Rate를 받아 DownSampling
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnUpSampling : Dialog1 에서 Rate를 받아 UpSampling(선형보간으로 구현)
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnQuantization : Dialog2 에서 받은 수로 양자화의 단계를 결정하여 변형
##### └ CQuantization : 1~8 범위의 int 값을 받음
#### - OnSumOperate : 상수값을 받아 전체 데이터에 합 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnSubOperate : 상수값을 받아 전체 데이터에 뺄셈 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnMulOperate : 상수값을 받아 전체 데이터에 곱 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnDivOperate : 상수값을 받아 전체 데이터에 나눗셈 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnAndOperate : 상수값을 받아 전체 데이터에 AND 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnOrOperate : 상수값을 받아 전체 데이터에 OR 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnXorOperate : 상수값을 받아 전체 데이터에 XOR 연산
##### └ CConstantDlg : 1~255 범위의 int 값을 받음
#### - OnGammaTransform : 실수값을 받아 전체 데이터에 Gamma 변환
##### └ CGammaDlg : 0~2.0 범위의 float 값을 받음
#### - OnNegaTransform : 255 - inputImage를 통해 반전
#### - OnBinarization : 기준값으로 데이터 이진화
##### └ CConstantDlg : 1~255 범위의 int 기준값을 받음
#### - OnStressTransform : 범위 내 값을 모두 흰색으로 변환
##### └CStressTransformDlg : 1~255 범위의 int 기준값을 두개 받음
#### - OnHistoStretch : 최대, 최소 기준으로 히스토그램 스트레칭
#### - OnEndInSearch : 최대, 최소을 임계값으로 사용한 후 스트레칭
#### - OnHistogram : 이미지의 히스토그램을 보여줌
#### - OnHistoEqual : 이미지 평활화(데이터가 밀집되어있는 곳을 집중적으로 스트레칭)
#### - OnHistoSpec : 다른 이미지의 히스토그램과 비슷하게 만들어줌
#### - OnEmbossing : 엠보싱 변환({{-1., 0., 0.}, {0., 0., 0.}, {0., 0., 1.}} 마스크 사용)
#### - OnBlurr : 블러링 변환({{1./9., 1./9., 1./9.}, {1./9., 1./9., 1./9.}, {1./9., 1./9., 1./9.}} 마스크 사용)
#### - OnGaussianFilter : 블러링 변환({{1./16., 1./8., 1./16.}, {1./8., 1./4., 1./8.}, {1./16., 1./8., 1./16.}} 마스크 사용)
#### - OnSharpening : 샤프닝 변환
#### - OnHpfSharp : High Filter Pass 변환
#### - OnLpfSharp : Low Filter Pass 변환
#### - OnDiffOperatorHor : 수평 이동 변환
#### - OnHomogenOperator : 유사 연산자 에지 처리
#### - OnLaplacian : 라플라시안 변환
#### - OnNearest : 이웃 화소 보간
#### - OnBilinear : 선형 보간
#### - OnMedianSub : 미디언 값으로 subsampling
#### - OnMeanSub : 평균 값으로 subsampling
#### - OnTranslation : 영상 평행 이동
#### - OnMirrorHor : 영상 수평 반전
#### - OnMirrorVer : 영상 수직 반전
#### - OnRotation : 영상 회전
#### - OnFrameSum : 영상간 픽셀값 (+) 연산
#### - OnFrameSub : 영상간 픽셀값 (-) 연산
#### - OnFrameMul : 영상간 픽셀값 (*) 연산
#### - OnFrameDiv : 영상간 픽셀값 (/) 연산
#### - OnFrameAnd : 영상간 픽셀값 AND 연산
#### - OnFrameOr : 영상간 픽셀값 OR 연산
#### - OnFrameComb : 영상 합성
#### - OnBinaryErosion : 이진 영상 침식 처리
#### - OnBinaryDilation : 이진 영상 팽창 처리
#### - OnGrayErosion : 그레이 영상 침식 처리
#### - OnGrayDilation : 그레이 영상 팽창 처리
#### - OnLowPassFilter : 저주파 필터
#### - OnHighPassFilter : 고주파 필터
#### - OnMeanFilter : 평균값 필터
#### - OnMedianFilter : 중간값 필터
#### - OnMaxFilter : 최대값 필터
#### - OnMinFilter : 최소값 필터
#### - OnFft2d : 2d 고속 푸리에 변환
#### - OnIfft2d : 2d 역 고속 푸리에 변환
#### - OnLpfFrequency : 저주파 필터링
#### - OnHpfFrequency : 고주파 필터링
