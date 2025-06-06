# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yolov8_def:msg/TargetOffset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TargetOffset(type):
    """Metaclass of message 'TargetOffset'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('yolov8_def')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yolov8_def.msg.TargetOffset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target_offset
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target_offset
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target_offset
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target_offset
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target_offset

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TargetOffset(metaclass=Metaclass_TargetOffset):
    """Message class 'TargetOffset'."""

    __slots__ = [
        '_box_center_x',
        '_box_center_y',
        '_x_offset',
        '_y_offset',
        '_status',
    ]

    _fields_and_field_types = {
        'box_center_x': 'double',
        'box_center_y': 'double',
        'x_offset': 'double',
        'y_offset': 'double',
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.box_center_x = kwargs.get('box_center_x', float())
        self.box_center_y = kwargs.get('box_center_y', float())
        self.x_offset = kwargs.get('x_offset', float())
        self.y_offset = kwargs.get('y_offset', float())
        self.status = kwargs.get('status', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.box_center_x != other.box_center_x:
            return False
        if self.box_center_y != other.box_center_y:
            return False
        if self.x_offset != other.x_offset:
            return False
        if self.y_offset != other.y_offset:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def box_center_x(self):
        """Message field 'box_center_x'."""
        return self._box_center_x

    @box_center_x.setter
    def box_center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'box_center_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'box_center_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._box_center_x = value

    @builtins.property
    def box_center_y(self):
        """Message field 'box_center_y'."""
        return self._box_center_y

    @box_center_y.setter
    def box_center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'box_center_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'box_center_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._box_center_y = value

    @builtins.property
    def x_offset(self):
        """Message field 'x_offset'."""
        return self._x_offset

    @x_offset.setter
    def x_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_offset = value

    @builtins.property
    def y_offset(self):
        """Message field 'y_offset'."""
        return self._y_offset

    @y_offset.setter
    def y_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_offset = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value
