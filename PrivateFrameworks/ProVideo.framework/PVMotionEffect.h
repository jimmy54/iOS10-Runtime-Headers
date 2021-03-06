/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVMotionEffect : PVEffect {
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildInEnableChan;
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildOutEnableChan;
    double  _docDurInSeconds;
    struct _OZXDocumentInfo { 
        unsigned int _hasVideo; 
        unsigned int _width; 
        unsigned int _height; 
        unsigned int _bitsPerComponent; 
        unsigned int _components; 
        unsigned int _frames; 
        double _frameRate; 
        unsigned int _isNTSC; 
        double _pixelAspectRatio; 
        float _bgColor[3]; 
        unsigned int _fieldOrder; 
        unsigned int _audioChannels; 
        unsigned int _audioBytesPerSample; 
        double _audioSampleRate; 
        unsigned int _hasAudio; 
        unsigned int _unused[16]; 
    }  _docInfo;
    int  _docLoadStatus;
    void * _document;
    NSLock * _documentLock;
    struct CGSize { 
        double width; 
        double height; 
    }  _documentSize;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > > { struct __tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _dropZoneIndexToID;
    unsigned int  _effectIndex;
    bool  _needsCrop;
    unsigned int  _numInputs;
    struct METimeRemap { 
        struct FigTime { 
            double _t; 
        } _introDuration; 
        struct FigTime { 
            double _t; 
        } _outroDuration; 
        struct FigTime { 
            double _t; 
        } _scaleableDuration; 
        bool _isIntroOptional; 
        bool _isOutroOptional; 
        bool _isStartTimeAligned; 
        bool _isEndTimeAligned; 
        bool _isLoop; 
        struct OZChannelBool {} *_pBuildInEnableChan; 
        struct OZChannelBool {} *_pBuildOutEnableChan; 
    }  _timeRemap;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } documentSize;

+ (id)_bundleLibPaths;
+ (id)_effectPathFromID:(id)arg1;
+ (id)_userLibPaths;
+ (void)cleanupEffectsCache;
+ (void)clearPreviewStats;
+ (id)effectMap;
+ (void)extractMetadataFromContentsOfFile:(id)arg1 toCacheEntry:(id)arg2;
+ (void)initializeMotion;
+ (void)initializeMotionInternal;
+ (void)mapTemplatesInDirectory:(id)arg1 doingRescan:(bool)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)noteApplicationWillTerminate;
+ (void)registerEffects;
+ (void)registerNoneEffectForType:(id)arg1 effectID:(id)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (void)registerTemplateInDirectory:(id)arg1 relPath:(id)arg2 effectID:(id)arg3 doingRescan:(bool)arg4 origCache:(id)arg5 newCache:(id)arg6;
+ (bool)replacedMappedEffectWithNewPath:(id)arg1;
+ (void)scanTemplatesInDirectory:(id)arg1 doingRescan:(bool)arg2 replaceMappedEffectPath:(bool)arg3 origCache:(id)arg4 newCache:(id)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustCutawayBorder;
- (void)adjustCutawayFadeAnimation;
- (void)adjustCutawayInputs:(struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 renderScale:(float)arg2 pipNeedsCrop:(bool)arg3;
- (void)adjustKenBurnsAnimation;
- (void)adjustShapeVertices;
- (void)adjustTransitionInputs:(struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 renderScale:(float)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3;
- (void)applyInspectableProperties;
- (void)buildDropZoneIdMap;
- (void)computeIntroOutroPoints;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })documentSize;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const struct PVInputHGNodeMap<unsigned int> { struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct map<unsigned int, PCRect<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCRect<double> > > > { struct __tree<std::__1::__value_type<unsigned int, PCRect<double> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCRect<double> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PCRect<double> > > > { struct __tree_node<std::__1::__value_type<unsigned int, PCRect<double> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PCRect<double> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCRect<double> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct map<unsigned int, PCMatrix44Tmpl<double>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PCMatrix44Tmpl<double> > > > { struct __tree<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double> > > > { struct __tree_node<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PCMatrix44Tmpl<double> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > > { struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int> > > { struct __tree_node<std::__1::__value_type<unsigned int, int>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; }*)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 renderContext:(struct HGRef<PVRenderContext> { struct PVRenderContext {} *x1; })arg4;
- (id)initWithEffectID:(id)arg1;
- (void)loadDocument;
- (void)loadEffect;
- (void)loadEffectInternal;
- (struct HGRect { int x1; int x2; int x3; int x4; })makeCropRectForDOD:(struct HGRect { int x1; int x2; int x3; int x4; })arg1 renderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderScale:(float)arg3;
- (int)numberOfInputsHint;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(struct HGRenderer { int (**x1)(); unsigned int x2; struct HGNode {} *x3; struct HGBuffer {} *x4; struct HGRendererTextureUnit { struct HGTexture {} *x_5_1_1; struct HGTransform {} *x_5_1_2; int x_5_1_3; } x5[8]; struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_6_1_1; struct DepthBufferManager {} **x_6_1_2; struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_3_2_1; } x_6_1_3; } x6; struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_7_1_1; struct HGExecutionUnit {} **x_7_1_2; struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_3_2_1; } x_7_1_3; } x7; struct HGExecutionData {} *x8; struct HGSyncData {} *x9; struct _opaque_pthread_rwlock_t { long long x_10_1_1; BOOL x_10_1_2[192]; } x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct HGLUTCacheManager {} *x12; struct GraphStats {} *x13; struct RendererStats {} *x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; struct HGCache { int (**x_45_1_1)(); int x_45_1_2; struct HGCacheEntry {} *x_45_1_3; struct HGCacheEntry {} *x_45_1_4; struct HGCacheEntry {} *x_45_1_5; struct _opaque_pthread_mutex_t { long long x_6_2_1; BOOL x_6_2_2[56]; } x_45_1_6; } x45; bool x46; bool x47; bool x48; unsigned int x49; struct HGLimits {} *x50[2]; int x51; struct HGDotTree { struct __sFILE {} *x_52_1_1; bool x_52_1_2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_3_2_1; } x_52_1_3; } x52; struct HGBufferDumper { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_53_1_1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_53_1_2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_3_2_1; } x_53_1_3; int x_53_1_4; int x_53_1_5; bool x_53_1_6; } x53; unsigned int x54; int x55; unsigned long long x56; unsigned long long x57; int x58; struct HGLimitsCache {} *x59; struct HGRenderQueue {} *x60; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_61_1_1; } x61; }*)arg4;
- (id)projectURL;
- (void)releaseResources;
- (void)setBuildInEnabled:(bool)arg1;
- (void)setBuildOutEnabled:(bool)arg1;
- (void)setupPublishedParameters;
- (void)setupTitleParameters;
- (void)setupTransitionParameters;
- (bool)supportsExtendedRangeInputs;
- (void)updateInspectableProperties;

@end
