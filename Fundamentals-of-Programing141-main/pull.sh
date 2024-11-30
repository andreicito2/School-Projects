#!/bin/bash

git pull --no-edit > /dev/null
git fetch upstream
git checkout main &> /dev/null
git merge upstream/main -m "automerging"
