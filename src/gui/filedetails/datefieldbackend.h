/*
 * Copyright (C) 2023 by Claudio Cambra <claudio.cambra@nextcloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#pragma once

#include <QDateTime>
#include <QObject>

namespace OCC
{
namespace Quick
{

class DateFieldBackend : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QDateTime dateTime READ dateTime WRITE setDateTime NOTIFY dateTimeChanged)

public:
    explicit DateFieldBackend() = default;

    [[nodiscard]] QDateTime dateTime() const;

public slots:
    void setDateTime(const QDateTime &dateTime);

signals:
    void dateTimeChanged();

private:
    QDateTime m_dateTime;
};

} // namespace Quick
} // namespace OCC