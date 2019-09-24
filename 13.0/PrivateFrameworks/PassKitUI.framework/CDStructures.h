//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct PKBarcodeQuietZone {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct UIView {
    Class _field1;
};

struct UIViewController {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    unsigned long long _field3;
} CDStruct_0e648023;

typedef struct {
    _Bool foreground;
    _Bool foregroundActive;
} CDStruct_973bafd3;

typedef struct {
    unsigned long long numberOfSections;
    unsigned long long *indexToSection;
    unsigned long long *sectionToIndex;
} CDStruct_826e8cf1;

typedef struct {
    double target;
    double position;
    double velocity;
    double positionThreshold;
    double velocityThreshold;
    _Bool running;
} CDStruct_f94998c4;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    _Bool _field7;
    double _field8;
    double _field9;
    _Bool _field10;
    double _field11;
    double _field12;
} CDStruct_9c0b9312;

typedef struct {
    double mass;
    double stiffness;
    double damping;
    double beta;
    double omega0;
    double scratch;
    _Bool dirty;
} CDStruct_5c14e0b2;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double cornerRadius;
    long long shape;
    long long style;
    long long highlightEffect;
    long long disabledEffect;
} CDStruct_e6a35582;

typedef struct {
    double _field1;
    double _field2;
    struct CGSize _field3;
    double _field4;
    double _field5;
    _Bool _field6;
} CDStruct_19e39b3b;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

typedef struct {
    struct CGSize preferredContentSize;
    double minimumNavigationHeight;
    _Bool isRoot;
} CDStruct_47050b7f;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    double _field3;
} CDStruct_bc00259c;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    double _field3;
} CDStruct_86e25f83;

typedef struct {
    struct CGSize boundingSize;
    struct {
        struct CGRect frame;
        _Bool widthConstrained;
    } textMetrics[4];
} CDStruct_c7197326;

// Ambiguous groups
typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_d8808cea;
