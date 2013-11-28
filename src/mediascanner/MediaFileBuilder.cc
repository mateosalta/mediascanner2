/*
 * Copyright (C) 2013 Canonical, Ltd.
 *
 * Authors:
 *    Jussi Pakkanen <jussi.pakkanen@canonical.com>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of version 3 of the GNU General Public License as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include"MediaFileBuilder.hh"
#include"MediaFile.hh"
#include<stdexcept>

MediaFileBuilder::MediaFileBuilder() {
}

MediaFile MediaFileBuilder::build() const {
    return MediaFile(filename, title, date, author, album, album_artist,
            track_number, duration, type);
}

void MediaFileBuilder::setType(MediaType t) {
    if(type_set)
        throw std::invalid_argument("Tried to set type when it was already set.");
    type = t;
    type_set = true;
}

void MediaFileBuilder::setFilename(const std::string &fname) {
    if(filename_set)
        throw std::invalid_argument("Tried to set filename when it was already set.");
    filename = fname;
    filename_set = true;
}

void MediaFileBuilder::setTitle(const std::string &t) {
    if(title_set)
        throw std::invalid_argument("Tried to set title when it was already set.");
    title = t;
    title_set = true;
}

void MediaFileBuilder::setDate(const std::string &d) {
    if(date_set)
        throw std::invalid_argument("Tried to set date when it was already set.");
    date = d;
    date_set = true;
}

void MediaFileBuilder::setAuthor(const std::string &a) {
    if(author_set)
        throw std::invalid_argument("Tried to set author when it was already set.");
    author = a;
    author_set = true;
}

void MediaFileBuilder::setAlbum(const std::string &a) {
    if(album_set)
        throw std::invalid_argument("Tried to set album when it was already set.");
    album = a;
    album_set = true;
}

void MediaFileBuilder::setAlbumArtist(const std::string &a) {
    if(album_artist_set)
        throw std::invalid_argument("Tried to set album artist when it was already set.");
    album_artist = a;
    album_artist_set = true;
}

void MediaFileBuilder::setTrackNumber(int n) {
    if(track_number_set)
        throw std::invalid_argument("Tried to set track number when it was already set.");
    track_number = n;
    track_number_set = true;
}

void MediaFileBuilder::setDuration(int n) {
    if(duration_set)
        throw std::invalid_argument("Tried to set duration when it was already set.");
    duration = n;
    duration_set = true;
}
