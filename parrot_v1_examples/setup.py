from setuptools import find_packages, setup

package_name = 'parrot_v1_examples'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='om',
    maintainer_email='sakharkarom777@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_action_server = parrot_v1_examples.simple_action_server:main',
            'simple_action_client = parrot_v1_examples.simple_action_client:main'
        ],
    },
)
