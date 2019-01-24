pkgname='fpm'
pkgver=1
pkgrel=1
pkgdesc="AUR build helper"
arch=('any')
license=('unknown')
source=('git://github.com/thatmadhacker/fpm')
sha1sums=('SKIP')

build() {

cd "$pkgname"

./compile.sh

}

package() {

cd "$pkgname"

mkdir -p $pkgdir/usr/bin
cp fpm.o $pkgdir/usr/bin/fpm

}
