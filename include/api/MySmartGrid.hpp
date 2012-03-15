/***********************************************************************/
/** @file MySmartGrid.hpp
 * Header file for volkszaehler.org API calls
 *
 *  @author Kai Krueger
 *  @date   2012-03-15
 *  @email  kai.krueger@itwm.fraunhofer.de
 * @copyright Copyright (c) 2011, The volkszaehler.org project
 * @package vzlogger
 * @license http://opensource.org/licenses/gpl-license.php GNU Public License
 *
 * (C) Fraunhofer ITWM
 **/
/*---------------------------------------------------------------------*/

/*
 * This file is part of volkzaehler.org
 *
 * volkzaehler.org is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * volkzaehler.org is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with volkszaehler.org. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MySmartGrid_hpp_
#define _MySmartGrid_hpp_

#include <ApiIF.hpp>

namespace vz {
  namespace api {
    class MySmartGrid : public ApiIF {
    public:
      typedef vz::shared_ptr<MySmartGrid> Ptr;

      MySmartGrid(Channel::Ptr ch);
      ~MySmartGrid();
    
      void send();

    private:
    }; //class MySmartGrid
  
  } // namespace api
} // namespace vz
#endif /* _MySmartGrid_hpp_ */
