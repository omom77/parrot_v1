from setuptools import find_packages
from setuptools import setup

setup(
    name='parrot_v1_utils',
    version='0.0.0',
    packages=find_packages(
        include=('parrot_v1_utils', 'parrot_v1_utils.*')),
)
