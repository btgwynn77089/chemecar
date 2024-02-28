Installation of arduino cli is mandatory for these diagnostic tests.
More information can be found here: https://arduino.github.io/arduino-cli/0.35/installation/

To set up arduino-cli using the provided script, you must have bash or sh or a similar shell
installed on your system. In MacOS/Linux, this is built in.

In Windows, you must install bash or set up your system to run diagnostics for the Arduino manually. It is highly recommended you
install bash, otherwise you will have to run the diagnostic command by command instead of
running the provided script file.

To use the provided script:

Linux:
make the file executable with the following commands:

sudo chmod +x install.sh
./install.sh

MacOS:
execute the file using sudo:
sudo bash install.sh


To set up manually:

1. verify that arduino-cli is installed properly by opening your command line and entering
   "arduino-cli"
2. issue the command "arduino-cli core install --fqbn arduino:avr:uno" This will install the
   necessary drivers for our arduino uno board. You're all set to run the script!
