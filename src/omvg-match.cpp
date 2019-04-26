
    # include <iostream>

    # include "openMVG/matching/indMatch.hpp"
    # include "openMVG/matching/indMatch_utils.hpp"

    using namespace openMVG;
    using namespace matching;

    int main( int argc, char ** argv ) {

        /* pair structure */
        PairWiseMatches mvg_match;

        /* match file path */
        std::string mvg_path( argv[1] );

        /* import pairwise matches */
        if ( Load( mvg_match, mvg_path ) == false ) {

            /* display message */
            std::cerr << "unable to read match file" << std::endl;

            /* send message */
            return( 1 );

        }

        /* parsing match */
        for ( const auto & mvg_cur_match : mvg_match ) {

            /* extract match index */
            const auto& mvg_i = mvg_cur_match.first.first;
            const auto& mvg_j = mvg_cur_match.first.second;
        
            /* display match index */
            std::cout << mvg_i << " " << mvg_j << std::endl;

        }

        /* send message */
        return( 0 );

    }
