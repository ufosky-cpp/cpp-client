/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BaggageRestrictionManager_H
#define BaggageRestrictionManager_H

#include <thrift/TDispatchProcessor.h>
#include "baggage_types.h"

namespace jaegertracing { namespace thrift {

class BaggageRestrictionManagerIf {
 public:
  virtual ~BaggageRestrictionManagerIf() {}

  /**
   * getBaggageRestrictions retrieves the baggage restrictions for a specific service.
   * Usually, baggageRestrictions apply to all services however there may be situations
   * where a baggageKey might only be allowed to be set by a specific service.
   * 
   * @param serviceName
   */
  virtual void getBaggageRestrictions(std::vector<BaggageRestriction> & _return, const std::string& serviceName) = 0;
};

class BaggageRestrictionManagerIfFactory {
 public:
  typedef BaggageRestrictionManagerIf Handler;

  virtual ~BaggageRestrictionManagerIfFactory() {}

  virtual BaggageRestrictionManagerIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(BaggageRestrictionManagerIf* /* handler */) = 0;
};

class BaggageRestrictionManagerIfSingletonFactory : virtual public BaggageRestrictionManagerIfFactory {
 public:
  BaggageRestrictionManagerIfSingletonFactory(const boost::shared_ptr<BaggageRestrictionManagerIf>& iface) : iface_(iface) {}
  virtual ~BaggageRestrictionManagerIfSingletonFactory() {}

  virtual BaggageRestrictionManagerIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(BaggageRestrictionManagerIf* /* handler */) {}

 protected:
  boost::shared_ptr<BaggageRestrictionManagerIf> iface_;
};

class BaggageRestrictionManagerNull : virtual public BaggageRestrictionManagerIf {
 public:
  virtual ~BaggageRestrictionManagerNull() {}
  void getBaggageRestrictions(std::vector<BaggageRestriction> & /* _return */, const std::string& /* serviceName */) {
    return;
  }
};

typedef struct _BaggageRestrictionManager_getBaggageRestrictions_args__isset {
  _BaggageRestrictionManager_getBaggageRestrictions_args__isset() : serviceName(false) {}
  bool serviceName :1;
} _BaggageRestrictionManager_getBaggageRestrictions_args__isset;

class BaggageRestrictionManager_getBaggageRestrictions_args {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  BaggageRestrictionManager_getBaggageRestrictions_args(const BaggageRestrictionManager_getBaggageRestrictions_args&);
  BaggageRestrictionManager_getBaggageRestrictions_args& operator=(const BaggageRestrictionManager_getBaggageRestrictions_args&);
  BaggageRestrictionManager_getBaggageRestrictions_args() : serviceName() {
  }

  virtual ~BaggageRestrictionManager_getBaggageRestrictions_args() throw();
  std::string serviceName;

  _BaggageRestrictionManager_getBaggageRestrictions_args__isset __isset;

  void __set_serviceName(const std::string& val);

  bool operator == (const BaggageRestrictionManager_getBaggageRestrictions_args & rhs) const
  {
    if (!(serviceName == rhs.serviceName))
      return false;
    return true;
  }
  bool operator != (const BaggageRestrictionManager_getBaggageRestrictions_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BaggageRestrictionManager_getBaggageRestrictions_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const BaggageRestrictionManager_getBaggageRestrictions_args& obj);
};


class BaggageRestrictionManager_getBaggageRestrictions_pargs {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};


  virtual ~BaggageRestrictionManager_getBaggageRestrictions_pargs() throw();
  const std::string* serviceName;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const BaggageRestrictionManager_getBaggageRestrictions_pargs& obj);
};

typedef struct _BaggageRestrictionManager_getBaggageRestrictions_result__isset {
  _BaggageRestrictionManager_getBaggageRestrictions_result__isset() : success(false) {}
  bool success :1;
} _BaggageRestrictionManager_getBaggageRestrictions_result__isset;

class BaggageRestrictionManager_getBaggageRestrictions_result {
 public:

  static const char* ascii_fingerprint; // = "4C53C87891978470ACC4312D02689432";
  static const uint8_t binary_fingerprint[16]; // = {0x4C,0x53,0xC8,0x78,0x91,0x97,0x84,0x70,0xAC,0xC4,0x31,0x2D,0x02,0x68,0x94,0x32};

  BaggageRestrictionManager_getBaggageRestrictions_result(const BaggageRestrictionManager_getBaggageRestrictions_result&);
  BaggageRestrictionManager_getBaggageRestrictions_result& operator=(const BaggageRestrictionManager_getBaggageRestrictions_result&);
  BaggageRestrictionManager_getBaggageRestrictions_result() {
  }

  virtual ~BaggageRestrictionManager_getBaggageRestrictions_result() throw();
  std::vector<BaggageRestriction>  success;

  _BaggageRestrictionManager_getBaggageRestrictions_result__isset __isset;

  void __set_success(const std::vector<BaggageRestriction> & val);

  bool operator == (const BaggageRestrictionManager_getBaggageRestrictions_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const BaggageRestrictionManager_getBaggageRestrictions_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BaggageRestrictionManager_getBaggageRestrictions_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const BaggageRestrictionManager_getBaggageRestrictions_result& obj);
};

typedef struct _BaggageRestrictionManager_getBaggageRestrictions_presult__isset {
  _BaggageRestrictionManager_getBaggageRestrictions_presult__isset() : success(false) {}
  bool success :1;
} _BaggageRestrictionManager_getBaggageRestrictions_presult__isset;

class BaggageRestrictionManager_getBaggageRestrictions_presult {
 public:

  static const char* ascii_fingerprint; // = "4C53C87891978470ACC4312D02689432";
  static const uint8_t binary_fingerprint[16]; // = {0x4C,0x53,0xC8,0x78,0x91,0x97,0x84,0x70,0xAC,0xC4,0x31,0x2D,0x02,0x68,0x94,0x32};


  virtual ~BaggageRestrictionManager_getBaggageRestrictions_presult() throw();
  std::vector<BaggageRestriction> * success;

  _BaggageRestrictionManager_getBaggageRestrictions_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const BaggageRestrictionManager_getBaggageRestrictions_presult& obj);
};

class BaggageRestrictionManagerClient : virtual public BaggageRestrictionManagerIf {
 public:
  BaggageRestrictionManagerClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  BaggageRestrictionManagerClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getBaggageRestrictions(std::vector<BaggageRestriction> & _return, const std::string& serviceName);
  void send_getBaggageRestrictions(const std::string& serviceName);
  void recv_getBaggageRestrictions(std::vector<BaggageRestriction> & _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class BaggageRestrictionManagerProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<BaggageRestrictionManagerIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (BaggageRestrictionManagerProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getBaggageRestrictions(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  BaggageRestrictionManagerProcessor(boost::shared_ptr<BaggageRestrictionManagerIf> iface) :
    iface_(iface) {
    processMap_["getBaggageRestrictions"] = &BaggageRestrictionManagerProcessor::process_getBaggageRestrictions;
  }

  virtual ~BaggageRestrictionManagerProcessor() {}
};

class BaggageRestrictionManagerProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  BaggageRestrictionManagerProcessorFactory(const ::boost::shared_ptr< BaggageRestrictionManagerIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< BaggageRestrictionManagerIfFactory > handlerFactory_;
};

class BaggageRestrictionManagerMultiface : virtual public BaggageRestrictionManagerIf {
 public:
  BaggageRestrictionManagerMultiface(std::vector<boost::shared_ptr<BaggageRestrictionManagerIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~BaggageRestrictionManagerMultiface() {}
 protected:
  std::vector<boost::shared_ptr<BaggageRestrictionManagerIf> > ifaces_;
  BaggageRestrictionManagerMultiface() {}
  void add(boost::shared_ptr<BaggageRestrictionManagerIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getBaggageRestrictions(std::vector<BaggageRestriction> & _return, const std::string& serviceName) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getBaggageRestrictions(_return, serviceName);
    }
    ifaces_[i]->getBaggageRestrictions(_return, serviceName);
    return;
  }

};

}} // namespace

#endif
