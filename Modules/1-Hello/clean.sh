#!/usr/bin/env bash

echo "Cleaning"

rm *.o
rm *.out
rm *.cache
rm -rf gcm.cache/*
rmdir gcm.cache

echo "Cleaned"
