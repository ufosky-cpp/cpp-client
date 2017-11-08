/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "dependency_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace jaegertracing { namespace thrift {


DependencyLink::~DependencyLink() throw() {
}


void DependencyLink::__set_parent(const std::string& val) {
  this->parent = val;
}

void DependencyLink::__set_child(const std::string& val) {
  this->child = val;
}

void DependencyLink::__set_callCount(const int64_t val) {
  this->callCount = val;
}

const char* DependencyLink::ascii_fingerprint = "99D57D762942D436C0E0A065B166EE5B";
const uint8_t DependencyLink::binary_fingerprint[16] = {0x99,0xD5,0x7D,0x76,0x29,0x42,0xD4,0x36,0xC0,0xE0,0xA0,0x65,0xB1,0x66,0xEE,0x5B};

uint32_t DependencyLink::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_parent = false;
  bool isset_child = false;
  bool isset_callCount = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->parent);
          isset_parent = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->child);
          isset_child = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->callCount);
          isset_callCount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_parent)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_child)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_callCount)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t DependencyLink::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("DependencyLink");

  xfer += oprot->writeFieldBegin("parent", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->parent);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("child", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->child);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("callCount", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->callCount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(DependencyLink &a, DependencyLink &b) {
  using ::std::swap;
  swap(a.parent, b.parent);
  swap(a.child, b.child);
  swap(a.callCount, b.callCount);
}

DependencyLink::DependencyLink(const DependencyLink& other0) {
  parent = other0.parent;
  child = other0.child;
  callCount = other0.callCount;
}
DependencyLink& DependencyLink::operator=(const DependencyLink& other1) {
  parent = other1.parent;
  child = other1.child;
  callCount = other1.callCount;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const DependencyLink& obj) {
  using apache::thrift::to_string;
  out << "DependencyLink(";
  out << "parent=" << to_string(obj.parent);
  out << ", " << "child=" << to_string(obj.child);
  out << ", " << "callCount=" << to_string(obj.callCount);
  out << ")";
  return out;
}


Dependencies::~Dependencies() throw() {
}


void Dependencies::__set_links(const std::vector<DependencyLink> & val) {
  this->links = val;
}

const char* Dependencies::ascii_fingerprint = "315F85222FA0D924D55E8B20337B325C";
const uint8_t Dependencies::binary_fingerprint[16] = {0x31,0x5F,0x85,0x22,0x2F,0xA0,0xD9,0x24,0xD5,0x5E,0x8B,0x20,0x33,0x7B,0x32,0x5C};

uint32_t Dependencies::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_links = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->links.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->links.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += this->links[_i6].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_links = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_links)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Dependencies::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Dependencies");

  xfer += oprot->writeFieldBegin("links", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->links.size()));
    std::vector<DependencyLink> ::const_iterator _iter7;
    for (_iter7 = this->links.begin(); _iter7 != this->links.end(); ++_iter7)
    {
      xfer += (*_iter7).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Dependencies &a, Dependencies &b) {
  using ::std::swap;
  swap(a.links, b.links);
}

Dependencies::Dependencies(const Dependencies& other8) {
  links = other8.links;
}
Dependencies& Dependencies::operator=(const Dependencies& other9) {
  links = other9.links;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Dependencies& obj) {
  using apache::thrift::to_string;
  out << "Dependencies(";
  out << "links=" << to_string(obj.links);
  out << ")";
  return out;
}

}} // namespace