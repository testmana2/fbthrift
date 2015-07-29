/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */


import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

import com.facebook.thrift.lite.*;
import com.facebook.thrift.lite.protocol.*;


public class ModuleLogger {

  public final Module.EventType mEventType;

  private final Map<ThriftProperty<?>, Object> mMap = new HashMap<ThriftProperty<?>, Object>();

  public ModuleLogger(Module.EventType type) {
    mEventType = type;
  }

  public <T> ModuleLogger addProperty(ThriftProperty<T> property, T value) {
    mMap.put(property, value);
    return this;
  }

  public static <T> void writeFieldBegin(TBinaryProtocol oprot, ThriftProperty<T> field) throws IOException {
    TField tField = new TField(field.key, field.type, field.id);
    oprot.writeFieldBegin(tField);
  }

  public void write(TBinaryProtocol oprot) throws IOException {
    switch (mEventType) {
      case Internship: {
        oprot.writeStructBegin(new TStruct("Internship"));
        if (mMap.containsKey(Module.Internship_weeks) && mMap.get(Module.Internship_weeks) != null) {
          writeFieldBegin(oprot, Module.Internship_weeks);
          oprot.writeI32((int) mMap.get(Module.Internship_weeks));
          oprot.writeFieldEnd();
        }
      
        if (mMap.containsKey(Module.Internship_title) && mMap.get(Module.Internship_title) != null) {
          writeFieldBegin(oprot, Module.Internship_title);
          oprot.writeString((String) mMap.get(Module.Internship_title));
          oprot.writeFieldEnd();
        }
      
        if (mMap.containsKey(Module.Internship_employer) && mMap.get(Module.Internship_employer) != null) {
          writeFieldBegin(oprot, Module.Internship_employer);
          oprot.writeI32(((ModuleEnum)mMap.get(Module.Internship_employer)).getValue());
          oprot.writeFieldEnd();
        }
      
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        break;
      }
      
      
    }
  }
}