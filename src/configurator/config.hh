#include <string>

using namespace std;

namespace pdns_conf
{
class Config
{
  /*
   * This class contains the configuration of this program
   */
public:
  Config(string fpath);
  string getPdnsConfigFilename() { return d_pdns_conf; };

private:
  string d_config_path;
  string d_pdns_conf = "/etc/powerdns/pdns.conf.d/sysrepo.conf";
};
} // namespace pdns_conf