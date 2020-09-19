#include <..\lib\etherShield\etherShield.h>
#include <..\lib\ETHER_28J60\ETHER_28J60.h>



//Define o MAC da placa de rede. Nao eh necessario alterar
static uint8_t mac[6] = {0x54, 0x55, 0x58, 0x10, 0x00, 0x24};
//Define o endereco IP da sua placa
static uint8_t ip[4] = {192, 168, 56, 100};
 
static uint16_t port = 80; 
 
ETHER_28J60 conn;




void test_connection(){
    conn.setup(mac, ip, port);
    if (conn.serviceRequest())
  {
    conn.print(1);
}
