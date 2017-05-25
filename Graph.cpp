#include <set>
#include <utility>

class Graph{

   private:
         
      std::set<int> vertex;
      std::set<std::pair<int, int> > edges;
      
   public:
         
      void ajoutev(int sommet){
         vert.insert(sommet);
      }
      
      void ajoutee(int a, int b){
         somm.insert(std::make_pair(a, b));
      }
};

int main(){
   Graph g;
   for(int i=0; i<5; i++){
      g.ajoutev(i);
      g.ajoutes(i, i);
   }
   return 0;
}
