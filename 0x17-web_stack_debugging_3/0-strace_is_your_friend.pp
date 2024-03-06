# Puppet resource type you want


exec { 'Fix wordpress site':
  command  => "sudo sed -i 's/.phpp/.php/' /var/www/html/wp-settings.php",
  provider => shell,
}
