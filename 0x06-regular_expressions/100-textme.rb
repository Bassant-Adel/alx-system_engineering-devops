#!/usr/bin/env ruby
# school

puts ARGV[0].scan(/(?<=from:|to:|flags:)[^\]]*/).join(",")
