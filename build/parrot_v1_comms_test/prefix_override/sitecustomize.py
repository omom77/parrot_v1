import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/om/parrot_ws/src/install/parrot_v1_comms_test'
