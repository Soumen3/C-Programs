//#include <cstdint>

using namespace std;

uint64_t getIFMAC(const string &ifname) {
  ifstream iface("/sys/class/net/" + ifname + "/address");
  string str((istreambuf_iterator<char>(iface)), istreambuf_iterator<char>());
  if (str.length() > 0) {
    string hex = regex_replace(str, std::regex(":"), "");
    return stoull(hex, 0, 16);
  } else {
    return 0;
  }
}
int main()
{
  string iface = "eth0";
  printf("%s: mac=%016llX\n", iface.c_str(), getIFMAC(iface));
}
