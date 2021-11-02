# Prerequisites:
* docker
* wls2
* VSCode
* Remote extension for Docker for VSCode
* For using UI apps inside of the docker image: WSLg2

# Running the dev envrionment
For the normal usage of the dev environment create an empty docker volume named X11. This can be done via the Ui or the command:
`docker volume create X11`

If you wan to run the UI based features of this project you will have to make sure that you have WSLg2 installed.
Then open a WSL command line and run the following command:
`docker volume create --driver local -o device=/tmp/.X11-unix -o type=none -o o=bind X11`

After that you are ready to start VSCode and open the workspace in the dev container
