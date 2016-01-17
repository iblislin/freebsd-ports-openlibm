# Created by: Iblis Lin <iblis@hs.ntnu.edu.tw>
# $FreeBSD$

PORTNAME=	openlibm
PORTVERSION=	0.4.1
DISTVERSIONPREFIX=	v
CATEGORIES=	math
MASTER_SITES=	GH

MAINTAINER=	iblis@hs.ntnu.edu.tw
COMMENT=	High quality system independent, portable, open source libm

USE_GITHUB=	yes
GH_ACCOUNT=	JuliaLang
GH_PROJECT=	openlibm

USES=	gmake
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

MAKE_ENV+=	prefix=${PREFIX}

.if ${ARCH} == "amd64" || ${ARCH} == "i386"
PLIST_SUB+=	EXTRA_HEADER=""
.else
PLIST_SUB+=	EXTRA_HEADER="@comment "
.endif

.include <bsd.port.post.mk>
