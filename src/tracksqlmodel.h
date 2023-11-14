/* $BEGIN_LICENSE

This file is part of Musique.
Copyright 2013, Flavio Tordini <flavio.tordini@gmail.com>

Musique is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Musique is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Musique.  If not, see <http://www.gnu.org/licenses/>.

$END_LICENSE */

#ifndef TRACKSQLMODEL_H
#define TRACKSQLMODEL_H

#include "basesqlmodel.h"
#include "model/track.h"
#include "finderwidget.h"

class TrackSqlModel : public BaseSqlModel {
    
    Q_OBJECT
    
public:
    TrackSqlModel(QObject *parent = 0);
    QVariant data(const QModelIndex &item, int role) const;
    Item* itemAt(const QModelIndex &index) const {
        return index.data(Finder::DataObjectRole).value<TrackPointer>();
    }
};

#endif
