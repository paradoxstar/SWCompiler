/*************************************************************************
	> File Name: dlOp.h
	> Author: cryinlaugh 
	> Mail: cryinlaugh@gmail.com 
	> Created Time: 二 12/ 4 15:57:29 2018
 ************************************************************************/

#ifndef _DLOP_H
#define _DLOP_H

#include "../basicOp/basicOps.h"

namespace swc{

//=====================================================
//Definition of 2-D deep learning specific operations.
//Version v0.1: ops for simple-MLP listed below
//--MatrixMatrixFC
//--Activation:
//----MatrixTanh
//--MatrixSoftmax
//--Loss:
//----MatrixLogNegLoss 
//=====================================================


template <typename Dtype>
class MatrixMatrixFCOp : public Op<Dtype>{
public:
    MatrixMatrixFCOp():Op<Dtype>(2, 1){
        this->_inputNDims.push_back(2);
        this->_inputNDims.push_back(2);
        this->_outputNDims.push_back(2);
    }
    ~MatrixMatrixFCOp(){}

};

template <typename Dtype>
class MatrixTanhOp : public Op<Dtype>{
public:
    MatrixTanhOp():Op<Dtype>(1,1) {
        this->inputNDims.push_back(2);
        this->outputNDims.push_back(2);
    };
    ~MatrixTanhOp();
};

template <typename Dtype>
class MatrixSoftmaxOp : public Op<Dtype>{
public:
    MatrixSoftmaxOp(): Op<Dtype>(1,1) {
        this->inputNDims.push_back(2);
        this->outputNDims.push_back(2);
    };
    ~MatrixSoftmaxOp();

};

template <typename Dtype>
class MatrixLogNegLossOp : public Op<Dtype>{
public:
    MatrixLogNegLossOp():Op<Dtype>(1,1) {
        this->inputNDims.push_back(2);
        this->outputNDims.push_back(0);
    };
    ~MatrixLogNegLossOp();
};


//=====================================================
//Definition of 1-D deep learning specific operations.
//Version v0.1: ops for simple-MLP-nobias-fw listed below
//--Activation:
//----VectorTanh
//--VectorSoftmax
//--Loss:
//----VectorLogNegLoss 
//=====================================================

template <typename Dtype>
class VectorTanhOp : public Op<Dtype>{
public:
    VectorTanhOp():Op<Dtype>(1,1) {
        this->inputNDims.push_back(1);
        this->outputNDims.push_back(1);
    };
    ~VectorTanhOp();
};

template <typename Dtype>
class VectorSoftmaxOp : public Op<Dtype>{
public:
    VectorSoftmaxOp(): Op<Dtype>(1,1) {
        this->inputNDims.push_back(1);
        this->outputNDims.push_back(1);
    };
    ~VectorSoftmaxOp();
};


template <typename Dtype>
class VectorLogNegLossOp : public Op<Dtype>{
public:
    VectorLogNegLossOp():Op<Dtype>(1,1) {
        this->inputNDims.push_back(1);
        this->outputNDims.push_back(0);
    };
    ~VectorLogNegLossOp();
};

//=====================================================
//Definition of 0-D deep learning specific operations.
//Version v0.1: ops for simple-MLP-nobias-fw listed below
//--Activation:
//----ScalarTanh
//=====================================================

template <typename Dtype>
class ScalarTanhOp : public Op<Dtype>{
public:
    ScalarTanhOp():Op<Dtype>(1,1) {
        this->inputNDims.push_back(0);
        this->outputNDims.push_back(0);
    };
    ~ScalarTanhOp();
};
}

#endif
