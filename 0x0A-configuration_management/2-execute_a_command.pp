# Command to kill the killmenow process

exec {'pkill -f killmenow':
    path => '/usr/bin:/usr/local/bin/:/bin/',
}
