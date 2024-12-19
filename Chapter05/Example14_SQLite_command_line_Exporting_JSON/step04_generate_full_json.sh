#!/bin/bash

sqlite3 example_input.db "\
    SELECT json_object( \
        'deviceId', deviceId, \
        'isActive', isActive, \
        'batteryLevel', batteryLevel, \
        'currentLocation', json_object( \
            'latitude', currentLocationLatitude, \
            'longitude', currentLocationLongitude \
        ), \
        'lastErrorMessage', lastErrorMessage, \
        'allowedOperations', ( \
            SELECT json_group_array(allowedOperation) \
            FROM AllowedOperations \
        ) \
    ) \
    FROM Device; \
"
