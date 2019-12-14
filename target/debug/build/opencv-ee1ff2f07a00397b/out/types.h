typedef struct Vec8iWrapper {
    int data[8];
} Vec8iWrapper;

typedef struct Vec6dWrapper {
    double data[6];
} Vec6dWrapper;

typedef struct Vec6fWrapper {
    float data[6];
} Vec6fWrapper;

typedef struct Vec6iWrapper {
    int data[6];
} Vec6iWrapper;

typedef struct Vec4dWrapper {
    double data[4];
} Vec4dWrapper;

typedef struct Vec4fWrapper {
    float data[4];
} Vec4fWrapper;

typedef struct Vec4iWrapper {
    int data[4];
} Vec4iWrapper;

typedef struct Vec4wWrapper {
    unsigned short data[4];
} Vec4wWrapper;

typedef struct Vec4sWrapper {
    short data[4];
} Vec4sWrapper;

typedef struct Vec4bWrapper {
    unsigned char data[4];
} Vec4bWrapper;

typedef struct Vec3dWrapper {
    double data[3];
} Vec3dWrapper;

typedef struct Vec3fWrapper {
    float data[3];
} Vec3fWrapper;

typedef struct Vec3iWrapper {
    int data[3];
} Vec3iWrapper;

typedef struct Vec3wWrapper {
    unsigned short data[3];
} Vec3wWrapper;

typedef struct Vec3sWrapper {
    short data[3];
} Vec3sWrapper;

typedef struct Vec3bWrapper {
    unsigned char data[3];
} Vec3bWrapper;

typedef struct Vec2dWrapper {
    double data[2];
} Vec2dWrapper;

typedef struct Size2dWrapper {
    double width;
    double height;
} Size2dWrapper;

typedef struct Point2dWrapper {
    double x;
    double y;
} Point2dWrapper;

typedef struct Rect2dWrapper {
    double x;
    double y;
    double width;
    double height;
} Rect2dWrapper;

typedef struct Vec2fWrapper {
    float data[2];
} Vec2fWrapper;

typedef struct Size2fWrapper {
    float width;
    float height;
} Size2fWrapper;

typedef struct Point2fWrapper {
    float x;
    float y;
} Point2fWrapper;

typedef struct Rect2fWrapper {
    float x;
    float y;
    float width;
    float height;
} Rect2fWrapper;

typedef struct Size2lWrapper {
    int64 width;
    int64 height;
} Size2lWrapper;

typedef struct Point2lWrapper {
    int64 x;
    int64 y;
} Point2lWrapper;

typedef struct Vec2iWrapper {
    int data[2];
} Vec2iWrapper;

typedef struct Size2iWrapper {
    int width;
    int height;
} Size2iWrapper;

typedef struct Point2iWrapper {
    int x;
    int y;
} Point2iWrapper;

typedef struct Rect2iWrapper {
    int x;
    int y;
    int width;
    int height;
} Rect2iWrapper;

typedef struct SizeWrapper {
    int width;
    int height;
} SizeWrapper;

typedef struct PointWrapper {
    int x;
    int y;
} PointWrapper;

typedef struct RectWrapper {
    int x;
    int y;
    int width;
    int height;
} RectWrapper;

typedef struct Vec2wWrapper {
    unsigned short data[2];
} Vec2wWrapper;

typedef struct Vec2sWrapper {
    short data[2];
} Vec2sWrapper;

typedef struct Vec2bWrapper {
    unsigned char data[2];
} Vec2bWrapper;

typedef struct ScalarWrapper {
    double data[4];
} ScalarWrapper;

typedef struct DMatch {
    int queryIdx;
    int trainIdx;
    int imgIdx;
    float distance;
} DMatch;

typedef struct KeyPoint {
    Point2fWrapper pt;
    float size;
    float angle;
    float response;
    int octave;
    int class_id;
} KeyPoint;

typedef struct Moments {
    double m00;
    double m10;
    double m01;
    double m20;
    double m11;
    double m02;
    double m30;
    double m21;
    double m12;
    double m03;
    double mu20;
    double mu11;
    double mu02;
    double mu30;
    double mu21;
    double mu12;
    double mu03;
    double nu20;
    double nu11;
    double nu02;
    double nu30;
    double nu21;
    double nu12;
    double nu03;
} Moments;

typedef struct CirclesGridFinderParameters {
    Size2fWrapper densityNeighborhoodSize;
    float minDensity;
    int kmeansAttempts;
    int minDistanceToAddKeypoint;
    int keypointScale;
    float minGraphConfidence;
    float vertexGain;
    float vertexPenalty;
    float existingVertexGain;
    float edgeGain;
    float edgePenalty;
    float convexHullFactor;
    float minRNGEdgeSwitchDist;
    float squareSize;
    float maxRectifiedDistance;
} CirclesGridFinderParameters;

typedef struct SimpleBlobDetector_Params {
    float thresholdStep;
    float minThreshold;
    float maxThreshold;
    std::size_t minRepeatability;
    float minDistBetweenBlobs;
    bool filterByColor;
    unsigned char blobColor;
    bool filterByArea;
    float minArea;
    float maxArea;
    bool filterByCircularity;
    float minCircularity;
    float maxCircularity;
    bool filterByInertia;
    float minInertiaRatio;
    float maxInertiaRatio;
    bool filterByConvexity;
    float minConvexity;
    float maxConvexity;
} SimpleBlobDetector_Params;

typedef struct KeyLine {
    float angle;
    int class_id;
    int octave;
    Point2fWrapper pt;
    float response;
    float size;
    float startPointX;
    float startPointY;
    float endPointX;
    float endPointY;
    float sPointInOctaveX;
    float sPointInOctaveY;
    float ePointInOctaveX;
    float ePointInOctaveY;
    float lineLength;
    int numOfPixels;
} KeyLine;

typedef struct LSDParam {
    double scale;
    double sigma_scale;
    double quant;
    double ang_th;
    double log_eps;
    double density_th;
    int n_bins;
} LSDParam;

typedef struct DrawLinesMatchesFlags {
    unsigned char __rust_private[0];
} DrawLinesMatchesFlags;

typedef struct libmv_CameraIntrinsicsOptions {
    int distortion_model;
    int image_width;
    int image_height;
    double focal_length_x;
    double focal_length_y;
    double principal_point_x;
    double principal_point_y;
    double polynomial_k1;
    double polynomial_k2;
    double polynomial_k3;
    double polynomial_p1;
    double polynomial_p2;
    double division_k1;
    double division_k2;
} libmv_CameraIntrinsicsOptions;

typedef struct libmv_ReconstructionOptions {
    int keyframe1;
    int keyframe2;
    int refine_intrinsics;
    int select_keyframes;
    int verbosity_level;
} libmv_ReconstructionOptions;

