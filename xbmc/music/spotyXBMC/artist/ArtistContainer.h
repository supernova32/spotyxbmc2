/*
 spotyxbmc2 - A project to integrate Spotify into XBMC
 Copyright (C) 2011  David Erenger

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

 For contact with the author:
 david.erenger@gmail.com
 */

#ifndef ARTISTCONTAINER_H_
#define ARTISTCONTAINER_H_

#include <vector>
#include "FileItem.h"

using namespace std;

namespace addon_music_spotify {

  class SxArtist;

  class ArtistContainer {
  public:
    ArtistContainer();
    virtual ~ArtistContainer();

    virtual bool getArtistItems(CFileItemList& items) = 0;

  protected:
    vector<SxArtist*> m_artists;

    void removeAllArtists();
    bool artistsLoaded();
  };

} /* namespace addon_music_spotify */
#endif /* ARTISTCONTAINER_H_ */
