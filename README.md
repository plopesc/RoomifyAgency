# RoomifyAgency

Installation instructions:
Download Drupal core.

drush dl drupal

Go to the /profiles directory inside Drupal and clone this repo into agency:

git clone https://github.com/Roomify/RoomifyAgency.git agency

Go to the /profiles/agency directory and run:

drush make --contrib-destination=. --no-core agency.make
