//
//  OctreeTests.h
//  tests/octree/src
//
//  Created by Brad Hefta-Gaub on 06/04/2014.
//  Copyright 2014 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_OctreeTests_h
#define hifi_OctreeTests_h

#include <QtTest/QtTest>

class OctreeTests : public QObject {
    Q_OBJECT
    
private slots:
    void propertyFlagsTests();
    void byteCountCodingTests();
    void modelItemTests();

//    void runAllTests(bool verbose); 
};

#endif // hifi_OctreeTests_h
