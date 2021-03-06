/*

  This file is a part of JRTPLIB
  Copyright (c) 1999-2016 Jori Liesenborgs

  Contact: jori.liesenborgs@gmail.com

  This library was developed at the Expertise Centre for Digital Media
  (http://www.edm.uhasselt.be), a research center of the Hasselt University
  (http://www.uhasselt.be). The library is based upon work done for 
  my thesis at the School for Knowledge Technology (Belgium/The Netherlands).

  Permission is hereby granted, free of charge, to any person obtaining a
  copy of this software and associated documentation files (the "Software"),
  to deal in the Software without restriction, including without limitation
  the rights to use, copy, modify, merge, publish, distribute, sublicense,
  and/or sell copies of the Software, and to permit persons to whom the
  Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included
  in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
  IN THE SOFTWARE.

*/

/**
 * \file rtperrors.h
 */

#ifndef RTPERRORS_H

#define RTPERRORS_H

#include "rtpconfig.h"
#include <string>

namespace jrtplib
{

/** Returns a string describing the error code \c errcode. */
std::string JRTPLIB_IMPORTEXPORT RTPGetErrorString(int errcode);

} // end namespace

#define ERR_RTP_OUTOFMEM                                          -1
#define ERR_RTP_NOTHREADSUPPORT                                   -2
#define ERR_RTP_COLLISIONLIST_BADADDRESS                          -3
#define ERR_RTP_HASHTABLE_ELEMENTALREADYEXISTS                    -4
#define ERR_RTP_HASHTABLE_ELEMENTNOTFOUND                         -5
#define ERR_RTP_HASHTABLE_FUNCTIONRETURNEDINVALIDHASHINDEX        -6
#define ERR_RTP_HASHTABLE_NOCURRENTELEMENT                        -7
#define ERR_RTP_KEYHASHTABLE_FUNCTIONRETURNEDINVALIDHASHINDEX     -8
#define ERR_RTP_KEYHASHTABLE_KEYALREADYEXISTS                     -9
#define ERR_RTP_KEYHASHTABLE_KEYNOTFOUND                          -10
#define ERR_RTP_KEYHASHTABLE_NOCURRENTELEMENT                     -11
#define ERR_RTP_PACKBUILD_ALREADYINIT                             -12
#define ERR_RTP_PACKBUILD_CSRCALREADYINLIST                       -13
#define ERR_RTP_PACKBUILD_CSRCLISTFULL                            -14
#define ERR_RTP_PACKBUILD_CSRCNOTINLIST                           -15
#define ERR_RTP_PACKBUILD_DEFAULTMARKNOTSET                       -16
#define ERR_RTP_PACKBUILD_DEFAULTPAYLOADTYPENOTSET                -17
#define ERR_RTP_PACKBUILD_DEFAULTTSINCNOTSET                      -18
#define ERR_RTP_PACKBUILD_INVALIDMAXPACKETSIZE                    -19
#define ERR_RTP_PACKBUILD_NOTINIT                                 -20
#define ERR_RTP_PACKET_BADPAYLOADTYPE                             -21
#define ERR_RTP_PACKET_DATAEXCEEDSMAXSIZE                         -22
#define ERR_RTP_PACKET_EXTERNALBUFFERNULL                         -23
#define ERR_RTP_PACKET_ILLEGALBUFFERSIZE                          -24
#define ERR_RTP_PACKET_INVALIDPACKET                              -25
#define ERR_RTP_PACKET_TOOMANYCSRCS                               -26
#define ERR_RTP_POLLTHREAD_ALREADYRUNNING                         -27
#define ERR_RTP_POLLTHREAD_CANTINITMUTEX                          -28
#define ERR_RTP_POLLTHREAD_CANTSTARTTHREAD                        -29
#define ERR_RTP_RTCPCOMPOUND_INVALIDPACKET                        -30
#define ERR_RTP_RTCPCOMPPACKBUILDER_ALREADYBUILDING               -31
#define ERR_RTP_RTCPCOMPPACKBUILDER_ALREADYBUILT                  -32
#define ERR_RTP_RTCPCOMPPACKBUILDER_ALREADYGOTREPORT              -33
#define ERR_RTP_RTCPCOMPPACKBUILDER_APPDATALENTOOBIG              -34
#define ERR_RTP_RTCPCOMPPACKBUILDER_BUFFERSIZETOOSMALL            -35
#define ERR_RTP_RTCPCOMPPACKBUILDER_ILLEGALAPPDATALENGTH          -36
#define ERR_RTP_RTCPCOMPPACKBUILDER_ILLEGALSUBTYPE                -37
#define ERR_RTP_RTCPCOMPPACKBUILDER_INVALIDITEMTYPE               -38
#define ERR_RTP_RTCPCOMPPACKBUILDER_MAXPACKETSIZETOOSMALL         -39
#define ERR_RTP_RTCPCOMPPACKBUILDER_NOCURRENTSOURCE               -40
#define ERR_RTP_RTCPCOMPPACKBUILDER_NOREPORTPRESENT               -41
#define ERR_RTP_RTCPCOMPPACKBUILDER_NOTBUILDING                   -42
#define ERR_RTP_RTCPCOMPPACKBUILDER_NOTENOUGHBYTESLEFT            -43
#define ERR_RTP_RTCPCOMPPACKBUILDER_REPORTNOTSTARTED              -44
#define ERR_RTP_RTCPCOMPPACKBUILDER_TOOMANYSSRCS                  -45
#define ERR_RTP_RTCPCOMPPACKBUILDER_TOTALITEMLENGTHTOOBIG         -46
#define ERR_RTP_RTCPPACKETBUILDER_ALREADYINIT                     -47
#define ERR_RTP_RTCPPACKETBUILDER_ILLEGALMAXPACKSIZE              -48
#define ERR_RTP_RTCPPACKETBUILDER_ILLEGALTIMESTAMPUNIT            -49
#define ERR_RTP_RTCPPACKETBUILDER_NOTINIT                         -50
#define ERR_RTP_RTCPPACKETBUILDER_PACKETFILLEDTOOSOON             -51
#define ERR_RTP_SCHEDPARAMS_BADFRACTION                           -52
#define ERR_RTP_SCHEDPARAMS_BADMINIMUMINTERVAL                    -53
#define ERR_RTP_SCHEDPARAMS_INVALIDBANDWIDTH                      -54
#define ERR_RTP_SDES_LENGTHTOOBIG                                 -55
#define ERR_RTP_SDES_MAXPRIVITEMS                                 -56
#define ERR_RTP_SDES_PREFIXNOTFOUND                               -57
#define ERR_RTP_SESSION_ALREADYCREATED                            -58
#define ERR_RTP_SESSION_CANTGETLOGINNAME                          -59
#define ERR_RTP_SESSION_CANTINITMUTEX                             -60
#define ERR_RTP_SESSION_MAXPACKETSIZETOOSMALL                     -61
#define ERR_RTP_SESSION_NOTCREATED                                -62
#define ERR_RTP_SESSION_UNSUPPORTEDTRANSMISSIONPROTOCOL           -63
#define ERR_RTP_SESSION_USINGPOLLTHREAD                           -64
#define ERR_RTP_SOURCES_ALREADYHAVEOWNSSRC                        -65
#define ERR_RTP_SOURCES_DONTHAVEOWNSSRC                           -66
#define ERR_RTP_SOURCES_ILLEGALSDESTYPE                           -67
#define ERR_RTP_SOURCES_SSRCEXISTS                                -68
#define ERR_RTP_TRANS_BUFFERLENGTHTOOSMALL                        -69
#define ERR_RTP_UDPV4TRANS_ALREADYCREATED                         -70
#define ERR_RTP_UDPV4TRANS_ALREADYINIT                            -71
#define ERR_RTP_UDPV4TRANS_ALREADYWAITING                         -72
#define ERR_RTP_UDPV4TRANS_CANTBINDRTCPSOCKET                     -73
#define ERR_RTP_UDPV4TRANS_CANTBINDRTPSOCKET                      -74
#define ERR_RTP_UDPV4TRANS_CANTCREATEABORTDESCRIPTORS             -75
#define ERR_RTP_UDPV4TRANS_CANTCREATEPIPE                         -76
#define ERR_RTP_UDPV4TRANS_CANTCREATESOCKET                       -77
#define ERR_RTP_UDPV4TRANS_CANTINITMUTEX                          -78
#define ERR_RTP_UDPV4TRANS_CANTSETRTCPRECEIVEBUF                  -79
#define ERR_RTP_UDPV4TRANS_CANTSETRTCPTRANSMITBUF                 -80
#define ERR_RTP_UDPV4TRANS_CANTSETRTPRECEIVEBUF                   -81
#define ERR_RTP_UDPV4TRANS_CANTSETRTPTRANSMITBUF                  -82
#define ERR_RTP_UDPV4TRANS_COULDNTJOINMULTICASTGROUP              -83
#define ERR_RTP_UDPV4TRANS_DIFFERENTRECEIVEMODE                   -84
#define ERR_RTP_UDPV4TRANS_ERRORINSELECT                          -85
#define ERR_RTP_UDPV4TRANS_ILLEGALPARAMETERS                      -86
#define ERR_RTP_UDPV4TRANS_INVALIDADDRESSTYPE                     -87
#define ERR_RTP_UDPV4TRANS_NOLOCALIPS                             -88
#define ERR_RTP_UDPV4TRANS_NOMULTICASTSUPPORT                     -89
#define ERR_RTP_UDPV4TRANS_NOSUCHENTRY                            -90
#define ERR_RTP_UDPV4TRANS_NOTAMULTICASTADDRESS                   -91
#define ERR_RTP_UDPV4TRANS_NOTCREATED                             -92
#define ERR_RTP_UDPV4TRANS_NOTINIT                                -93
#define ERR_RTP_UDPV4TRANS_NOTWAITING                             -94
#define ERR_RTP_UDPV4TRANS_PORTBASENOTEVEN                        -95
#define ERR_RTP_UDPV4TRANS_SPECIFIEDSIZETOOBIG                    -96
#define ERR_RTP_UDPV6TRANS_ALREADYCREATED                         -97
#define ERR_RTP_UDPV6TRANS_ALREADYINIT                            -98
#define ERR_RTP_UDPV6TRANS_ALREADYWAITING                         -99
#define ERR_RTP_UDPV6TRANS_CANTBINDRTCPSOCKET                     -100
#define ERR_RTP_UDPV6TRANS_CANTBINDRTPSOCKET                      -101
#define ERR_RTP_UDPV6TRANS_CANTCREATEABORTDESCRIPTORS             -102
#define ERR_RTP_UDPV6TRANS_CANTCREATEPIPE                         -103
#define ERR_RTP_UDPV6TRANS_CANTCREATESOCKET                       -104
#define ERR_RTP_UDPV6TRANS_CANTINITMUTEX                          -105
#define ERR_RTP_UDPV6TRANS_CANTSETRTCPRECEIVEBUF                  -106
#define ERR_RTP_UDPV6TRANS_CANTSETRTCPTRANSMITBUF                 -107
#define ERR_RTP_UDPV6TRANS_CANTSETRTPRECEIVEBUF                   -108
#define ERR_RTP_UDPV6TRANS_CANTSETRTPTRANSMITBUF                  -109
#define ERR_RTP_UDPV6TRANS_COULDNTJOINMULTICASTGROUP              -110
#define ERR_RTP_UDPV6TRANS_DIFFERENTRECEIVEMODE                   -111
#define ERR_RTP_UDPV6TRANS_ERRORINSELECT                          -112
#define ERR_RTP_UDPV6TRANS_ILLEGALPARAMETERS                      -113
#define ERR_RTP_UDPV6TRANS_INVALIDADDRESSTYPE                     -114
#define ERR_RTP_UDPV6TRANS_NOLOCALIPS                             -115
#define ERR_RTP_UDPV6TRANS_NOMULTICASTSUPPORT                     -116
#define ERR_RTP_UDPV6TRANS_NOSUCHENTRY                            -117
#define ERR_RTP_UDPV6TRANS_NOTAMULTICASTADDRESS                   -118
#define ERR_RTP_UDPV6TRANS_NOTCREATED                             -119
#define ERR_RTP_UDPV6TRANS_NOTINIT                                -120
#define ERR_RTP_UDPV6TRANS_NOTWAITING                             -121
#define ERR_RTP_UDPV6TRANS_PORTBASENOTEVEN                        -122
#define ERR_RTP_UDPV6TRANS_SPECIFIEDSIZETOOBIG                    -123
#define ERR_RTP_INTERNALSOURCEDATA_INVALIDPROBATIONTYPE           -124
#define ERR_RTP_SESSION_USERDEFINEDTRANSMITTERNULL                -125
#define ERR_RTP_FAKETRANS_ALREADYCREATED                          -126
#define ERR_RTP_FAKETRANS_ALREADYINIT                             -127
#define ERR_RTP_FAKETRANS_ALREADYWAITING                          -128
#define ERR_RTP_FAKETRANS_CANTCREATEABORTDESCRIPTORS              -129
#define ERR_RTP_FAKETRANS_CANTCREATEPIPE                          -130
#define ERR_RTP_FAKETRANS_CANTINITMUTEX                           -131
#define ERR_RTP_FAKETRANS_COULDNTJOINMULTICASTGROUP               -132
#define ERR_RTP_FAKETRANS_DIFFERENTRECEIVEMODE                    -133
#define ERR_RTP_FAKETRANS_ERRORINSELECT                           -134
#define ERR_RTP_FAKETRANS_ILLEGALPARAMETERS                       -135
#define ERR_RTP_FAKETRANS_INVALIDADDRESSTYPE                      -136
#define ERR_RTP_FAKETRANS_NOLOCALIPS                              -137
#define ERR_RTP_FAKETRANS_NOMULTICASTSUPPORT                      -138
#define ERR_RTP_FAKETRANS_NOSUCHENTRY                             -139
#define ERR_RTP_FAKETRANS_NOTAMULTICASTADDRESS                    -140
#define ERR_RTP_FAKETRANS_NOTCREATED                              -141
#define ERR_RTP_FAKETRANS_NOTINIT                                 -142
#define ERR_RTP_FAKETRANS_NOTWAITING                              -143
#define ERR_RTP_FAKETRANS_PORTBASENOTEVEN                         -144
#define ERR_RTP_FAKETRANS_SPECIFIEDSIZETOOBIG                     -145
#define ERR_RTP_FAKETRANS_WAITNOTIMPLEMENTED                      -146
#define ERR_RTP_RTPRANDOMURANDOM_CANTOPEN                         -147
#define ERR_RTP_RTPRANDOMURANDOM_ALREADYOPEN                      -148
#define ERR_RTP_RTPRANDOMRANDS_NOTSUPPORTED                       -149
#define ERR_RTP_EXTERNALTRANS_ALREADYCREATED                      -150
#define ERR_RTP_EXTERNALTRANS_ALREADYINIT                         -151
#define ERR_RTP_EXTERNALTRANS_ALREADYWAITING                      -152
#define ERR_RTP_EXTERNALTRANS_BADRECEIVEMODE                      -153
#define ERR_RTP_EXTERNALTRANS_CANTCREATEABORTDESCRIPTORS          -154
#define ERR_RTP_EXTERNALTRANS_CANTCREATEPIPE                      -155
#define ERR_RTP_EXTERNALTRANS_CANTINITMUTEX                       -156
#define ERR_RTP_EXTERNALTRANS_ERRORINSELECT                       -157
#define ERR_RTP_EXTERNALTRANS_ILLEGALPARAMETERS                   -158
#define ERR_RTP_EXTERNALTRANS_NOACCEPTLIST                        -159
#define ERR_RTP_EXTERNALTRANS_NODESTINATIONSSUPPORTED             -160
#define ERR_RTP_EXTERNALTRANS_NOIGNORELIST                        -161
#define ERR_RTP_EXTERNALTRANS_NOMULTICASTSUPPORT                  -162
#define ERR_RTP_EXTERNALTRANS_NOSENDER                            -163
#define ERR_RTP_EXTERNALTRANS_NOTCREATED                          -164
#define ERR_RTP_EXTERNALTRANS_NOTINIT                             -165
#define ERR_RTP_EXTERNALTRANS_NOTWAITING                          -166
#define ERR_RTP_EXTERNALTRANS_SENDERROR                           -167
#define ERR_RTP_EXTERNALTRANS_SPECIFIEDSIZETOOBIG                 -168
#define ERR_RTP_UDPV4TRANS_CANTGETSOCKETPORT                      -169
#define ERR_RTP_UDPV4TRANS_NOTANIPV4SOCKET                        -170
#define ERR_RTP_UDPV4TRANS_SOCKETPORTNOTSET                       -171
#define ERR_RTP_UDPV4TRANS_CANTGETSOCKETTYPE                      -172
#define ERR_RTP_UDPV4TRANS_INVALIDSOCKETTYPE                      -173
#define ERR_RTP_UDPV4TRANS_CANTGETVALIDSOCKET                     -174
#define ERR_RTP_UDPV4TRANS_TOOMANYATTEMPTSCHOOSINGSOCKET          -175
#define ERR_RTP_RTPSESSION_CHANGEREQUESTEDBUTNOTIMPLEMENTED       -176
#define ERR_RTP_SECURESESSION_CONTEXTALREADYINITIALIZED           -177
#define ERR_RTP_SECURESESSION_CANTINITIALIZE_SRTPCONTEXT          -178
#define ERR_RTP_SECURESESSION_CANTINITMUTEX                       -179
#define ERR_RTP_SECURESESSION_CONTEXTNOTINITIALIZED               -180
#define ERR_RTP_SECURESESSION_NOTENOUGHDATATOENCRYPT              -181
#define ERR_RTP_SECURESESSION_CANTENCRYPTRTPDATA                  -182
#define ERR_RTP_SECURESESSION_CANTENCRYPTRTCPDATA                 -183
#define ERR_RTP_SECURESESSION_NOTENOUGHDATATODECRYPT              -184
#define ERR_RTP_SECURESESSION_CANTDECRYPTRTPDATA                  -185
#define ERR_RTP_SECURESESSION_CANTDECRYPTRTCPDATA                 -186

#endif // RTPERRORS_H

