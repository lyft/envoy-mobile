// NOLINT(namespace-envoy)
// NOLINT(spelling)

/**
 * Default certificates.
 */
const char* certificates = R"certs(
              inline_string: |
                # $OpenBSD: cert.pem,v 1.22 2021/02/12 12:16:53 sthen Exp $
                ### /C=ES/CN=Autoridad de Certificacion Firmaprofesional CIF A62634068

                === /C=ES/CN=Autoridad de Certificacion Firmaprofesional CIF A62634068
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 6047274297262753887 (0x53ec3beefbb2485f)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: May 20 08:38:15 2009 GMT
                            Not After : Dec 31 08:38:15 2030 GMT
                        Subject: C=ES, CN=Autoridad de Certificacion Firmaprofesional CIF A62634068
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE, pathlen:1
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                65:CD:EB:AB:35:1E:00:3E:7E:D5:74:C0:1C:B4:73:47:0E:1A:64:2F
                            X509v3 Certificate Policies:
                                Policy: X509v3 Any Policy
                                  CPS: http://www.firmaprofesional.com/cps
                                  User Notice:
                                    Explicit Text:

                SHA1 Fingerprint=AE:C5:FB:3F:C8:E1:BF:C4:E5:4F:03:07:5A:9A:E8:00:B7:F7:B6:FA
                SHA256 Fingerprint=04:04:80:28:BF:1F:28:64:D4:8F:9A:D4:D8:32:94:36:6A:82:88:56:55:3F:3B:14:30:3F:90:14:7F:5D:40:EF
                -----BEGIN CERTIFICATE-----
                MIIGFDCCA/ygAwIBAgIIU+w77vuySF8wDQYJKoZIhvcNAQEFBQAwUTELMAkGA1UE
                BhMCRVMxQjBABgNVBAMMOUF1dG9yaWRhZCBkZSBDZXJ0aWZpY2FjaW9uIEZpcm1h
                cHJvZmVzaW9uYWwgQ0lGIEE2MjYzNDA2ODAeFw0wOTA1MjAwODM4MTVaFw0zMDEy
                MzEwODM4MTVaMFExCzAJBgNVBAYTAkVTMUIwQAYDVQQDDDlBdXRvcmlkYWQgZGUg
                Q2VydGlmaWNhY2lvbiBGaXJtYXByb2Zlc2lvbmFsIENJRiBBNjI2MzQwNjgwggIi
                MA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDKlmuO6vj78aI14H9M2uDDUtd9
                thDIAl6zQyrET2qyyhxdKJp4ERppWVevtSBC5IsP5t9bpgOSL/UR5GLXMnE42QQM
                cas9UX4PB99jBVzpv5RvwSmCwLTaUbDBPLutN0pcyvFLNg4kq7/DhHf9qFD0sefG
                L9ItWY16Ck6WaVICqjaY7Pz6FIMMNx/Jkjd/14Et5cS54D40/mf0PmbR0/RAz15i
                NA9wBj4gGFrO93IbJWyTdBSTo3OxDqqHECNZXyAFGUftaI6SEspd/NYrspI8IM/h
                X68gvqB2f3bl7BqGYTM+53u0P6APjqK5am+5hyZvQWyIplD9amML9ZMWGxmPsu2b
                m8mQ9QEM3xk9Dz44I8kvjwzRAv4bVdZO0I08r0+k8/6vKtMFnXkIoctXMbScyJCy
                Z/QYFpM6/EfY0XiWMR+6KwxfXZmtY4laJCB22N/9q06mIqqdXuYnin1oKaPnirja
                EbsXLZmdEyRG98Xi2J+Of8ePdG1asuhy9azuJBCtLxTa/y2aRnFHvkLfuwHb9H/T
                KI8xWVvTyQKmtFLKbpf7Q8UIJm+K9Lv9nyiqDdVF8xM6HdjAeI9BZzwelGSuewvF
                6NkBiDkal4ZkQdU7hwxu+g/GvUgUvzlN1J5Bto+WHWOWk9mVBngxaJ43BjuAiUVh
                OSPHG0SjFeUc+JIwuwIDAQABo4HvMIHsMBIGA1UdEwEB/wQIMAYBAf8CAQEwDgYD
                VR0PAQH/BAQDAgEGMB0GA1UdDgQWBBRlzeurNR4APn7VdMActHNHDhpkLzCBpgYD
                VR0gBIGeMIGbMIGYBgRVHSAAMIGPMC8GCCsGAQUFBwIBFiNodHRwOi8vd3d3LmZp
                cm1hcHJvZmVzaW9uYWwuY29tL2NwczBcBggrBgEFBQcCAjBQHk4AUABhAHMAZQBv
                ACAAZABlACAAbABhACAAQgBvAG4AYQBuAG8AdgBhACAANAA3ACAAQgBhAHIAYwBl
                AGwAbwBuAGEAIAAwADgAMAAxADcwDQYJKoZIhvcNAQEFBQADggIBABd9oPm03cXF
                661LJLWhAqvdpYhKsg9VSytXjDvlMd3+xDLx51tkljYyGOylMnfX40S2wBEqgLk9
                am58m9Ot/MPWo+ZkKXzR4Tgegiv/J2Wv+xYVxC5xhOW1//qkR71kMrv2JYSiJ0L1
                ILDCExARzRAVukKQKtJE4ZYm6zFIEv0q2skGz3QeqUvVhyj5eTSSPi5E6PaPT481
                PyWzOdxjKpBrIF/EUhJOlywqrJ2X3kjyo2bbwtKDlaZmp54lD+kLM5FlClrD2VQS
                3a/DTg4fJl4N3LON7NWBcN7STyQF82xO9UxJZo3R/9ILJUFI/lGExkKvgATP0H5k
                SeTy36LssUzAKh3ntLFlosS88Zj0qnAHY7S42jtM+kAiMFsRpvAFDsYCA0irhpuF
                3dvd6qJ2gHN99ZwExEWN57kci57q13XRcrHedUTnQn3iV2t93Jm8PYMo6oCTjcVM
                ZcFwgbg4/EMxsvYDNEeyrPsiBsse3RdHHF9mudMaotoRsaS8I8nkvof/uZS2+F0g
                StRf571oe2XyFR7SOqkt6dhrJKyXWERHrVkY8SFlcN7ONGCoQPHzPKTDKCOM/icz
                Q0CgFzzr6juwcqajuUpLXhZI9LK8yIySxZ2frHI2vDSANGupi5LAuBft7HZT9SQB
                jLMi6Et8Vcad+qMUu2WFbm5PEn4KPJ2V
                -----END CERTIFICATE-----

                ### AC Camerfirma S.A.

                === /C=EU/L=Madrid (see current address at www.camerfirma.com/address)/serialNumber=A82743287/O=AC Camerfirma S.A./CN=Chambers of Commerce Root - 2008
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            a3:da:42:7e:a4:b1:ae:da
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Aug  1 12:29:50 2008 GMT
                            Not After : Jul 31 12:29:50 2038 GMT
                        Subject: C=EU, L=Madrid (see current address at www.camerfirma.com/address)/serialNumber=A82743287, O=AC Camerfirma S.A., CN=Chambers of Commerce Root - 2008
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE, pathlen:12
                            X509v3 Subject Key Identifier:
                                F9:24:AC:0F:B2:B5:F8:79:C0:FA:60:88:1B:C4:D9:4D:02:9E:17:19
                            X509v3 Authority Key Identifier:
                                keyid:F9:24:AC:0F:B2:B5:F8:79:C0:FA:60:88:1B:C4:D9:4D:02:9E:17:19
                                DirName:/C=EU/L=Madrid (see current address at www.camerfirma.com/address)/serialNumber=A82743287/O=AC Camerfirma S.A./CN=Chambers of Commerce Root - 2008
                                serial:A3:DA:42:7E:A4:B1:AE:DA

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Certificate Policies:
                                Policy: X509v3 Any Policy
                                  CPS: http://policy.camerfirma.com

                SHA1 Fingerprint=78:6A:74:AC:76:AB:14:7F:9C:6A:30:50:BA:9E:A8:7E:FE:9A:CE:3C
                SHA256 Fingerprint=06:3E:4A:FA:C4:91:DF:D3:32:F3:08:9B:85:42:E9:46:17:D8:93:D7:FE:94:4E:10:A7:93:7E:E2:9D:96:93:C0
                -----BEGIN CERTIFICATE-----
                MIIHTzCCBTegAwIBAgIJAKPaQn6ksa7aMA0GCSqGSIb3DQEBBQUAMIGuMQswCQYD
                VQQGEwJFVTFDMEEGA1UEBxM6TWFkcmlkIChzZWUgY3VycmVudCBhZGRyZXNzIGF0
                IHd3dy5jYW1lcmZpcm1hLmNvbS9hZGRyZXNzKTESMBAGA1UEBRMJQTgyNzQzMjg3
                MRswGQYDVQQKExJBQyBDYW1lcmZpcm1hIFMuQS4xKTAnBgNVBAMTIENoYW1iZXJz
                IG9mIENvbW1lcmNlIFJvb3QgLSAyMDA4MB4XDTA4MDgwMTEyMjk1MFoXDTM4MDcz
                MTEyMjk1MFowga4xCzAJBgNVBAYTAkVVMUMwQQYDVQQHEzpNYWRyaWQgKHNlZSBj
                dXJyZW50IGFkZHJlc3MgYXQgd3d3LmNhbWVyZmlybWEuY29tL2FkZHJlc3MpMRIw
                EAYDVQQFEwlBODI3NDMyODcxGzAZBgNVBAoTEkFDIENhbWVyZmlybWEgUy5BLjEp
                MCcGA1UEAxMgQ2hhbWJlcnMgb2YgQ29tbWVyY2UgUm9vdCAtIDIwMDgwggIiMA0G
                CSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQCvAMtwNyuAWko6bHiUfaN/Gh/2NdW9
                28sNRHI+JrKQUrpjOyhYb6WzbZSm891kDFX29ufyIiKAXuFixrYp4YFs8r/lfTJq
                VKAyGVn+H4vXPWCGhSRv4xGzdz4gljUha7MI2XAuZPeEklPWDrCQiorjh40G072Q
                DuKZoRuGDtqaCrsLYVAGUvGef3bsyw/QHg3PmTA9HMRFEFis1tPo1+XqxQEHd9ZR
                5gN/ikilTWh1uem8nk4ZcfUyS5xtYBkL+8ydddy/Js2Pk3g5eXNeJQ7KXOt3EgfL
                ZEFHcpOrUMPrCXZkNNI5t3YRCQ12RcSprj1qr7V9ZS+UWBDsXHyvfuK2GNnQm05a
                Sd+pZgvMPMZ4fKecHePOjlO+Bd5gD2vlGts/4+EhySnB8esHnFIbAURRPHsl18Tl
                UlRdJQfKFiC4reRB7noI/plvg6aRArBsNlVq5331lubKgdaX8ZSD6e2wsWsSaR6s
                +12pxZjptFtYer49okQ6Y1nUCyXeG0+95QGezdIp1Z8XGQpvvwyQ0wlf2eOKNcx5
                Wk0ZN5K3xMGtr/R5JJqyAQuxr1yW84Ay+1w9mPGgP0revq+ULtlVmhduYJ1jbLhj
                ya6BXBg14JC7vjxPNyK5fuvPnnchpj04gftI2jE9K+OJ9dC1vX7gUMQSibMjmhAx
                hduub+84Mxh2EQIDAQABo4IBbDCCAWgwEgYDVR0TAQH/BAgwBgEB/wIBDDAdBgNV
                HQ4EFgQU+SSsD7K1+HnA+mCIG8TZTQKeFxkwgeMGA1UdIwSB2zCB2IAU+SSsD7K1
                +HnA+mCIG8TZTQKeFxmhgbSkgbEwga4xCzAJBgNVBAYTAkVVMUMwQQYDVQQHEzpN
                YWRyaWQgKHNlZSBjdXJyZW50IGFkZHJlc3MgYXQgd3d3LmNhbWVyZmlybWEuY29t
                L2FkZHJlc3MpMRIwEAYDVQQFEwlBODI3NDMyODcxGzAZBgNVBAoTEkFDIENhbWVy
                ZmlybWEgUy5BLjEpMCcGA1UEAxMgQ2hhbWJlcnMgb2YgQ29tbWVyY2UgUm9vdCAt
                IDIwMDiCCQCj2kJ+pLGu2jAOBgNVHQ8BAf8EBAMCAQYwPQYDVR0gBDYwNDAyBgRV
                HSAAMCowKAYIKwYBBQUHAgEWHGh0dHA6Ly9wb2xpY3kuY2FtZXJmaXJtYS5jb20w
                DQYJKoZIhvcNAQEFBQADggIBAJASryI1wqM58C7e6bXpeHxIvj99RZJe6dqxGfwW
                PJ+0W2aeaufDuV2I6A+tzyMP3iU6XsxPpcG1Lawk0lgH3qLPaYRgM+gQDROpI9CF
                5Y57pp49chNyM/WqfcZjHwj0/gF/JM8rLFQJ3uIrbZLGOU8W6jx+ekbURWpGqOt1
                glanq6B8aBMz9p0w8G8nOSQjKpD9kCk18pPfNKXG9/jvjA9iSnyu0/VU+I22mlaH
                FoI6M6taIgj3grrqLuBHmrS1RaMFO9ncLkVAO+rcf+g769HsJtg1pDDFOqxXnrN2
                pSB7+R5KBWIBpih1YJeSDW4+TTdDDZIVnBgizVGZoCkaPF+KMjNbMMeJL0eYD6MD
                xvbxrN8y8NmBGuScvfaAFPDRLLmF9dijscilIeUcE5fuDr3fKanvNFNb0+RqE4QG
                tjICxFKuItLcsiFCGtpA8CnJ7AoMXOLQusxI0zcKzBIKinmwPQN/aUv0NCB9szTq
                jktk9T79syNnFQ0EuPAtwQlRPLJsFfClI9eDdOTlLsn+mCdCxqvGnrDQWzilm1De
                fhiYtUU79nm06PcaewaD+9CL2rvHvRirCG88gGtAPxkZumWK5r7VXNM21+9AUiRg
                OGcEMeyP84LG3rlV8zsxkVrctQgVrXYlCg17LofiDKYGvCYQbTed7N14jHyAxfDZ
                d0jQ
                -----END CERTIFICATE-----
                === /C=EU/L=Madrid (see current address at www.camerfirma.com/address)/serialNumber=A82743287/O=AC Camerfirma S.A./CN=Global Chambersign Root - 2008
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            c9:cd:d3:e9:d5:7d:23:ce
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Aug  1 12:31:40 2008 GMT
                            Not After : Jul 31 12:31:40 2038 GMT
                        Subject: C=EU, L=Madrid (see current address at www.camerfirma.com/address)/serialNumber=A82743287, O=AC Camerfirma S.A., CN=Global Chambersign Root - 2008
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE, pathlen:12
                            X509v3 Subject Key Identifier:
                                B9:09:CA:9C:1E:DB:D3:6C:3A:6B:AE:ED:54:F1:5B:93:06:35:2E:5E
                            X509v3 Authority Key Identifier:
                                keyid:B9:09:CA:9C:1E:DB:D3:6C:3A:6B:AE:ED:54:F1:5B:93:06:35:2E:5E
                                DirName:/C=EU/L=Madrid (see current address at www.camerfirma.com/address)/serialNumber=A82743287/O=AC Camerfirma S.A./CN=Global Chambersign Root - 2008
                                serial:C9:CD:D3:E9:D5:7D:23:CE

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Certificate Policies:
                                Policy: X509v3 Any Policy
                                  CPS: http://policy.camerfirma.com

                SHA1 Fingerprint=4A:BD:EE:EC:95:0D:35:9C:89:AE:C7:52:A1:2C:5B:29:F6:D6:AA:0C
                SHA256 Fingerprint=13:63:35:43:93:34:A7:69:80:16:A0:D3:24:DE:72:28:4E:07:9D:7B:52:20:BB:8F:BD:74:78:16:EE:BE:BA:CA
                -----BEGIN CERTIFICATE-----
                MIIHSTCCBTGgAwIBAgIJAMnN0+nVfSPOMA0GCSqGSIb3DQEBBQUAMIGsMQswCQYD
                VQQGEwJFVTFDMEEGA1UEBxM6TWFkcmlkIChzZWUgY3VycmVudCBhZGRyZXNzIGF0
                IHd3dy5jYW1lcmZpcm1hLmNvbS9hZGRyZXNzKTESMBAGA1UEBRMJQTgyNzQzMjg3
                MRswGQYDVQQKExJBQyBDYW1lcmZpcm1hIFMuQS4xJzAlBgNVBAMTHkdsb2JhbCBD
                aGFtYmVyc2lnbiBSb290IC0gMjAwODAeFw0wODA4MDExMjMxNDBaFw0zODA3MzEx
                MjMxNDBaMIGsMQswCQYDVQQGEwJFVTFDMEEGA1UEBxM6TWFkcmlkIChzZWUgY3Vy
                cmVudCBhZGRyZXNzIGF0IHd3dy5jYW1lcmZpcm1hLmNvbS9hZGRyZXNzKTESMBAG
                A1UEBRMJQTgyNzQzMjg3MRswGQYDVQQKExJBQyBDYW1lcmZpcm1hIFMuQS4xJzAl
                BgNVBAMTHkdsb2JhbCBDaGFtYmVyc2lnbiBSb290IC0gMjAwODCCAiIwDQYJKoZI
                hvcNAQEBBQADggIPADCCAgoCggIBAMDfVtPkOpt2RbQT2//BthmLN0EYlVJH6xed
                KYiONWwGMi5HYvNJBL99RDaxccy9Wglz1dmFRP+RVyXfXjaOcNFccUMd2drvXNL7
                G706tcuto8xEpw2uIRU/uXpbknXYpBI4iRmKt4DS4jJvVpyR1ogQC7N0ZJJ0YPP2
                zxhPYLIj0Mc7zmFLmY/CDNBAspjcDahOo7kKrmCgrUVSY7pmvWjg+b4aqIG7HkF4
                ddPB/gBVsIdU6CeQNR1MM62X/JcumIS/LMmjv9GYERTtY/jKmIhYF5ntRQOXfjyG
                HoiMvvKRhI9lNNgATH23MRdaKXoKGCQwoze1eqkBfSbW+Q6OWfH9GzO1KTsXO0G2
                Id3UwD2ln58fQ1DJu7xsepeY7s2MH/ucUa6LcL0nn3HAa6x9kGbo1106DbDVwo3V
                yJ2dwW3Q0L9R5OP4wzg2rtandeavhENdk5IMagfeOx2YItaswTXbo6Al/3K1dh3e
                beksZixShNBFks4c5eUzHdwHU1SjqoI7mjcv3N2gZOnm3b2u/GSFHTynyQbehP9r
                6GsaPMWis0L7iwk+XwhSx2LE1AVxv8Rk5Pihg+g+EpuoHtQ2TS9x9o0o9oOpE9Jh
                wZG7SMA0j0GMS0zbaRL/UJScIINZc+18ofLx/d33SdNDWKBWY8o9PeU1VlnpDsog
                zCtLkykPAgMBAAGjggFqMIIBZjASBgNVHRMBAf8ECDAGAQH/AgEMMB0GA1UdDgQW
                BBS5CcqcHtvTbDprru1U8VuTBjUuXjCB4QYDVR0jBIHZMIHWgBS5CcqcHtvTbDpr
                ru1U8VuTBjUuXqGBsqSBrzCBrDELMAkGA1UEBhMCRVUxQzBBBgNVBAcTOk1hZHJp
                ZCAoc2VlIGN1cnJlbnQgYWRkcmVzcyBhdCB3d3cuY2FtZXJmaXJtYS5jb20vYWRk
                cmVzcykxEjAQBgNVBAUTCUE4Mjc0MzI4NzEbMBkGA1UEChMSQUMgQ2FtZXJmaXJt
                YSBTLkEuMScwJQYDVQQDEx5HbG9iYWwgQ2hhbWJlcnNpZ24gUm9vdCAtIDIwMDiC
                CQDJzdPp1X0jzjAOBgNVHQ8BAf8EBAMCAQYwPQYDVR0gBDYwNDAyBgRVHSAAMCow
                KAYIKwYBBQUHAgEWHGh0dHA6Ly9wb2xpY3kuY2FtZXJmaXJtYS5jb20wDQYJKoZI
                hvcNAQEFBQADggIBAICIf3DekijZBZRG/5BXqfEv3xoNa/p8DhxJJHkn2EaqbylZ
                UohwEurdPfWbU1Rv4WCiqAm57OtZfMY18dwY6fFn5a+6ReAJ3spED8IXDneRRXoz
                X1+WLGiLwUePmJs9wOzL9dWCkoQ10b42OFZyMVtHLaoXpGNR6woBrX/sdZ7LoR/x
                fxKxueRkf2fWIyr0uDldmOghp+G9PUIadJpwr2hsUF1Jz//7Dl3mLEfXgTpZALVz
                a2Mg9jFFCDkO9HB+QHBaP9BrQql0PSgvAm11cpUJjUhjxsYjV5KTXjXBjfkK9yyd
                Yhz2rXzdpjEetrHHfoUm+qRqtdpjMNHvkzeyZi99Bffnt0uYlDXA2TopwZ2yUDMd
                SqlapskD7+3056huirRXhOukP9DuqqqHW2Pok+JrqNS4cnhrG+055F3Lm6qH1U9O
                AP7Zap88MQ8oAgF9mOinsKJknnn4SPIVqczmyETrP3iZ8ntxPjzxmKfFGBI/5rso
                M0LpRQp8bfKGeS/Fghl9CYl8slR2iK7ewfPM4W7bMdaTrpmg7yVqc5iJWzouE4ge
                v8CSlDQb4ye3ix5vQv/n6TebUB0tovkC7stYWDpxvGjjqsGvHCgfotwjZT+B6q6Z
                09gwzxMNTxXJhLynSC34MCN32EZLeW32jO06f2ARePTpm67VVMB0gNELQp/B
                -----END CERTIFICATE-----

                ### ACCV

                === /CN=ACCVRAIZ1/OU=PKIACCV/O=ACCV/C=ES
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 6828503384748696800 (0x5ec3b7a6437fa4e0)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: May  5 09:37:37 2011 GMT
                            Not After : Dec 31 09:37:37 2030 GMT
                        Subject: CN=ACCVRAIZ1, OU=PKIACCV, O=ACCV, C=ES
                        X509v3 extensions:
                            Authority Information Access:
                                CA Issuers - URI:http://www.accv.es/fileadmin/Archivos/certificados/raizaccv1.crt
                                OCSP - URI:http://ocsp.accv.es

                            X509v3 Subject Key Identifier:
                                D2:87:B4:E3:DF:37:27:93:55:F6:56:EA:81:E5:36:CC:8C:1E:3F:BD
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:D2:87:B4:E3:DF:37:27:93:55:F6:56:EA:81:E5:36:CC:8C:1E:3F:BD

                            X509v3 Certificate Policies:
                                Policy: X509v3 Any Policy
                                  User Notice:
                                    Explicit Text:
                                  CPS: http://www.accv.es/legislacion_c.htm

                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://www.accv.es/fileadmin/Archivos/certificados/raizaccv1_der.crl

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Alternative Name:
                                email:accv@accv.es
                SHA1 Fingerprint=93:05:7A:88:15:C6:4F:CE:88:2F:FA:91:16:52:28:78:BC:53:64:17
                SHA256 Fingerprint=9A:6E:C0:12:E1:A7:DA:9D:BE:34:19:4D:47:8A:D7:C0:DB:18:22:FB:07:1D:F1:29:81:49:6E:D1:04:38:41:13
                -----BEGIN CERTIFICATE-----
                MIIH0zCCBbugAwIBAgIIXsO3pkN/pOAwDQYJKoZIhvcNAQEFBQAwQjESMBAGA1UE
                AwwJQUNDVlJBSVoxMRAwDgYDVQQLDAdQS0lBQ0NWMQ0wCwYDVQQKDARBQ0NWMQsw
                CQYDVQQGEwJFUzAeFw0xMTA1MDUwOTM3MzdaFw0zMDEyMzEwOTM3MzdaMEIxEjAQ
                BgNVBAMMCUFDQ1ZSQUlaMTEQMA4GA1UECwwHUEtJQUNDVjENMAsGA1UECgwEQUND
                VjELMAkGA1UEBhMCRVMwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQCb
                qau/YUqXry+XZpp0X9DZlv3P4uRm7x8fRzPCRKPfmt4ftVTdFXxpNRFvu8gMjmoY
                HtiP2Ra8EEg2XPBjs5BaXCQ316PWywlxufEBcoSwfdtNgM3802/J+Nq2DoLSRYWo
                G2ioPej0RGy9ocLLA76MPhMAhN9KSMDjIgro6TenGEyxCQ0jVn8ETdkXhBilyNpA
                lHPrzg5XPAOBOp0KoVdDaaxXbXmQeOW1tDvYvEyNKKGno6e6Ak4l0Squ7a4DIrhr
                IA8wKFSVf+DuzgpmndFALW4ir50awQUZ0m/A8p/4e7MCQvtQqR0tkw8jq8bBD5L/
                0KIV9VMJcRz/RROE5iZe+OCIHAr8Fraocwa48GOEAqDGWuzndN9wrqODJerWx5eH
                k6fGioozl2A3ED6XPm4pFdahD9GILBKfb6qkxkLrQaLjlUPTAYVtjrs78yM2x/47
                4KElB0iryYl0/wiPgL/AlmXz7uxLaL2diMMxs0Dx6M/2OLuc5NF/1OVYm3z61PMO
                m3WR5LpSLhl+0fXNWhn8ugb2+1KoS5kE3fj5tItQo05iifCHJPqDQsGH+tUtKSpa
                cXpkatcnYGMN285J9Y0fkIkyF/hzQ7jSWpOGYdbhdQrqeWZ2iE9x6wQl1gpaepPl
                uUsXQA+xtrn13k/c4LOsOxFwYIRKQ26ZIMApcQrAZQIDAQABo4ICyzCCAscwfQYI
                KwYBBQUHAQEEcTBvMEwGCCsGAQUFBzAChkBodHRwOi8vd3d3LmFjY3YuZXMvZmls
                ZWFkbWluL0FyY2hpdm9zL2NlcnRpZmljYWRvcy9yYWl6YWNjdjEuY3J0MB8GCCsG
                AQUFBzABhhNodHRwOi8vb2NzcC5hY2N2LmVzMB0GA1UdDgQWBBTSh7Tj3zcnk1X2
                VuqB5TbMjB4/vTAPBgNVHRMBAf8EBTADAQH/MB8GA1UdIwQYMBaAFNKHtOPfNyeT
                VfZW6oHlNsyMHj+9MIIBcwYDVR0gBIIBajCCAWYwggFiBgRVHSAAMIIBWDCCASIG
                CCsGAQUFBwICMIIBFB6CARAAQQB1AHQAbwByAGkAZABhAGQAIABkAGUAIABDAGUA
                cgB0AGkAZgBpAGMAYQBjAGkA8wBuACAAUgBhAO0AegAgAGQAZQAgAGwAYQAgAEEA
                QwBDAFYAIAAoAEEAZwBlAG4AYwBpAGEAIABkAGUAIABUAGUAYwBuAG8AbABvAGcA
                7QBhACAAeQAgAEMAZQByAHQAaQBmAGkAYwBhAGMAaQDzAG4AIABFAGwAZQBjAHQA
                cgDzAG4AaQBjAGEALAAgAEMASQBGACAAUQA0ADYAMAAxADEANQA2AEUAKQAuACAA
                QwBQAFMAIABlAG4AIABoAHQAdABwADoALwAvAHcAdwB3AC4AYQBjAGMAdgAuAGUA
                czAwBggrBgEFBQcCARYkaHR0cDovL3d3dy5hY2N2LmVzL2xlZ2lzbGFjaW9uX2Mu
                aHRtMFUGA1UdHwROMEwwSqBIoEaGRGh0dHA6Ly93d3cuYWNjdi5lcy9maWxlYWRt
                aW4vQXJjaGl2b3MvY2VydGlmaWNhZG9zL3JhaXphY2N2MV9kZXIuY3JsMA4GA1Ud
                DwEB/wQEAwIBBjAXBgNVHREEEDAOgQxhY2N2QGFjY3YuZXMwDQYJKoZIhvcNAQEF
                BQADggIBAJcxAp/n/UNnSEQU5CmH7UwoZtCPNdpNYbdKl02125DgBS4OxnnQ8pdp
                D70ER9m+27Up2pvZrqmZ1dM8MJP1jaGo/AaNRPTKFpV8M9xii6g3+CfYCS0b78gU
                JyCpZET/LtZ1qmxNYEAZSUNUY9rizLpm5U9EelvZaoErQNV/+QEnWCzI7UiRfD+m
                AM/EKXMRNt6GGT6d7hmKG9Ww7Y49nCrADdg9ZuM8Db3VlFzi4qc1GwQA9j9ajepD
                vV+JHanBsMyZ4k0ACtrJJ1vnE5Bc5PUzolVt3OAJTS+xJlsndQAJxGJ3KQhfnlms
                tn6tn1QwIgPBHnFk/vk4CpYY3QIUrCPLBhwepH2NDd4nQeit2hW3sCPdK6jT2iWH
                7ehVRE2I9DZ+hJp4rPcOVkkO1jMl1oRQQmwgEh0q1b688nCBpHBgvgW1m54ERL5h
                I6zppSSMEYCUWqKiuUnSwdzRp+0xESyeGabu4VXhwOrPDYTkF7eifKXeVSUG7szA
                h1xA2syVP1XgNce4hL60Xc16gwFy7ofmXx2utYXGJt/mwZrpHgJHnyqobalbz+xF
                d3+YJ5oyXSrjhO7FmGYvliAd3djDJ9ew+f7Zfc3Qn48LFFhRny+Lwzgt3uiP1o2H
                pPVWQxaZLPSkVrQ0uGE3ycJYgBugl6H8WY3pEfbRD0tVNEYqi4Y7
                -----END CERTIFICATE-----

                ### Actalis S.p.A./03358520967

                === /C=IT/L=Milan/O=Actalis S.p.A./03358520967/CN=Actalis Authentication Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 6271844772424770508 (0x570a119742c4e3cc)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Sep 22 11:22:02 2011 GMT
                            Not After : Sep 22 11:22:02 2030 GMT
                        Subject: C=IT, L=Milan, O=Actalis S.p.A./03358520967, CN=Actalis Authentication Root CA
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                52:D8:88:3A:C8:9F:78:66:ED:89:F3:7B:38:70:94:C9:02:02:36:D0
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:52:D8:88:3A:C8:9F:78:66:ED:89:F3:7B:38:70:94:C9:02:02:36:D0

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=F3:73:B3:87:06:5A:28:84:8A:F2:F3:4A:CE:19:2B:DD:C7:8E:9C:AC
                SHA256 Fingerprint=55:92:60:84:EC:96:3A:64:B9:6E:2A:BE:01:CE:0B:A8:6A:64:FB:FE:BC:C7:AA:B5:AF:C1:55:B3:7F:D7:60:66
                -----BEGIN CERTIFICATE-----
                MIIFuzCCA6OgAwIBAgIIVwoRl0LE48wwDQYJKoZIhvcNAQELBQAwazELMAkGA1UE
                BhMCSVQxDjAMBgNVBAcMBU1pbGFuMSMwIQYDVQQKDBpBY3RhbGlzIFMucC5BLi8w
                MzM1ODUyMDk2NzEnMCUGA1UEAwweQWN0YWxpcyBBdXRoZW50aWNhdGlvbiBSb290
                IENBMB4XDTExMDkyMjExMjIwMloXDTMwMDkyMjExMjIwMlowazELMAkGA1UEBhMC
                SVQxDjAMBgNVBAcMBU1pbGFuMSMwIQYDVQQKDBpBY3RhbGlzIFMucC5BLi8wMzM1
                ODUyMDk2NzEnMCUGA1UEAwweQWN0YWxpcyBBdXRoZW50aWNhdGlvbiBSb290IENB
                MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAp8bEpSmkLO/lGMWwUKNv
                UTufClrJwkg4CsIcoBh/kbWHuUA/3R1oHwiD1S0eiKD4j1aPbZkCkpAW1V8IbInX
                4ay8IMKx4INRimlNAJZaby/ARH6jDuSRzVju3PvHHkVH3Se5CAGfpiEd9UEtL0z9
                KK3giq0itFZljoZUj5NDKd45RnijMCO6zfB9E1fAXdKDa0hMxKufgFpbOr3JpyI/
                gCczWw63igxdBzcIy2zSekciRDXFzMwujt0q7bd9Zg1fYVEiVRvjRuPjPdA1Yprb
                rxTIW6HMiRvhMCb8oJsfgadHHwTrozmSBp+Z07/T6k9QnBn+locePGX2oxgkg4YQ
                51Q+qDp2JE+BIcXjDwL4k5RHILv+1A7TaLndxHqEguNTVHnd25zS8gebLra8Pu2F
                be8lEfKXGkJh90qX6IuxEAf6ZYGyojnP9zz/GPvG8VqLWeICrHuS0E4UT1lF9gxe
                KF+w6D9Fz8+vm2/7hNN3WpVvrJSEnu68wEqPSpP4RCHiMUVhUE4Q2OM1fEwZtN4F
                v6MGn8i1zeQf1xcGDXqVdFUNaBr8EBtiZJ1t4JWgw5QHVw0U5r0F+7if5t+L4sbn
                fpb2U8WANFAoWPASUHEXMLrmeGO89LKtmyuy/uE5jF66CyCU3nuDuP/jVo23Eek7
                jPKxwV2dpAtMK9myGPW1n0sCAwEAAaNjMGEwHQYDVR0OBBYEFFLYiDrIn3hm7Ynz
                ezhwlMkCAjbQMA8GA1UdEwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAUUtiIOsifeGbt
                ifN7OHCUyQICNtAwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3DQEBCwUAA4ICAQAL
                e3KHwGCmSUyIWOYdiPcUZEim2FgKDk8TNd81HdTtBjHIgT5q1d07GjLukD0R0i70
                jsNjLiNmsGe+b7bAEzlgqqI0JZN1Ut6nna0Oh4lScWoWPBkdg/iaKWW+9D+a2fDz
                WochcYBNy+A4mz+7+uAwTc+G02UQGRjRlwKxK3JCaKygvU5a2hi/a5iB0P2avl4V
                SM0RFbnAKVy06Ij3Pjaut2L9HmLecHgQHEhb2rykOLpn7VU+Xlff1ANATIGk0k9j
                pwlCCRT8AKnCgHNPLsBA2RF7SOp6AsDT6ygBJlh0wcBzIm2Tlf05fbsq4/aC4yyX
                X04fkZT6/iyj2HYauE2yOE+b+h1IYHkm4vP9qdCa6HCPSXrW5b0KDtst842/6+Ok
                fcvHlXHo2qN8xcL4dJIEG4aspCJTQLas/kx2z/uUMsA1n3Y/buWQbqCmJqK4LL7R
                K4X9p2jIugErsWx0Hbhzlefut8cl8ABMALJ+tguLHPPAUJ4lueAI3jZm/zel0btU
                ZCzJJ7VLkn5l/9Mt4blOvH+kQSGQQXemOR/qnuOf0GZvBeyqdn6/axag67XH/JJU
                LysRJyU3eExRarDzzFhdFPFqSBX/wge2sY0PjlxQRrM9vwGYT7JZVEc+NHt4bVaT
                LnPqZih4zR0Uv6CPLy64Lo7yFIrM6bV8+2ydDKXhlg==
                -----END CERTIFICATE-----

                ### AffirmTrust

                === /C=US/O=AffirmTrust/CN=AffirmTrust Commercial
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 8608355977964138876 (0x7777062726a9b17c)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jan 29 14:06:06 2010 GMT
                            Not After : Dec 31 14:06:06 2030 GMT
                        Subject: C=US, O=AffirmTrust, CN=AffirmTrust Commercial
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                9D:93:C6:53:8B:5E:CA:AF:3F:9F:1E:0F:E5:99:95:BC:24:F6:94:8F
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=F9:B5:B6:32:45:5F:9C:BE:EC:57:5F:80:DC:E9:6E:2C:C7:B2:78:B7
                SHA256 Fingerprint=03:76:AB:1D:54:C5:F9:80:3C:E4:B2:E2:01:A0:EE:7E:EF:7B:57:B6:36:E8:A9:3C:9B:8D:48:60:C9:6F:5F:A7
                -----BEGIN CERTIFICATE-----
                MIIDTDCCAjSgAwIBAgIId3cGJyapsXwwDQYJKoZIhvcNAQELBQAwRDELMAkGA1UE
                BhMCVVMxFDASBgNVBAoMC0FmZmlybVRydXN0MR8wHQYDVQQDDBZBZmZpcm1UcnVz
                dCBDb21tZXJjaWFsMB4XDTEwMDEyOTE0MDYwNloXDTMwMTIzMTE0MDYwNlowRDEL
                MAkGA1UEBhMCVVMxFDASBgNVBAoMC0FmZmlybVRydXN0MR8wHQYDVQQDDBZBZmZp
                cm1UcnVzdCBDb21tZXJjaWFsMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKC
                AQEA9htPZwcroRX1BiLLHwGy43NFBkRJLLtJJRTWzsO3qyxPxkEylFf6EqdbDuKP
                Hx6GGaeqtS25Xw2Kwq+FNXkyLbscYjfysVtKPcrNcV/pQr6U6Mje+SJIZMblq8Yr
                ba0F8PrVC8+a5fBQpIs7R6UjW3p6+DM/uO+Zl+MgwdYoic+U+7lF7eNAFxHUdPAL
                MeIrJmqbTFeurCA+ukV6BfO9m2kVrn1OIGPENXY6BwLJN/3HR+7o8XYdcxXyl6S1
                yHp52UKqK39c/s4mT6NmgTWvRLpUHhwwMmWd5jyTXlBOeuM61G7MGvv50jeuJCqr
                VwMiKA1JdX+3KNp1v47j3A55MQIDAQABo0IwQDAdBgNVHQ4EFgQUnZPGU4teyq8/
                nx4P5ZmVvCT2lI8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwDQYJ
                KoZIhvcNAQELBQADggEBAFis9AQOzcAN/wr91LoWXym9e2iZWEnStB03TX8nfUYG
                XUPGhi4+c7ImfU+TqbbEKpqrIZcUsd6M06uJFdhrJNTxFq7YpFzUf1GO7RgBsZNj
                vbz4YYCanrHOQnDiqX0GJX0nof5v7LMeJNrjS1UaADs1tDvZ110w/YETifLCBivt
                Z8SOyUOyXGsViQK8YvxO8rUzqrJv0wqiUOP2O+guRMLbZjipM1ZI8W0bM40NjD9g
                N53Tym1+NH4Nn3J2ixufcv1SNUFFApYvHLKac0khsUlHRUe072o0EclNmsxZt9YC
                nlpOZbWUrhvfKbAW8b8Angc6F2S1BLUjIZkKlTuXfO8=
                -----END CERTIFICATE-----
                === /C=US/O=AffirmTrust/CN=AffirmTrust Networking
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 8957382827206547757 (0x7c4f04391cd4992d)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jan 29 14:08:24 2010 GMT
                            Not After : Dec 31 14:08:24 2030 GMT
                        Subject: C=US, O=AffirmTrust, CN=AffirmTrust Networking
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                07:1F:D2:E7:9C:DA:C2:6E:A2:40:B4:B0:7A:50:10:50:74:C4:C8:BD
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=29:36:21:02:8B:20:ED:02:F5:66:C5:32:D1:D6:ED:90:9F:45:00:2F
                SHA256 Fingerprint=0A:81:EC:5A:92:97:77:F1:45:90:4A:F3:8D:5D:50:9F:66:B5:E2:C5:8F:CD:B5:31:05:8B:0E:17:F3:F0:B4:1B
                -----BEGIN CERTIFICATE-----
                MIIDTDCCAjSgAwIBAgIIfE8EORzUmS0wDQYJKoZIhvcNAQEFBQAwRDELMAkGA1UE
                BhMCVVMxFDASBgNVBAoMC0FmZmlybVRydXN0MR8wHQYDVQQDDBZBZmZpcm1UcnVz
                dCBOZXR3b3JraW5nMB4XDTEwMDEyOTE0MDgyNFoXDTMwMTIzMTE0MDgyNFowRDEL
                MAkGA1UEBhMCVVMxFDASBgNVBAoMC0FmZmlybVRydXN0MR8wHQYDVQQDDBZBZmZp
                cm1UcnVzdCBOZXR3b3JraW5nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKC
                AQEAtITMMxcua5Rsa2FSoOujz3mUTOWUgJnLVWREZY9nZOIG41w3SfYvm4SEHi3y
                YJ0wTsyEheIszx6e/jarM3c1RNg1lho9Nuh6DtjVR6FqaYvZ/Ls6rnla1fTWcbua
                kCNrmreIdIcMHl+5ni36q1Mr3Lt2PpNMCAiMHqIjHNRqrSK6mQEubWXLviRmVSRL
                QESxG9fhwoXA3hA/Pe24/PHxI1Pcv2WXb9n5QHGNfb2V1M6+oF4nI979ptAmDgAp
                6zxG8D1gvz9Q0twmQVGeFDdCBKNwV6gbh+0t+nvujArjqWaJGctB+d1ENmHP4ndG
                yH329JKBNv3bNPFyfvMMFr20FQIDAQABo0IwQDAdBgNVHQ4EFgQUBx/S55zawm6i
                QLSwelAQUHTEyL0wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwDQYJ
                KoZIhvcNAQEFBQADggEBAIlXshZ6qML91tmbmzTCnLQyFE2npN/svqe++EPbkTfO
                tDIuUFUaNU52Q3Eg75N3ThVwLofDwR1t3Mu1J9QsVtFSUzpE0nPIxBsFZVpikpzu
                QY0x2+c06lkh1QF612S4ZDnNye2v7UsDSKegmQGA3GWjNq5lWUhPgkvIZfFXHeVZ
                Lgo/bNjR9eUJtGxUAArgFU2HdW23WJZa3W3SAKD0m0i+wzekujbgfIeFlxoVot4u
                olu9rxj5kFDNcFn4J2dHy8egBzp90SxdbBk6ZrV9/ZFvgrG+CJPbFEfxojfHRZ48
                x3evZKiT3/Zpg4Jg8klCNO1aAFSFHBY2kgxc+qatv9s=
                -----END CERTIFICATE-----
                === /C=US/O=AffirmTrust/CN=AffirmTrust Premium
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 7893706540734352110 (0x6d8c1446b1a60aee)
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Jan 29 14:10:36 2010 GMT
                            Not After : Dec 31 14:10:36 2040 GMT
                        Subject: C=US, O=AffirmTrust, CN=AffirmTrust Premium
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                9D:C0:67:A6:0C:22:D9:26:F5:45:AB:A6:65:52:11:27:D8:45:AC:63
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=D8:A6:33:2C:E0:03:6F:B1:85:F6:63:4F:7D:6A:06:65:26:32:28:27
                SHA256 Fingerprint=70:A7:3F:7F:37:6B:60:07:42:48:90:45:34:B1:14:82:D5:BF:0E:69:8E:CC:49:8D:F5:25:77:EB:F2:E9:3B:9A
                -----BEGIN CERTIFICATE-----
                MIIFRjCCAy6gAwIBAgIIbYwURrGmCu4wDQYJKoZIhvcNAQEMBQAwQTELMAkGA1UE
                BhMCVVMxFDASBgNVBAoMC0FmZmlybVRydXN0MRwwGgYDVQQDDBNBZmZpcm1UcnVz
                dCBQcmVtaXVtMB4XDTEwMDEyOTE0MTAzNloXDTQwMTIzMTE0MTAzNlowQTELMAkG
                A1UEBhMCVVMxFDASBgNVBAoMC0FmZmlybVRydXN0MRwwGgYDVQQDDBNBZmZpcm1U
                cnVzdCBQcmVtaXVtMIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAxBLf
                qV/+Qd3d9Z+K4/as4Tx4mrzY8H96oDMq3I0gW64tb+eT2TZwamjPjlGjhVtnBKAQ
                JG9dKILBl1fYSCkTtuG+kU3fhQxTGJoeJKJPj/CihQvL9Cl/0qRY7iZNyaqoe5rZ
                +jjeRFcV5fiMyNlI4g0WJx0eyIOFJbe6qlVBzAMiSy2RjYvmia9mx+n/K+k8rNrS
                s8PhaJyJ+HoAVt70VZVs+7pk3WKL3wt3MutizCaam7uqYoNMtAZ6MMgpv+0GTZe5
                HMQxK9VfvFMSF5yZVylmd2EhMQcuJUmdGPLu8ytxjLW6OQdJd/zvLpKQBY0tL3d7
                70O/Nbua2Plzpyzy0FfuKE4mX4+QaAkvuPjcBukumj5Rp9EixAqnOEhss/n/fauG
                V+O61oV4d7pD6kh/9ti+I20ev9E2bFhc8e6kGVQa9QPSdubhjL08s9NIS+LI+H+S
                qHZGnEJlPqQewQcDWkYtuJfzt9WyVSHvutxMAJf7FJUnM7/oQ0dG0giZFmA7mn7S
                5u046uwBHjxIVkkJx0w3AJ6IDsBz4W9m6XJHMD4Q5QsDyZpCAGzFlH5hxIrff4Ia
                C1nEWTJ3s7xgaVY5/bQGeyzWZDbZvUjthB9+pSKPKrhC9IK31FOQeE4tGv2Bb0TX
                OwF0lkLgAOIua+rF7nKsu7/+6qqo+Nz2snmKtmcCAwEAAaNCMEAwHQYDVR0OBBYE
                FJ3AZ6YMItkm9UWrpmVSESfYRaxjMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/
                BAQDAgEGMA0GCSqGSIb3DQEBDAUAA4ICAQCzV00QYk465KzquByvMiPIs0laUZx2
                KI15qldGF9X1Uva3ROgIRL8YhNILgM3FEv0AVQVhh0HctSSePMTYyPtwni94loMg
                Nt58D2kTiKV1NpgIpsbfrM7jWNa3Pt668+s0QNiigfV4Py/VpfzZotReBA4Xrf5B
                8OWycvpEgjNC6C1Y91aMYj+6QrCcDFx+LmUmXFNPALJ4fqENmS2NuB2OosSw/WDQ
                MKSOyARiqcTtNd56l+0OOF6SL5Nwpamcb6d9Ex1+xghIsV5n61EIJenmJWtSKZGc
                0jlzCFfemQa0W50QBuHCAKi4HEoCChTQwUHK+4w1IX2COPKpVJEZNZOUbWo6xbLQ
                u4mGk+ibyQ86p3q4ofB4Rvr8Ny/lioTz3/4E2aFooC8k4gmVBtWVyuEklut89pMF
                u+1z6S3RdTnX5yTb2E5fQ4+e0BQ5v1VwSJlXMbSc7kqYA5YwH2AG7hsj/oFgIxpH
                YoWlzBk0gG+zrBrjn/B7SK3VAdlntqlyk+otZrWyuOQ9PLLvTIzq6we/qzWaVYa8
                GKa1qF60g2xraUDTn9zxw2lrueFtCfTxqlB2Cnp9ehehVZZCmTEJ3WARjQUwfuaO
                RtGdFNrHF+QFlozEJLUbzxQHskD4o55BhrwE0GuWyCqANP2/7waj3VjFhT0+j/6e
                KeC2uAloGRwYQw==
                -----END CERTIFICATE-----
                === /C=US/O=AffirmTrust/CN=AffirmTrust Premium ECC
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 8401224907861490260 (0x7497258ac73f7a54)
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Jan 29 14:20:24 2010 GMT
                            Not After : Dec 31 14:20:24 2040 GMT
                        Subject: C=US, O=AffirmTrust, CN=AffirmTrust Premium ECC
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                9A:AF:29:7A:C0:11:35:35:26:51:30:00:C3:6A:FE:40:D5:AE:D6:3C
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=B8:23:6B:00:2F:1D:16:86:53:01:55:6C:11:A4:37:CA:EB:FF:C3:BB
                SHA256 Fingerprint=BD:71:FD:F6:DA:97:E4:CF:62:D1:64:7A:DD:25:81:B0:7D:79:AD:F8:39:7E:B4:EC:BA:9C:5E:84:88:82:14:23
                -----BEGIN CERTIFICATE-----
                MIIB/jCCAYWgAwIBAgIIdJclisc/elQwCgYIKoZIzj0EAwMwRTELMAkGA1UEBhMC
                VVMxFDASBgNVBAoMC0FmZmlybVRydXN0MSAwHgYDVQQDDBdBZmZpcm1UcnVzdCBQ
                cmVtaXVtIEVDQzAeFw0xMDAxMjkxNDIwMjRaFw00MDEyMzExNDIwMjRaMEUxCzAJ
                BgNVBAYTAlVTMRQwEgYDVQQKDAtBZmZpcm1UcnVzdDEgMB4GA1UEAwwXQWZmaXJt
                VHJ1c3QgUHJlbWl1bSBFQ0MwdjAQBgcqhkjOPQIBBgUrgQQAIgNiAAQNMF4bFZ0D
                0KF5Nbc6PJJ6yhUczWLznCZcBz3lVPqj1swS6vQUX+iOGasvLkjmrBhDeKzQN8O9
                ss0s5kfiGuZjuD0uL3jET9v0D6RoTFVya5UdThhClXjMNzyR4ptlKymjQjBAMB0G
                A1UdDgQWBBSaryl6wBE1NSZRMADDav5A1a7WPDAPBgNVHRMBAf8EBTADAQH/MA4G
                A1UdDwEB/wQEAwIBBjAKBggqhkjOPQQDAwNnADBkAjAXCfOHiFBar8jAQr9HX/Vs
                aobgxCd05DhT1wV/GzTjxi+zygk8N53X57hG8f2h4nECMEJZh0PUUd+60wkyWs6I
                flc9nF9Ca/UHLbXwgpP5WW+uZPpY5Yse42O+tYHNbwKMeQ==
                -----END CERTIFICATE-----

                ### Agencia Catalana de Certificacio (NIF Q-0801176-I)

                === /C=ES/O=Agencia Catalana de Certificacio (NIF Q-0801176-I)/OU=Serveis Publics de Certificacio/OU=Vegeu https://www.catcert.net/verarrel (c)03/OU=Jerarquia Entitats de Certificacio Catalanes/CN=EC-ACC
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                             (Negative)11:d4:c2:14:2b:de:21:eb:57:9d:53:fb:0c:22:3b:ff
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jan  7 23:00:00 2003 GMT
                            Not After : Jan  7 22:59:59 2031 GMT
                        Subject: C=ES, O=Agencia Catalana de Certificacio (NIF Q-0801176-I), OU=Serveis Publics de Certificacio, OU=Vegeu https://www.catcert.net/verarrel (c)03, OU=Jerarquia Entitats de Certificacio Catalanes, CN=EC-ACC
                        X509v3 extensions:
                            X509v3 Subject Alternative Name:
                                email:ec_acc@catcert.net
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                A0:C3:8B:44:AA:37:A5:45:BF:97:80:5A:D1:F1:78:A2:9B:E9:5D:8D
                            X509v3 Certificate Policies:
                                Policy: 1.3.6.1.4.1.15096.1.3.1.10
                                  CPS: https://www.catcert.net/verarrel
                                  User Notice:
                                    Explicit Text: Vegeu https://www.catcert.net/verarrel

                SHA1 Fingerprint=28:90:3A:63:5B:52:80:FA:E6:77:4C:0B:6D:A7:D6:BA:A6:4A:F2:E8
                SHA256 Fingerprint=88:49:7F:01:60:2F:31:54:24:6A:E2:8C:4D:5A:EF:10:F1:D8:7E:BB:76:62:6F:4A:E0:B7:F9:5B:A7:96:87:99
                -----BEGIN CERTIFICATE-----
                MIIFVjCCBD6gAwIBAgIQ7is969Qh3hSoYqwE893EATANBgkqhkiG9w0BAQUFADCB
                8zELMAkGA1UEBhMCRVMxOzA5BgNVBAoTMkFnZW5jaWEgQ2F0YWxhbmEgZGUgQ2Vy
                dGlmaWNhY2lvIChOSUYgUS0wODAxMTc2LUkpMSgwJgYDVQQLEx9TZXJ2ZWlzIFB1
                YmxpY3MgZGUgQ2VydGlmaWNhY2lvMTUwMwYDVQQLEyxWZWdldSBodHRwczovL3d3
                dy5jYXRjZXJ0Lm5ldC92ZXJhcnJlbCAoYykwMzE1MDMGA1UECxMsSmVyYXJxdWlh
                IEVudGl0YXRzIGRlIENlcnRpZmljYWNpbyBDYXRhbGFuZXMxDzANBgNVBAMTBkVD
                LUFDQzAeFw0wMzAxMDcyMzAwMDBaFw0zMTAxMDcyMjU5NTlaMIHzMQswCQYDVQQG
                EwJFUzE7MDkGA1UEChMyQWdlbmNpYSBDYXRhbGFuYSBkZSBDZXJ0aWZpY2FjaW8g
                KE5JRiBRLTA4MDExNzYtSSkxKDAmBgNVBAsTH1NlcnZlaXMgUHVibGljcyBkZSBD
                ZXJ0aWZpY2FjaW8xNTAzBgNVBAsTLFZlZ2V1IGh0dHBzOi8vd3d3LmNhdGNlcnQu
                bmV0L3ZlcmFycmVsIChjKTAzMTUwMwYDVQQLEyxKZXJhcnF1aWEgRW50aXRhdHMg
                ZGUgQ2VydGlmaWNhY2lvIENhdGFsYW5lczEPMA0GA1UEAxMGRUMtQUNDMIIBIjAN
                BgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAsyLHT+KXQpWIR4NA9h0X84NzJB5R
                85iKw5K4/0CQBXCHYMkAqbWUZRkiFRfCQ2xmRJoNBD45b6VLeqpjt4pEndljkYRm
                4CgPukLjbo73FCeTae6RDqNfDrHrZqJyTxIThmV6PttPB/SnCWDaOkKZx7J/sxaV
                HMf5NLWUhdWZXqBIoH7nF2W4onW4HvPlQn2v7fOKSGRdghST2MDk/7NQcvJ29rNd
                QlB50JQ+awwAvthrDk4q7D7SzIKiGGUzE3eeml0aE9jD2z3Il3rucO2n5nzbcc8t
                lGLfbdb1OL4/pYUKGbio2Al1QnDE6u/LDsg0qBIimAy4E5S2S+zw0JDnJwIDAQAB
                o4HjMIHgMB0GA1UdEQQWMBSBEmVjX2FjY0BjYXRjZXJ0Lm5ldDAPBgNVHRMBAf8E
                BTADAQH/MA4GA1UdDwEB/wQEAwIBBjAdBgNVHQ4EFgQUoMOLRKo3pUW/l4Ba0fF4
                opvpXY0wfwYDVR0gBHgwdjB0BgsrBgEEAfV4AQMBCjBlMCwGCCsGAQUFBwIBFiBo
                dHRwczovL3d3dy5jYXRjZXJ0Lm5ldC92ZXJhcnJlbDA1BggrBgEFBQcCAjApGidW
                ZWdldSBodHRwczovL3d3dy5jYXRjZXJ0Lm5ldC92ZXJhcnJlbCAwDQYJKoZIhvcN
                AQEFBQADggEBAKBIW4IB9k1IuDlVNZyAelOZ1Vr/sXE7zDkJlF7W2u++AVtd0x7Y
                /X1PzaBB4DSTv8vihpw3kpBWHNzrKQXlxJ7HNd+KDM3FIUPpqojlNcAZQmNaAl6k
                SBg6hW/cnbw/nZzBh7h6YQjpdwt/cKt63dmXLGQehb+8dJahw3oS7AwaboMMPOhy
                Rp/7SNVel+axofjk70YllJyJ22k4vuxcDlbHZVHlUIiIv0LVKz3l+bqeLrPK9HOS
                Agu+TGbrIP65y7WZf+a2E/rKS03Z7lNGBjvGTq2TWoF+bCpLagVFjPIhpDGQh2xl
                nJ2lYJU6Un/10asIbvPuW/mIPX64b24D5EI=
                -----END CERTIFICATE-----

                ### Amazon

                === /C=US/O=Amazon/CN=Amazon Root CA 1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            06:6c:9f:cf:99:bf:8c:0a:39:e2:f0:78:8a:43:e6:96:36:5b:ca
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: May 26 00:00:00 2015 GMT
                            Not After : Jan 17 00:00:00 2038 GMT
                        Subject: C=US, O=Amazon, CN=Amazon Root CA 1
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                84:18:CC:85:34:EC:BC:0C:94:94:2E:08:59:9C:C7:B2:10:4E:0A:08
                SHA1 Fingerprint=8D:A7:F9:65:EC:5E:FC:37:91:0F:1C:6E:59:FD:C1:CC:6A:6E:DE:16
                SHA256 Fingerprint=8E:CD:E6:88:4F:3D:87:B1:12:5B:A3:1A:C3:FC:B1:3D:70:16:DE:7F:57:CC:90:4F:E1:CB:97:C6:AE:98:19:6E
                -----BEGIN CERTIFICATE-----
                MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
                ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
                b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
                MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
                b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
                ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
                9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
                IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
                VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
                93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
                jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
                AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
                A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
                U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
                N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
                o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
                5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
                rqXRfboQnoZsG4q5WTP468SQvvG5
                -----END CERTIFICATE-----
                === /C=US/O=Amazon/CN=Amazon Root CA 2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            06:6c:9f:d2:96:35:86:9f:0a:0f:e5:86:78:f8:5b:26:bb:8a:37
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: May 26 00:00:00 2015 GMT
                            Not After : May 26 00:00:00 2040 GMT
                        Subject: C=US, O=Amazon, CN=Amazon Root CA 2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                B0:0C:F0:4C:30:F4:05:58:02:48:FD:33:E5:52:AF:4B:84:E3:66:52
                SHA1 Fingerprint=5A:8C:EF:45:D7:A6:98:59:76:7A:8C:8B:44:96:B5:78:CF:47:4B:1A
                SHA256 Fingerprint=1B:A5:B2:AA:8C:65:40:1A:82:96:01:18:F8:0B:EC:4F:62:30:4D:83:CE:C4:71:3A:19:C3:9C:01:1E:A4:6D:B4
                -----BEGIN CERTIFICATE-----
                MIIFQTCCAymgAwIBAgITBmyf0pY1hp8KD+WGePhbJruKNzANBgkqhkiG9w0BAQwF
                ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
                b24gUm9vdCBDQSAyMB4XDTE1MDUyNjAwMDAwMFoXDTQwMDUyNjAwMDAwMFowOTEL
                MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
                b3QgQ0EgMjCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAK2Wny2cSkxK
                gXlRmeyKy2tgURO8TW0G/LAIjd0ZEGrHJgw12MBvIITplLGbhQPDW9tK6Mj4kHbZ
                W0/jTOgGNk3Mmqw9DJArktQGGWCsN0R5hYGCrVo34A3MnaZMUnbqQ523BNFQ9lXg
                1dKmSYXpN+nKfq5clU1Imj+uIFptiJXZNLhSGkOQsL9sBbm2eLfq0OQ6PBJTYv9K
                8nu+NQWpEjTj82R0Yiw9AElaKP4yRLuH3WUnAnE72kr3H9rN9yFVkE8P7K6C4Z9r
                2UXTu/Bfh+08LDmG2j/e7HJV63mjrdvdfLC6HM783k81ds8P+HgfajZRRidhW+me
                z/CiVX18JYpvL7TFz4QuK/0NURBs+18bvBt+xa47mAExkv8LV/SasrlX6avvDXbR
                8O70zoan4G7ptGmh32n2M8ZpLpcTnqWHsFcQgTfJU7O7f/aS0ZzQGPSSbtqDT6Zj
                mUyl+17vIWR6IF9sZIUVyzfpYgwLKhbcAS4y2j5L9Z469hdAlO+ekQiG+r5jqFoz
                7Mt0Q5X5bGlSNscpb/xVA1wf+5+9R+vnSUeVC06JIglJ4PVhHvG/LopyboBZ/1c6
                +XUyo05f7O0oYtlNc/LMgRdg7c3r3NunysV+Ar3yVAhU/bQtCSwXVEqY0VThUWcI
                0u1ufm8/0i2BWSlmy5A5lREedCf+3euvAgMBAAGjQjBAMA8GA1UdEwEB/wQFMAMB
                Af8wDgYDVR0PAQH/BAQDAgGGMB0GA1UdDgQWBBSwDPBMMPQFWAJI/TPlUq9LhONm
                UjANBgkqhkiG9w0BAQwFAAOCAgEAqqiAjw54o+Ci1M3m9Zh6O+oAA7CXDpO8Wqj2
                LIxyh6mx/H9z/WNxeKWHWc8w4Q0QshNabYL1auaAn6AFC2jkR2vHat+2/XcycuUY
                +gn0oJMsXdKMdYV2ZZAMA3m3MSNjrXiDCYZohMr/+c8mmpJ5581LxedhpxfL86kS
                k5Nrp+gvU5LEYFiwzAJRGFuFjWJZY7attN6a+yb3ACfAXVU3dJnJUH/jWS5E4ywl
                7uxMMne0nxrpS10gxdr9HIcWxkPo1LsmmkVwXqkLN1PiRnsn/eBG8om3zEK2yygm
                btmlyTrIQRNg91CMFa6ybRoVGld45pIq2WWQgj9sAq+uEjonljYE1x2igGOpm/Hl
                urR8FLBOybEfdF849lHqm/osohHUqS0nGkWxr7JOcQ3AWEbWaQbLU8uz/mtBzUF+
                fUwPfHJ5elnNXkoOrJupmHN5fLT0zLm4BwyydFy4x2+IoZCn9Kr5v2c69BoVYh63
                n749sSmvZ6ES8lgQGVMDMBu4Gon2nL2XA46jCfMdiyHxtN/kHNGfZQIG6lzWE7OE
                76KlXIx3KadowGuuQNKotOrN8I1LOJwZmhsoVLiJkO/KdYE+HvJkJMcYr07/R54H
                9jVlpNMKVv/1F2Rs76giJUmTtt8AF9pYfl3uxRuw0dFfIRDH+fO6AgonB8Xx1sfT
                4PsJYGw=
                -----END CERTIFICATE-----
                === /C=US/O=Amazon/CN=Amazon Root CA 3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            06:6c:9f:d5:74:97:36:66:3f:3b:0b:9a:d9:e8:9e:76:03:f2:4a
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: May 26 00:00:00 2015 GMT
                            Not After : May 26 00:00:00 2040 GMT
                        Subject: C=US, O=Amazon, CN=Amazon Root CA 3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                AB:B6:DB:D7:06:9E:37:AC:30:86:07:91:70:C7:9C:C4:19:B1:78:C0
                SHA1 Fingerprint=0D:44:DD:8C:3C:8C:1A:1A:58:75:64:81:E9:0F:2E:2A:FF:B3:D2:6E
                SHA256 Fingerprint=18:CE:6C:FE:7B:F1:4E:60:B2:E3:47:B8:DF:E8:68:CB:31:D0:2E:BB:3A:DA:27:15:69:F5:03:43:B4:6D:B3:A4
                -----BEGIN CERTIFICATE-----
                MIIBtjCCAVugAwIBAgITBmyf1XSXNmY/Owua2eiedgPySjAKBggqhkjOPQQDAjA5
                MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6b24g
                Um9vdCBDQSAzMB4XDTE1MDUyNjAwMDAwMFoXDTQwMDUyNjAwMDAwMFowOTELMAkG
                A1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJvb3Qg
                Q0EgMzBZMBMGByqGSM49AgEGCCqGSM49AwEHA0IABCmXp8ZBf8ANm+gBG1bG8lKl
                ui2yEujSLtf6ycXYqm0fc4E7O5hrOXwzpcVOho6AF2hiRVd9RFgdszflZwjrZt6j
                QjBAMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgGGMB0GA1UdDgQWBBSr
                ttvXBp43rDCGB5Fwx5zEGbF4wDAKBggqhkjOPQQDAgNJADBGAiEA4IWSoxe3jfkr
                BqWTrBqYaGFy+uGh0PsceGCmQ5nFuMQCIQCcAu/xlJyzlvnrxir4tiz+OpAUFteM
                YyRIHN8wfdVoOw==
                -----END CERTIFICATE-----
                === /C=US/O=Amazon/CN=Amazon Root CA 4
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            06:6c:9f:d7:c1:bb:10:4c:29:43:e5:71:7b:7b:2c:c8:1a:c1:0e
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: May 26 00:00:00 2015 GMT
                            Not After : May 26 00:00:00 2040 GMT
                        Subject: C=US, O=Amazon, CN=Amazon Root CA 4
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                D3:EC:C7:3A:65:6E:CC:E1:DA:76:9A:56:FB:9C:F3:86:6D:57:E5:81
                SHA1 Fingerprint=F6:10:84:07:D6:F8:BB:67:98:0C:C2:E2:44:C2:EB:AE:1C:EF:63:BE
                SHA256 Fingerprint=E3:5D:28:41:9E:D0:20:25:CF:A6:90:38:CD:62:39:62:45:8D:A5:C6:95:FB:DE:A3:C2:2B:0B:FB:25:89:70:92
                -----BEGIN CERTIFICATE-----
                MIIB8jCCAXigAwIBAgITBmyf18G7EEwpQ+Vxe3ssyBrBDjAKBggqhkjOPQQDAzA5
                MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6b24g
                Um9vdCBDQSA0MB4XDTE1MDUyNjAwMDAwMFoXDTQwMDUyNjAwMDAwMFowOTELMAkG
                A1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJvb3Qg
                Q0EgNDB2MBAGByqGSM49AgEGBSuBBAAiA2IABNKrijdPo1MN/sGKe0uoe0ZLY7Bi
                9i0b2whxIdIA6GO9mif78DluXeo9pcmBqqNbIJhFXRbb/egQbeOc4OO9X4Ri83Bk
                M6DLJC9wuoihKqB1+IGuYgbEgds5bimwHvouXKNCMEAwDwYDVR0TAQH/BAUwAwEB
                /zAOBgNVHQ8BAf8EBAMCAYYwHQYDVR0OBBYEFNPsxzplbszh2naaVvuc84ZtV+WB
                MAoGCCqGSM49BAMDA2gAMGUCMDqLIfG9fhGt0O9Yli/W651+kI0rz2ZVwyzjKKlw
                CkcO8DdZEv8tmZQoTipPNU0zWgIxAOp1AE47xDqUEpHJWEadIRNyp4iciuRMStuW
                1KyLa2tJElMzrdfkviT8tQp21KW8EA==
                -----END CERTIFICATE-----

                ### Atos

                === /CN=Atos TrustedRoot 2011/O=Atos/C=DE
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 6643877497813316402 (0x5c33cb622c5fb332)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jul  7 14:58:30 2011 GMT
                            Not After : Dec 31 23:59:59 2030 GMT
                        Subject: CN=Atos TrustedRoot 2011, O=Atos, C=DE
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                A7:A5:06:B1:2C:A6:09:60:EE:D1:97:E9:70:AE:BC:3B:19:6C:DB:21
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:A7:A5:06:B1:2C:A6:09:60:EE:D1:97:E9:70:AE:BC:3B:19:6C:DB:21

                            X509v3 Certificate Policies:
                                Policy: 1.3.6.1.4.1.6189.3.4.1.1

                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=2B:B1:F5:3E:55:0C:1D:C5:F1:D4:E6:B7:6A:46:4B:55:06:02:AC:21
                SHA256 Fingerprint=F3:56:BE:A2:44:B7:A9:1E:B3:5D:53:CA:9A:D7:86:4A:CE:01:8E:2D:35:D5:F8:F9:6D:DF:68:A6:F4:1A:A4:74
                -----BEGIN CERTIFICATE-----
                MIIDdzCCAl+gAwIBAgIIXDPLYixfszIwDQYJKoZIhvcNAQELBQAwPDEeMBwGA1UE
                AwwVQXRvcyBUcnVzdGVkUm9vdCAyMDExMQ0wCwYDVQQKDARBdG9zMQswCQYDVQQG
                EwJERTAeFw0xMTA3MDcxNDU4MzBaFw0zMDEyMzEyMzU5NTlaMDwxHjAcBgNVBAMM
                FUF0b3MgVHJ1c3RlZFJvb3QgMjAxMTENMAsGA1UECgwEQXRvczELMAkGA1UEBhMC
                REUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCVhTuXbyo7LjvPpvMp
                Nb7PGKw+qtn4TaA+Gke5vJrf8v7MPkfoepbCJI419KkM/IL9bcFyYie96mvr54rM
                VD6QUM+A1JX76LWC1BTFtqlVJVfbsVD2sGBkWXppzwO3bw2+yj5vdHLqqjAqc2K+
                SZFhyBH+DgMq92og3AIVDV4VavzjgsG1xZ1kCWyjWZgHJ8cblithdHFsQ/H3NYkQ
                4J7sVaE3IqKHBAUsR320HLliKWYoyrfhk/WklAOZuXCFteZI6o1Q/NnezG8HDt0L
                cp2AMBYHlT8oDv3FdU9T1nSatCQujgKRz3bFmx5VdJx4IbHwLfELn8LVlhgf8FQi
                eowHAgMBAAGjfTB7MB0GA1UdDgQWBBSnpQaxLKYJYO7Rl+lwrrw7GWzbITAPBgNV
                HRMBAf8EBTADAQH/MB8GA1UdIwQYMBaAFKelBrEspglg7tGX6XCuvDsZbNshMBgG
                A1UdIAQRMA8wDQYLKwYBBAGwLQMEAQEwDgYDVR0PAQH/BAQDAgGGMA0GCSqGSIb3
                DQEBCwUAA4IBAQAmdzTblEiGKkGdLD4GkGDEjKwLVLgfuXvTBznk+j57sj1O7Z8j
                vZfza1zv7v1Apt+hk6EKhqzvINB5Ab149xnYJDE0BAGmuhWawyfc2E8PzBhj/5kP
                DpFrdRbhIfzYJsdHt6bPWHJxfrrhTZVHO8mvbaG0weyJ9rQPOLXiZNwlz6bb65pc
                maHFCN795trV1lpFDMS3wrUU77QR/w4VtfX128a961qn8FYiqTxlVMYVqL2Gns2D
                lmh6cYGJ4Qvh6hEbaAjMaZ7snkGeRDImeuKHCnE96+RapNLbxc3G3mB/ufNPRJLv
                KrcYPqcZ2Qt9sTdBQrC6YB3y/gkRsPCHe6ed
                -----END CERTIFICATE-----

                ### Baltimore

                === /C=IE/O=Baltimore/OU=CyberTrust/CN=Baltimore CyberTrust Root
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 33554617 (0x20000b9)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: May 12 18:46:00 2000 GMT
                            Not After : May 12 23:59:00 2025 GMT
                        Subject: C=IE, O=Baltimore, OU=CyberTrust, CN=Baltimore CyberTrust Root
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                E5:9D:59:30:82:47:58:CC:AC:FA:08:54:36:86:7B:3A:B5:04:4D:F0
                            X509v3 Basic Constraints: critical
                                CA:TRUE, pathlen:3
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=D4:DE:20:D0:5E:66:FC:53:FE:1A:50:88:2C:78:DB:28:52:CA:E4:74
                SHA256 Fingerprint=16:AF:57:A9:F6:76:B0:AB:12:60:95:AA:5E:BA:DE:F2:2A:B3:11:19:D6:44:AC:95:CD:4B:93:DB:F3:F2:6A:EB
                -----BEGIN CERTIFICATE-----
                MIIDdzCCAl+gAwIBAgIEAgAAuTANBgkqhkiG9w0BAQUFADBaMQswCQYDVQQGEwJJ
                RTESMBAGA1UEChMJQmFsdGltb3JlMRMwEQYDVQQLEwpDeWJlclRydXN0MSIwIAYD
                VQQDExlCYWx0aW1vcmUgQ3liZXJUcnVzdCBSb290MB4XDTAwMDUxMjE4NDYwMFoX
                DTI1MDUxMjIzNTkwMFowWjELMAkGA1UEBhMCSUUxEjAQBgNVBAoTCUJhbHRpbW9y
                ZTETMBEGA1UECxMKQ3liZXJUcnVzdDEiMCAGA1UEAxMZQmFsdGltb3JlIEN5YmVy
                VHJ1c3QgUm9vdDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKMEuyKr
                mD1X6CZymrV51Cni4eiVgLGw41uOKymaZN+hXe2wCQVt2yguzmKiYv60iNoS6zjr
                IZ3AQSsBUnuId9Mcj8e6uYi1agnnc+gRQKfRzMpijS3ljwumUNKoUMMo6vWrJYeK
                mpYcqWe4PwzV9/lSEy/CG9VwcPCPwBLKBsua4dnKM3p31vjsufFoREJIE9LAwqSu
                XmD+tqYF/LTdB1kC1FkYmGP1pWPgkAx9XbIGevOF6uvUA65ehD5f/xXtabz5OTZy
                dc93Uk3zyZAsuT3lySNTPx8kmCFcB5kpvcY67Oduhjprl3RjM71oGDHweI12v/ye
                jl0qhqdNkNwnGjkCAwEAAaNFMEMwHQYDVR0OBBYEFOWdWTCCR1jMrPoIVDaGezq1
                BE3wMBIGA1UdEwEB/wQIMAYBAf8CAQMwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3
                DQEBBQUAA4IBAQCFDF2O5G9RaEIFoN27TyclhAO992T9Ldcw46QQF+vaKSm2eT92
                9hkTI7gQCvlYpNRhcL0EYWoSihfVCr3FvDB81ukMJY2GQE/szKN+OMY3EU/t3Wgx
                jkzSswF07r51XgdIGn9w/xZchMB5hbgF/X++ZRGjD8ACtPhSNzkE1akxehi/oCr0
                Epn3o0WC4zxe9Z2etciefC7IpJ5OCBRLbf1wbWsaY71k5h+3zvDyny67G7fyUIhz
                ksLi4xaNmjICq44Y3ekQEe5+NauQrz4wlHrQMz2nZQ/1/I6eYs9HRCwBXbsdtTLS
                R9I4LtD+gdwyah617jzV/OeBHRnDJELqYzmp
                -----END CERTIFICATE-----

                ### Buypass AS-983163327

                === /C=NO/O=Buypass AS-983163327/CN=Buypass Class 2 Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 2 (0x2)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct 26 08:38:03 2010 GMT
                            Not After : Oct 26 08:38:03 2040 GMT
                        Subject: C=NO, O=Buypass AS-983163327, CN=Buypass Class 2 Root CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                C9:80:77:E0:62:92:82:F5:46:9C:F3:BA:F7:4C:C3:DE:B8:A3:AD:39
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=49:0A:75:74:DE:87:0A:47:FE:58:EE:F6:C7:6B:EB:C6:0B:12:40:99
                SHA256 Fingerprint=9A:11:40:25:19:7C:5B:B9:5D:94:E6:3D:55:CD:43:79:08:47:B6:46:B2:3C:DF:11:AD:A4:A0:0E:FF:15:FB:48
                -----BEGIN CERTIFICATE-----
                MIIFWTCCA0GgAwIBAgIBAjANBgkqhkiG9w0BAQsFADBOMQswCQYDVQQGEwJOTzEd
                MBsGA1UECgwUQnV5cGFzcyBBUy05ODMxNjMzMjcxIDAeBgNVBAMMF0J1eXBhc3Mg
                Q2xhc3MgMiBSb290IENBMB4XDTEwMTAyNjA4MzgwM1oXDTQwMTAyNjA4MzgwM1ow
                TjELMAkGA1UEBhMCTk8xHTAbBgNVBAoMFEJ1eXBhc3MgQVMtOTgzMTYzMzI3MSAw
                HgYDVQQDDBdCdXlwYXNzIENsYXNzIDIgUm9vdCBDQTCCAiIwDQYJKoZIhvcNAQEB
                BQADggIPADCCAgoCggIBANfHXvfBB9R3+0Mh9PT1aeTuMgHbo4Yf5FkNuud1g1Lr
                6hxhFUi7HQfKjK6w3Jad6sNgkoaCKHOcVgb/S2TwDCo3SbXlzwx87vFKu3MwZfPV
                L4O2fuPn9Z6rYPnT8Z2SdIrkHJasW4DptfQxh6NR/Md+oW+OU3fUl8FVM5I+GC91
                1K2GScuVr1QGbNgGE41b/+EmGVnAJLqBcXmQRFBoJJRfuLMR8SlBYaNByyM21cHx
                MlAQTn/0hpPshNOOvEu/XAFOBz3cFIqUCqTqc/sLUegTBxj6DvEr0VQVfTzh97QZ
                QmdiXnfgolXsttlpF9U6r0TtSsWe5HonfOV116rLJeffawrbD02TTqigzXsu8lkB
                arcNuAeBfos4GzjmCleZPe4h6KP1DBbdi+w0jpwqHAAVF41og9JwnxgIzRFo1clr
                Us3ERo/ctfPYV3Me6ZQ5BL/T3jjetFPsaRyifsSP5BtwrfKi+fv3FmRmaZ9JUaLi
                FRhnBkp/1Wy1TbMz4GHrXb7pmA8y1x1LPC5aAVKRCfLf6o3YBkBjqhHk/sM3nhRS
                P/TizPJhk9H9Z2vXUq6/aKtAQ6BXNVN48FP4YUIHZMbXb5tMOA1jrGKvNouicwoN
                9SG9dKpN6nIDSdvHXx1iY8f93ZHsM+71bbRuMGjeyNYmsHVee7QHIJihdjK4TWxP
                AgMBAAGjQjBAMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFMmAd+BikoL1Rpzz
                uvdMw964o605MA4GA1UdDwEB/wQEAwIBBjANBgkqhkiG9w0BAQsFAAOCAgEAU18h
                9bqwOlI5LJKwbADJ784g7wbylp7ppHR/ehb8t/W2+xUbP6umwHJdELFx7rxP462s
                A20ucS6vxOOto70MEae0/0qyexAQH6dXQbLArvQsWdZHEIjzIVEpMMpghq9Gqx3t
                OluwlN5E40EIosHsHdb9T7bWR9AUC8rmyrV7d35BH16Dx7aMOZawP5aBQW9gkOLo
                +fsicdl9sz1Gv7SEr5AcD48Saq/v7h56rgJKihcrdv6sVIkkLE8/trKnToyokZf7
                KcZ7XC25y2a2t6hbElGFtQl+Ynhw/qlqYLYdDnkM/crqJIByw5c/8nerQyIKx+u2
                DISCLIBrQYoIwOula9+ZEsuK1V6ADJHgJgg2SMX6OBE1/yWDLfJ6v9r9jv6ly0Us
                H8SIU653DtmadsWOLB2jutXsMq7Aqqz30XpN69QH4kj3Io6wpJ9qzo6ysmD0oyLQ
                I+uUWnpp3Q+/QFesa1lQ2aOZ4W7+jQF5JyMV3pKdewlNWudLSDBaGOYKbeaP4NK7
                5t98biGCwWg5TbSYWGZizEqQXsP6JwSxeRV0mcy+rSDeJmAc61ZRpqPq5KM/p/9h
                3PFaTWwyI0PurKju7koSCTxdccK+efrCh2gdC/1cacwG0Jp9VJkqyTkaGa9LKkPz
                Y11aWOIv4x3kqdbQCtCev9eBCfHJxyYNrJgWVqA=
                -----END CERTIFICATE-----
                === /C=NO/O=Buypass AS-983163327/CN=Buypass Class 3 Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 2 (0x2)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct 26 08:28:58 2010 GMT
                            Not After : Oct 26 08:28:58 2040 GMT
                        Subject: C=NO, O=Buypass AS-983163327, CN=Buypass Class 3 Root CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                47:B8:CD:FF:E5:6F:EE:F8:B2:EC:2F:4E:0E:F9:25:B0:8E:3C:6B:C3
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=DA:FA:F7:FA:66:84:EC:06:8F:14:50:BD:C7:C2:81:A5:BC:A9:64:57
                SHA256 Fingerprint=ED:F7:EB:BC:A2:7A:2A:38:4D:38:7B:7D:40:10:C6:66:E2:ED:B4:84:3E:4C:29:B4:AE:1D:5B:93:32:E6:B2:4D
                -----BEGIN CERTIFICATE-----
                MIIFWTCCA0GgAwIBAgIBAjANBgkqhkiG9w0BAQsFADBOMQswCQYDVQQGEwJOTzEd
                MBsGA1UECgwUQnV5cGFzcyBBUy05ODMxNjMzMjcxIDAeBgNVBAMMF0J1eXBhc3Mg
                Q2xhc3MgMyBSb290IENBMB4XDTEwMTAyNjA4Mjg1OFoXDTQwMTAyNjA4Mjg1OFow
                TjELMAkGA1UEBhMCTk8xHTAbBgNVBAoMFEJ1eXBhc3MgQVMtOTgzMTYzMzI3MSAw
                HgYDVQQDDBdCdXlwYXNzIENsYXNzIDMgUm9vdCBDQTCCAiIwDQYJKoZIhvcNAQEB
                BQADggIPADCCAgoCggIBAKXaCpUWUOOV8l6ddjEGMnqb8RB2uACatVI2zSRHsJ8Y
                ZLya9vrVediQYkwiL944PdbgqOkcLNt4EemOaFEVcsfzM4fkoF0LXOBXByow9c3E
                N3coTRiR5r/VUv1xLXA+58bEiuPwKAv0dpihi4dVsjoT/Lc+JzeOIuOoTyrvYLs9
                tznDDgFHmV0ST9tD+leh7fmdvhFHJlsTmKtdFoqwNxxXnUX/iJY2v7vKB3tvh2PX
                0DJq1l1sDPGzbjniazEuOQAnFN44wOwZZoYS6J1yFhNkUsepNxz9gjDthBgd9K5c
                /3ATAOux9TN6S9ZV+AWNS2mw9bMoNlwUxFFzTWsL8TQH2xc519woe2v1n/MuwU8X
                KhDzzMro6/1rqy6any2CbgTUUgGTLT2G/H783+9CHaZr77kgxve9oKeV/afmiSTY
                zIw0bOIjL9kSGiG5VZFvC5F5GQytQIgLcOJ60g7YaEi7ghM5EFjp2CoHxhLbWNvS
                O1UQRwUVZ2J+GGOmRj8JDlQyXr8NYnon74Do29lLBlo3WiXQCBJ31G8JUJc9yB3D
                34xFMFbG02SrZvPAXpacw8Tvw3xrizp5f7NJzz3iiZ+gMEuFuZyUJHmPfWupRWgP
                K9Dx2hzLabjKSWJtyNBjYt1gD1iqj6G8BaVmos8bdrKEZLFMOVLAMLrwjEsCsLa3
                AgMBAAGjQjBAMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFEe4zf/lb+74suwv
                Tg75JbCOPGvDMA4GA1UdDwEB/wQEAwIBBjANBgkqhkiG9w0BAQsFAAOCAgEAACAj
                QTUEkMJAYmDv4jVM1z+s4jSQuKFvdvoWFqRINyzpkMLyPPgKn9iB5btb2iUspKdV
                cSQy9sgL8rxq+JOssgfCX5/bzMiKqr5qb+FJEMwx14C7u8jYog5kV+qi9cKpMRXS
                IGrs/CIBKM+GuIAeqcwRpTzyFrNHnfzSgCHEy9BHcEGhyoMZCCxt8l13nIoUE9Q2
                HJLw5QY33KbmkJs4j1xrG0aGQ0JfPgEHU1RdZX33inOhmlRaHylDFCfChQ+1iHsa
                O5S3HWCntZznKWlXWpuTekMwGwPXYshApqr8ZORK15FTAaggiG6cX0S5y2CBNOxv
                033aSF/rtJC8LakcC6wc1aJoIIAE1vyxjy+7SjENSoYc6+I2KSb12tjE8nVhz36u
                dmNKekBlk4f4HoCMhuWG1o8O/FMsYOgWYRqiPkN7zTlgVGr18okmAWiDSKIz6MkE
                kbIRNBE+6tBDGR8Dk5AM/1E9V/RBbuHLoL7ryWPNbczk+DaqaJ3tvV2XcEQNtg41
                3OEMXbugUZTLfhbrES+jkkXITHHZvMmZUldGL1DPvTVp9D0VzgalLA8+9oG6lLvD
                u79leNKGef9JOxqDDPDeeOzI8k1MGt6CKfjBWtrt7uYnXuhF0J0cUahoq0Tj0Itq
                4/g7u9xN12TyUb7mqqta6THuBrxzvxNiCp/HuZc=
                -----END CERTIFICATE-----

                ### certSIGN

                === /C=RO/O=certSIGN/OU=certSIGN ROOT CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 35210227249154 (0x200605167002)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jul  4 17:20:04 2006 GMT
                            Not After : Jul  4 17:20:04 2031 GMT
                        Subject: C=RO, O=certSIGN, OU=certSIGN ROOT CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Non Repudiation, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                E0:8C:9B:DB:25:49:B3:F1:7C:86:D6:B2:42:87:0B:D0:6B:A0:D9:E4
                SHA1 Fingerprint=FA:B7:EE:36:97:26:62:FB:2D:B0:2A:F6:BF:03:FD:E8:7C:4B:2F:9B
                SHA256 Fingerprint=EA:A9:62:C4:FA:4A:6B:AF:EB:E4:15:19:6D:35:1C:CD:88:8D:4F:53:F3:FA:8A:E6:D7:C4:66:A9:4E:60:42:BB
                -----BEGIN CERTIFICATE-----
                MIIDODCCAiCgAwIBAgIGIAYFFnACMA0GCSqGSIb3DQEBBQUAMDsxCzAJBgNVBAYT
                AlJPMREwDwYDVQQKEwhjZXJ0U0lHTjEZMBcGA1UECxMQY2VydFNJR04gUk9PVCBD
                QTAeFw0wNjA3MDQxNzIwMDRaFw0zMTA3MDQxNzIwMDRaMDsxCzAJBgNVBAYTAlJP
                MREwDwYDVQQKEwhjZXJ0U0lHTjEZMBcGA1UECxMQY2VydFNJR04gUk9PVCBDQTCC
                ASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALczuX7IJUqOtdu0KBuqV5Do
                0SLTZLrTk+jUrIZhQGpgV2hUhE28alQCBf/fm5oqrl0Hj0rDKH/v+yv6efHHrfAQ
                UySQi2bJqIirr1qjAOm+ukbuW3N7LBeCgV5iLKECZbO9xSsAfsT8AzNXDe3i+s5d
                RdY4zTW2ssHQnIFKquSyAVwdj1+ZxLGt24gh65AIgoDzMKND5pCCrlUoSe1b16kQ
                OA7+j0xbm0bqQfWwCHTD0IgztnzXdN/chNFDDnU5oSVAKOp4yw4sLjmdjItuFhwv
                JoIQ4uNllAoEwF73XVv4EOLQunpL+943AAAaWyjj0pxzPjKHmKHJUS/X3qwzs08C
                AwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAcYwHQYDVR0O
                BBYEFOCMm9slSbPxfIbWskKHC9BroNnkMA0GCSqGSIb3DQEBBQUAA4IBAQA+0hyJ
                LjX8+HXd5n9liPRyTMks1zJO890ZeUe9jjtbkw9QSSQTaxQGcu8J06Gh40CEyecY
                MnQ8SG4Pn0vU9x7Tk4ZkVJdjclDVVc/6IJMCopvDI5NOFlV2oHB5bc0hH88vLbwZ
                44gx+FkagQnIl6Z0x2DEW8xXjrJ1/RsCCdtZb3KTafcxQdaIOL+Hsr0Wefmq5L6I
                Jd1hJyMctTEHBDa0GpC9oHRxUIltvBTjD4au8as+x6AJzKNI0eDbZOeStc+vckNw
                i/nDhDwTqn6Sm1dTk/pwwpEOMfmbZ13pljheX7NzTogVZ96edhBiIL5VaZVDADlN
                9u6wWk5JRFRYX0KD
                -----END CERTIFICATE-----

                ### CERTSIGN SA

                === /C=RO/O=CERTSIGN SA/OU=certSIGN ROOT CA G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            11:00:34:b6:4e:c6:36:2d:36
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb  6 09:27:35 2017 GMT
                            Not After : Feb  6 09:27:35 2042 GMT
                        Subject: C=RO, O=CERTSIGN SA, OU=certSIGN ROOT CA G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                82:21:2D:66:C6:D7:A0:E0:15:EB:CE:4C:09:77:C4:60:9E:54:6E:03
                SHA1 Fingerprint=26:F9:93:B4:ED:3D:28:27:B0:B9:4B:A7:E9:15:1D:A3:8D:92:E5:32
                SHA256 Fingerprint=65:7C:FE:2F:A7:3F:AA:38:46:25:71:F3:32:A2:36:3A:46:FC:E7:02:09:51:71:07:02:CD:FB:B6:EE:DA:33:05
                -----BEGIN CERTIFICATE-----
                MIIFRzCCAy+gAwIBAgIJEQA0tk7GNi02MA0GCSqGSIb3DQEBCwUAMEExCzAJBgNV
                BAYTAlJPMRQwEgYDVQQKEwtDRVJUU0lHTiBTQTEcMBoGA1UECxMTY2VydFNJR04g
                Uk9PVCBDQSBHMjAeFw0xNzAyMDYwOTI3MzVaFw00MjAyMDYwOTI3MzVaMEExCzAJ
                BgNVBAYTAlJPMRQwEgYDVQQKEwtDRVJUU0lHTiBTQTEcMBoGA1UECxMTY2VydFNJ
                R04gUk9PVCBDQSBHMjCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAMDF
                dRmRfUR0dIf+DjuW3NgBFszuY5HnC2/OOwppGnzC46+CjobXXo9X69MhWf05N0Iw
                vlDqtg+piNguLWkh59E3GE59kdUWX2tbAMI5Qw02hVK5U2UPHULlj88F0+7cDBrZ
                uIt4ImfkabBoxTzkbFpG583H+u/E7Eu9aqSs/cwoUe+StCmrqzWaTOTECMYmzPhp
                n+Sc8CnTXPnGFiWeI8MgwT0PPzhAsP6CRDiqWhqKa2NYOLQV07YRaXseVO6MGiKs
                cpc/I1mbySKEwQdPzH/iV8oScLumZfNpdWO9lfsbl83kqK/20U6o2YpxJM02PbyW
                xPFsqa7lzw1uKA2wDrXKUXt4FMMgL3/7FFXhEZn91QqhngLjYl/rNUssuHLoPj1P
                rCy7Lobio3aP5ZMqz6WryFyNSwb/EkaseMsUBzXgqd+L6a8VTxaJW732jcZZroiF
                DsGJ6x9nxUWO/203Nit4ZoORUSs9/1F3dmKh7Gc+PoGD4FapUB8fepmrY7+EF3fx
                DTvf95xhszWYijqy7DwaNz9+j5LP2RIUZNoQAhVB/0/E6xyjyfqZ90bp4RjZsbgy
                LcsUDFDYg2WD7rlcz8sFWkz6GZdr1l0T08JcVLwyc6B49fFtHsufpaafItzRUZ6C
                eWRgKRM+o/1Pcmqr4tTluCRVLERLiohEnMqE0yo7AgMBAAGjQjBAMA8GA1UdEwEB
                /wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMB0GA1UdDgQWBBSCIS1mxteg4BXrzkwJ
                d8RgnlRuAzANBgkqhkiG9w0BAQsFAAOCAgEAYN4auOfyYILVAzOBywaK8SJJ6ejq
                kX/GM15oGQOGO0MBzwdw5AgeZYWR5hEit/UCI46uuR59H35s5r0l1ZUa8gWmr4UC
                b6741jH/JclKyMeKqdmfS0mbEVeZkkMR3rYzpMzXjWR91M08KCy0mpbqTfXERMQl
                qiCA2ClV9+BB/AYm/7k29UMUA2Z44RGx2iBfRgB4ACGlHgAoYXhvqAEBj500mv/0
                OJD7uNGzcgbJceaBxXntC6Z58hMLnPddDnskk7RI24Zf3lCGeOdA5jGokHZwYa+c
                NywRtYK3qq4kNFtyDGkNzVmf9nGvnAvRCjj5BiKDUyUM/FHE5r7iOZULJK2v0ZXk
                ltd0ZGtxTgI8qoXzIKNDOXZbbFD+mpwUHmUUihW9o4JFWklWatKcsWMy5WHgUyIO
                pwpJ6st+H6jiYoD2EEVSmAYY3qXNL3+q1Ok+CHLsIwMCPKaq2LxndD0UF/tUSxfj
                03k9bWtJySgOLnRQvwzZRjoQhsmnP+mg7H/rpXdYaXHmgwo38oZJar55CJD2AhZk
                PuXaTH4MNMn5X7azKFGnpyuqSfqNZSlO42sTp5SjLVFteAxEy9/eCG/Oo2Sr05WE
                1LlSVHJ7liXMvGnjSG4N0MedJ5qq+BOS3R7fY581qRY27Iy4g/Q9iY/NtBde17MX
                QRBdJ3NghVdJIgc=
                -----END CERTIFICATE-----

                ### China Financial Certification Authority

                === /C=CN/O=China Financial Certification Authority/CN=CFCA EV ROOT
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 407555286 (0x184accd6)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Aug  8 03:07:01 2012 GMT
                            Not After : Dec 31 03:07:01 2029 GMT
                        Subject: C=CN, O=China Financial Certification Authority, CN=CFCA EV ROOT
                        X509v3 extensions:
                            X509v3 Authority Key Identifier:
                                keyid:E3:FE:2D:FD:28:D0:0B:B5:BA:B6:A2:C4:BF:06:AA:05:8C:93:FB:2F

                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                E3:FE:2D:FD:28:D0:0B:B5:BA:B6:A2:C4:BF:06:AA:05:8C:93:FB:2F
                SHA1 Fingerprint=E2:B8:29:4B:55:84:AB:6B:58:C2:90:46:6C:AC:3F:B8:39:8F:84:83
                SHA256 Fingerprint=5C:C3:D7:8E:4E:1D:5E:45:54:7A:04:E6:87:3E:64:F9:0C:F9:53:6D:1C:CC:2E:F8:00:F3:55:C4:C5:FD:70:FD
                -----BEGIN CERTIFICATE-----
                MIIFjTCCA3WgAwIBAgIEGErM1jANBgkqhkiG9w0BAQsFADBWMQswCQYDVQQGEwJD
                TjEwMC4GA1UECgwnQ2hpbmEgRmluYW5jaWFsIENlcnRpZmljYXRpb24gQXV0aG9y
                aXR5MRUwEwYDVQQDDAxDRkNBIEVWIFJPT1QwHhcNMTIwODA4MDMwNzAxWhcNMjkx
                MjMxMDMwNzAxWjBWMQswCQYDVQQGEwJDTjEwMC4GA1UECgwnQ2hpbmEgRmluYW5j
                aWFsIENlcnRpZmljYXRpb24gQXV0aG9yaXR5MRUwEwYDVQQDDAxDRkNBIEVWIFJP
                T1QwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDXXWvNED8fBVnVBU03
                sQ7smCuOFR36k0sXgiFxEFLXUWRwFsJVaU2OFW2fvwwbwuCjZ9YMrM8irq93VCpL
                TIpTUnrD7i7es3ElweldPe6hL6P3KjzJIx1qqx2hp/Hz7KDVRM8Vz3IvHWOX6Jn5
                /ZOkVIBMUtRSqy5J35DNuF++P96hyk0g1CXohClTt7GIH//62pCfCqktQT+x8Rgp
                7hZZLDRJGqgG16iI0gNyejLi6mhNbiyWZXvKWfry4t3uMCz7zEasxGPrb382KzRz
                EpR/38wmnvFyXVBlWY9ps4deMm/DGIq1lY+wejfeWkU7xzbh72fROdOXW3NiGUgt
                hxwG+3SYIElz8AXSG7Ggo7cbcNOIabla1jj0Ytwli3i/+Oh+uFzJlU9fpy25IGvP
                a931DfSCt/SyZi4QKPaXWnuWFo8BGS1sbn85WAZkgwGDg8NNkt0yxoekN+kWzqot
                aK8KgWU6cMGbrU1tVMoqLUuFG7OA5nBFDWteNfB/O7ic5ARwiRIlk9oKmSJgamNg
                TnYGmE69g60dWIolhdLHZR4tjsbftsbhf4oEIRUpdPA+nJCdDC7xij5aqgwJHsfV
                PKPtl8MeNPo4+QgO48BdK4PRVmrJtqhUUy54Mmc9gn900PvhtgVguXDbjgv5E1hv
                cWAQUhC5wUEJ73IfZzF4/5YFjQIDAQABo2MwYTAfBgNVHSMEGDAWgBTj/i39KNAL
                tbq2osS/BqoFjJP7LzAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBBjAd
                BgNVHQ4EFgQU4/4t/SjQC7W6tqLEvwaqBYyT+y8wDQYJKoZIhvcNAQELBQADggIB
                ACXGumvrh8vegjmWPfBEp2uEcwPenStPuiB/vHiyz5ewG5zz13ku9Ui20vsXiObT
                ej/tUxPQ4i9qecsAIyjmHjdXNYmEwnZPNDatZ8POQQaIxffu2Bq41gt/UP+TqhdL
                jOztUmCypAbqTuv0axn96/Ua4CUqmtzHQTb3yHQFhDmVOdYLO6Qn+gjYXB74BGBS
                ESgoA//vU2YApUo0FmZ8/Qmkrp5nGm9BC2sGE5uPhnEFtC+NiWYzKXZUmhH4J/qy
                P5Hgzg0b8zAarb8iXRvTvyUFTeGSGn+ZnzxEk8rUQElsgIfXBDrDMlI1Dlb4pd19
                xIsNER9Tyx6yF7Zod1rg1MvIB671Oi6ON7fQAUtDKXeMOZePglr4UeWJoBjnaH9d
                Ci77o0cOPaYjesYBx4/IXr9tgFa+iiS6M+qf4TIRnvHST4D2G0CvOJ4RUHlzEhLN
                5mydLIhyPDCBBpEi6lmt2hkuIsKNuYyH4Ga8cyNfIWRjgEj1oDwYPZTISEEdQLpe
                /v5WOaHIz16eGWRGENoXkbcFgKyLmZJ956LYBws2J+dIeWCKw9cTXPhyQN9Ky8+Z
                AAoACxGV2lZFA4gKn2fQ1XmxqI1AbQ3CekD6819kR5LLU7m7Wc5P/dAVUwHY3+vZ
                5nbv0CO7O6l5s9UCKc2Jo5YPSjXnTkLAdc0Hz+Ys63su
                -----END CERTIFICATE-----

                ### Chunghwa Telecom Co., Ltd.

                === /C=TW/O=Chunghwa Telecom Co., Ltd./OU=ePKI Root Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            15:c8:bd:65:47:5c:af:b8:97:00:5e:e4:06:d2:bc:9d
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec 20 02:31:27 2004 GMT
                            Not After : Dec 20 02:31:27 2034 GMT
                        Subject: C=TW, O=Chunghwa Telecom Co., Ltd., OU=ePKI Root Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                1E:0C:F7:B6:67:F2:E1:92:26:09:45:C0:55:39:2E:77:3F:42:4A:A2
                            X509v3 Basic Constraints:
                                CA:TRUE
                            setCext-hashedRoot:
                                0/0-...0...+......0...g*.....E...
                V|.[x....S.....
                SHA1 Fingerprint=67:65:0D:F1:7E:8E:7E:5B:82:40:A4:F4:56:4B:CF:E2:3D:69:C6:F0
                SHA256 Fingerprint=C0:A6:F4:DC:63:A2:4B:FD:CF:54:EF:2A:6A:08:2A:0A:72:DE:35:80:3E:2F:F5:FF:52:7A:E5:D8:72:06:DF:D5
                -----BEGIN CERTIFICATE-----
                MIIFsDCCA5igAwIBAgIQFci9ZUdcr7iXAF7kBtK8nTANBgkqhkiG9w0BAQUFADBe
                MQswCQYDVQQGEwJUVzEjMCEGA1UECgwaQ2h1bmdod2EgVGVsZWNvbSBDby4sIEx0
                ZC4xKjAoBgNVBAsMIWVQS0kgUm9vdCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTAe
                Fw0wNDEyMjAwMjMxMjdaFw0zNDEyMjAwMjMxMjdaMF4xCzAJBgNVBAYTAlRXMSMw
                IQYDVQQKDBpDaHVuZ2h3YSBUZWxlY29tIENvLiwgTHRkLjEqMCgGA1UECwwhZVBL
                SSBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MIICIjANBgkqhkiG9w0BAQEF
                AAOCAg8AMIICCgKCAgEA4SUP7o3biDN1Z82tH306Tm2d0y8U82N0ywEhajfqhFAH
                SyZbCUNsIZ5qyNUD9WBpj8zwIuQf5/dqIjG3LBXy4P4AakP/h2XGtRrBp0xtInAh
                ijHyl3SJCRImHJ7K2RKilTza6We/CKBk49ZCt0Xvl/T29de1ShUCWH2YWEtgvM3X
                DZoTM1PRYfl61dd4s5oz9wCGzh1NlDivqOx4UXCKXBCDUSH3ET00hl7lSM2XgYI1
                TBnsZfZrxQWh7kcT1rMhJ5QQCtkkO7q+RBNGMD+XPNjX12ruOzjjK9SXDrkb5wdJ
                fzcq+Xd4z1TtW0ado4AOkUPB1ltfFLqfpo0kR0BZv3I4sjZsN/+Z0V0OWQqraffA
                sgRFelQArr5T9rXn4fg8ozHSqf4hUmTFpmfwdQcGlBSBVcYn5AGPF8Fqcde+S/uU
                WH1+ETOxQvdibBjWzwloPn9s9h6PYq2lY9sJpx8iQkEeb5mKPtf5P0B6ebClAZLS
                nT0IFaUQAS2zMnaolQ2zepr7BxB4EW/hj8e6DyUadCrlHJhBmd8hh+iVBmoKs2pH
                dmX2Os+PYhcZewoozRrSgx4hxyy/vv9haLdnG7t4TY3OZ+XkwY63I2binZB1NJip
                NiuKmpS5nezMirH4JYlcWrYvjB9teSSnUmjDhDXiZo1jDiVN1Rmy5nk3pyKdVDEC
                AwEAAaNqMGgwHQYDVR0OBBYEFB4M97Zn8uGSJglFwFU5Lnc/QkqiMAwGA1UdEwQF
                MAMBAf8wOQYEZyoHAAQxMC8wLQIBADAJBgUrDgMCGgUAMAcGBWcqAwAABBRFsMLH
                ClZ87lt4DJX5GFPBphzYEDANBgkqhkiG9w0BAQUFAAOCAgEACbODU1kBPpVJufGB
                uvl2ICO1J2B01GqZNF5sAFPZn/KmsSQHRGoqxqWOeBLoR9lYGxMqXnmbnwoqZ6Yl
                PwZpVnPDimZI+ymBV3QGypzqKOg4ZyYr8dW1P2WT+DZdjo2NQCCHGervJ8A9tDkP
                JXtoUHRVnAxZfVo9QZQlUgjgRywVMRnVvwdVxrsStZf0X4OFunHB2WyBEXYKCrC/
                gpf36j36+uwtqSiUO1bd0lEursC9CBWMd1I0ltabrNMdjmEPNXubrjlpC2JgQCA2
                j6/7Nu4tCEoduL+bXPjqpRugc6bY+G7gMwRfaKonh+3ZwZCc7b3jajWvY9+rGNm6
                5ulK6lCKD2GTHuItGeIwlDWSXQ62B68ZgI9HkFFLLk3dheLSClIKF5r8GrBQAuUB
                o2M3IUxExJtRmREOc5wGj1QupyheRDmHVi03vYVElOEMSyycw5KFNGHLD7ibSkNS
                /jQ6fbjpKdx2qcgw+BRxgMYeNkh0IkFch4LoGHGLQYlE535YW6i4jRPpp2zDR+2z
                Gp1iro2C6pSe3VkQw63d4k3jMdXH7OjysP6SHhYKGvzZ8/gntsm+HbRsZJB/9OTE
                W9c3rkIO3aQab3yIVMUWbuF6aC74Or8NpDyJO3inTmODBCEIZ43ygknQW/2xzQ+D
                hNQ+IIX3Sj0rnP0qCglN6oH4EZw=
                -----END CERTIFICATE-----

                ### COMODO CA Limited

                === /C=GB/ST=Greater Manchester/L=Salford/O=COMODO CA Limited/CN=COMODO Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            4e:81:2d:8a:82:65:e0:0b:02:ee:3e:35:02:46:e5:3d
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec  1 00:00:00 2006 GMT
                            Not After : Dec 31 23:59:59 2029 GMT
                        Subject: C=GB, ST=Greater Manchester, L=Salford, O=COMODO CA Limited, CN=COMODO Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                0B:58:E5:8B:C6:4C:15:37:A4:40:A9:30:A9:21:BE:47:36:5A:56:FF
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.comodoca.com/COMODOCertificationAuthority.crl

                SHA1 Fingerprint=66:31:BF:9E:F7:4F:9E:B6:C9:D5:A6:0C:BA:6A:BE:D1:F7:BD:EF:7B
                SHA256 Fingerprint=0C:2C:D6:3D:F7:80:6F:A3:99:ED:E8:09:11:6B:57:5B:F8:79:89:F0:65:18:F9:80:8C:86:05:03:17:8B:AF:66
                -----BEGIN CERTIFICATE-----
                MIIEHTCCAwWgAwIBAgIQToEtioJl4AsC7j41AkblPTANBgkqhkiG9w0BAQUFADCB
                gTELMAkGA1UEBhMCR0IxGzAZBgNVBAgTEkdyZWF0ZXIgTWFuY2hlc3RlcjEQMA4G
                A1UEBxMHU2FsZm9yZDEaMBgGA1UEChMRQ09NT0RPIENBIExpbWl0ZWQxJzAlBgNV
                BAMTHkNPTU9ETyBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTAeFw0wNjEyMDEwMDAw
                MDBaFw0yOTEyMzEyMzU5NTlaMIGBMQswCQYDVQQGEwJHQjEbMBkGA1UECBMSR3Jl
                YXRlciBNYW5jaGVzdGVyMRAwDgYDVQQHEwdTYWxmb3JkMRowGAYDVQQKExFDT01P
                RE8gQ0EgTGltaXRlZDEnMCUGA1UEAxMeQ09NT0RPIENlcnRpZmljYXRpb24gQXV0
                aG9yaXR5MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA0ECLi3LjkRv3
                UcEbVASY06m/weaKXTuH+7uIzg3jLz8GlvCiKVCZrts7oVewdFFxze1CkU1B/qnI
                2GqGd0S7WWaXUF601CxwRM/aN5VCaTwwxHGzUvAhTaHYujl8HJ6jJJ3ygxaYqhZ8
                Q5sVW7euNJH+1GImGEaaP+vB+fGQV+useg2L23IwambV4EajcNxo2f8ESIl33rXp
                +2dtQem8Ob0y2WIC8bGoPW43nOIv4tOiJovGuFVDiOEjPqXSJDlqR6sA1KGzqSX+
                DT+nHbrTUcELpNqsOO9VUCQFZUaTNE8tja3G1CEZ0o7KBWFxB3NH5YoZEr0ETc5O
                nKVIrLsm9wIDAQABo4GOMIGLMB0GA1UdDgQWBBQLWOWLxkwVN6RAqTCpIb5HNlpW
                /zAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zBJBgNVHR8EQjBAMD6g
                PKA6hjhodHRwOi8vY3JsLmNvbW9kb2NhLmNvbS9DT01PRE9DZXJ0aWZpY2F0aW9u
                QXV0aG9yaXR5LmNybDANBgkqhkiG9w0BAQUFAAOCAQEAPpiem/Yb6dc5t3iuHXIY
                SdOH5EOC6z/JqvWote9VfCFSZfnVDeFs9D6Mk3ORLgLETgdxb8CPOGEIqB6BCsAv
                IC9Bi5HcSEW88cbeunZrM8gALTFGTO3nnc+IlP8zwFboJIYmuNg4ON8qa90SzMc/
                RxdMosIGlgnW2/4/PEZB31jiVg88O8EckzXZOFKs7sjsLjBOlDW0JB9LeGna8gI4
                zJVSk/BwJVmcIGfE7vmLV2H0knZ9P4SNVbfo5azV8fUZVqZa+5Acr5Pr5RzUZ5dd
                BA6+C4OmF4O5MBKgxTMVBbkN+8cFduPYSo38NBejxiEovjBFMR7HeL5YYTisO+IB
                ZQ==
                -----END CERTIFICATE-----
                === /C=GB/ST=Greater Manchester/L=Salford/O=COMODO CA Limited/CN=COMODO ECC Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            1f:47:af:aa:62:00:70:50:54:4c:01:9e:9b:63:99:2a
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Mar  6 00:00:00 2008 GMT
                            Not After : Jan 18 23:59:59 2038 GMT
                        Subject: C=GB, ST=Greater Manchester, L=Salford, O=COMODO CA Limited, CN=COMODO ECC Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                75:71:A7:19:48:19:BC:9D:9D:EA:41:47:DF:94:C4:48:77:99:D3:79
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=9F:74:4E:9F:2B:4D:BA:EC:0F:31:2C:50:B6:56:3B:8E:2D:93:C3:11
                SHA256 Fingerprint=17:93:92:7A:06:14:54:97:89:AD:CE:2F:8F:34:F7:F0:B6:6D:0F:3A:E3:A3:B8:4D:21:EC:15:DB:BA:4F:AD:C7
                -----BEGIN CERTIFICATE-----
                MIICiTCCAg+gAwIBAgIQH0evqmIAcFBUTAGem2OZKjAKBggqhkjOPQQDAzCBhTEL
                MAkGA1UEBhMCR0IxGzAZBgNVBAgTEkdyZWF0ZXIgTWFuY2hlc3RlcjEQMA4GA1UE
                BxMHU2FsZm9yZDEaMBgGA1UEChMRQ09NT0RPIENBIExpbWl0ZWQxKzApBgNVBAMT
                IkNPTU9ETyBFQ0MgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMDgwMzA2MDAw
                MDAwWhcNMzgwMTE4MjM1OTU5WjCBhTELMAkGA1UEBhMCR0IxGzAZBgNVBAgTEkdy
                ZWF0ZXIgTWFuY2hlc3RlcjEQMA4GA1UEBxMHU2FsZm9yZDEaMBgGA1UEChMRQ09N
                T0RPIENBIExpbWl0ZWQxKzApBgNVBAMTIkNPTU9ETyBFQ0MgQ2VydGlmaWNhdGlv
                biBBdXRob3JpdHkwdjAQBgcqhkjOPQIBBgUrgQQAIgNiAAQDR3svdcmCFYX7deSR
                FtSrYpn1PlILBs5BAH+X4QokPB0BBO490o0JlwzgdeT6+3eKKvUDYEs2ixYjFq0J
                cfRK9ChQtP6IHG4/bC8vCVlbpVsLM5niwz2J+Wos77LTBumjQjBAMB0GA1UdDgQW
                BBR1cacZSBm8nZ3qQUfflMRId5nTeTAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/
                BAUwAwEB/zAKBggqhkjOPQQDAwNoADBlAjEA7wNbeqy3eApyt4jf/7VGFAkK+qDm
                fQjGGoe9GKhzvSbKYAydzpmfz1wPMOG+FDHqAjAU9JM8SaczepBGR7NjfRObTrdv
                GDeAU/7dIOA1mjbRxwG55tzd8/8dLDoWV9mSOdY=
                -----END CERTIFICATE-----
                === /C=GB/ST=Greater Manchester/L=Salford/O=COMODO CA Limited/CN=COMODO RSA Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            4c:aa:f9:ca:db:63:6f:e0:1f:f7:4e:d8:5b:03:86:9d
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Jan 19 00:00:00 2010 GMT
                            Not After : Jan 18 23:59:59 2038 GMT
                        Subject: C=GB, ST=Greater Manchester, L=Salford, O=COMODO CA Limited, CN=COMODO RSA Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                BB:AF:7E:02:3D:FA:A6:F1:3C:84:8E:AD:EE:38:98:EC:D9:32:32:D4
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=AF:E5:D2:44:A8:D1:19:42:30:FF:47:9F:E2:F8:97:BB:CD:7A:8C:B4
                SHA256 Fingerprint=52:F0:E1:C4:E5:8E:C6:29:29:1B:60:31:7F:07:46:71:B8:5D:7E:A8:0D:5B:07:27:34:63:53:4B:32:B4:02:34
                -----BEGIN CERTIFICATE-----
                MIIF2DCCA8CgAwIBAgIQTKr5yttjb+Af907YWwOGnTANBgkqhkiG9w0BAQwFADCB
                hTELMAkGA1UEBhMCR0IxGzAZBgNVBAgTEkdyZWF0ZXIgTWFuY2hlc3RlcjEQMA4G
                A1UEBxMHU2FsZm9yZDEaMBgGA1UEChMRQ09NT0RPIENBIExpbWl0ZWQxKzApBgNV
                BAMTIkNPTU9ETyBSU0EgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMTAwMTE5
                MDAwMDAwWhcNMzgwMTE4MjM1OTU5WjCBhTELMAkGA1UEBhMCR0IxGzAZBgNVBAgT
                EkdyZWF0ZXIgTWFuY2hlc3RlcjEQMA4GA1UEBxMHU2FsZm9yZDEaMBgGA1UEChMR
                Q09NT0RPIENBIExpbWl0ZWQxKzApBgNVBAMTIkNPTU9ETyBSU0EgQ2VydGlmaWNh
                dGlvbiBBdXRob3JpdHkwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQCR
                6FSS0gpWsawNJN3Fz0RndJkrN6N9I3AAcbxT38T6KhKPS38QVr2fcHK3YX/JSw8X
                pz3jsARh7v8Rl8f0hj4K+j5c+ZPmNHrZFGvnnLOFoIJ6dq9xkNfs/Q36nGz637CC
                9BR++b7Epi9Pf5l/tfxnQ3K9DADWietrLNPtj5gcFKt+5eNu/Nio5JIk2kNrYrhV
                /erBvGy2i/MOjZrkm2xpmfh4SDBF1a3hDTxFYPwyllEnvGfDyi62a+pGx8cgoLEf
                Zd5ICLqkTqnyg0Y3hOvozIFIQ2dOciqbXL1MGyiKXCJ7tKuY2e7gUYPDCUZObT6Z
                +pUX2nwzV0E8jVHtC7ZcryxjGt9XyD+86V3Em69FmeKjWiS0uqlWPc9vqv9JWL7w
                qP/0uK3pN/u6uPQLOvnoQ0IeidiEyxPx2bvhiWC4jChWrBQdnArncevPDt09qZah
                SL0896+1DSJMwBGB7FY79tOi4lu3sgQiUpWAk2nojkxl8ZEDLXB0AuqLZxUpaVIC
                u9ffUGpVRr+goyhhf3DQw6KqLCGqR84onAZFdr+CGCe01a60y1Dma/RMhnEw6abf
                Fobg2P9A3fvQQoh/ozM6LlweQRGBY84YcWsr7KaKtzFcOmpH4MN5WdYgGq/yapiq
                crxXStJLnbsQ/LBMQeXtHT1eKJ2czL+zUdqnR+WEUwIDAQABo0IwQDAdBgNVHQ4E
                FgQUu69+Aj36pvE8hI6t7jiY7NkyMtQwDgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB
                /wQFMAMBAf8wDQYJKoZIhvcNAQEMBQADggIBAArx1UaEt65Ru2yyTUEUAJNMnMvl
                wFTPoCWOAvn9sKIN9SCYPBMtrFaisNZ+EZLpLrqeLppysb0ZRGxhNaKatBYSaVqM
                4dc+pBroLwP0rmEdEBsqpIt6xf4FpuHA1sj+nq6PK7o9mfjYcwlYRm6mnPTXJ9OV
                2jeDchzTc+CiR5kDOF3VSXkAKRzH7JsgHAckaVd4sjn8OoSgtZx8jb8uk2Intzna
                FxiuvTwJaP+EmzzV1gsD41eeFPfR60/IvYcjt7ZJQ3mFXLrrkguhxuhoqEwWsRqZ
                CuhTLJK7oQkYdQxlqHvLI7cawiiFwxv/0Cti76R7CZGYZ4wUAc1oBmpjIXUDgIiK
                boHGhfKppC3n9KUkEEeDys30jXlYsQab5xoq2Z0B15R97QNKyvDb6KkBPvVWmcke
                jkk9u+UJueBPSZI9FoJAzMxZxuY67RIuaTxslbH9qh17f4a+Hg4yRvv7E491f0yL
                S0Zj/gA0QHDBw7mh3aZw4gSzQbzpgJHqZJx64SIDqZxubw5lT2yHh17zbqD5daWb
                QOhTsiedSrnAdyGN/4fy3ryM7xfft0kL0fJuMAsaDk527RH89elWsn2/x20Kk4yl
                0MC2Hb46TpSi125sC8KKfPog88Tk5c0NqMuRkrF8hey1FGlmDoLnzc7ILaZRfyHB
                NVOFBkpdn627G190
                -----END CERTIFICATE-----

                ### Comodo CA Limited

                === /C=GB/ST=Greater Manchester/L=Salford/O=Comodo CA Limited/CN=AAA Certificate Services
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1 (0x1)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jan  1 00:00:00 2004 GMT
                            Not After : Dec 31 23:59:59 2028 GMT
                        Subject: C=GB, ST=Greater Manchester, L=Salford, O=Comodo CA Limited, CN=AAA Certificate Services
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                A0:11:0A:23:3E:96:F1:07:EC:E2:AF:29:EF:82:A5:7F:D0:30:A4:B4
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.comodoca.com/AAACertificateServices.crl

                                Full Name:
                                  URI:http://crl.comodo.net/AAACertificateServices.crl

                SHA1 Fingerprint=D1:EB:23:A4:6D:17:D6:8F:D9:25:64:C2:F1:F1:60:17:64:D8:E3:49
                SHA256 Fingerprint=D7:A7:A0:FB:5D:7E:27:31:D7:71:E9:48:4E:BC:DE:F7:1D:5F:0C:3E:0A:29:48:78:2B:C8:3E:E0:EA:69:9E:F4
                -----BEGIN CERTIFICATE-----
                MIIEMjCCAxqgAwIBAgIBATANBgkqhkiG9w0BAQUFADB7MQswCQYDVQQGEwJHQjEb
                MBkGA1UECAwSR3JlYXRlciBNYW5jaGVzdGVyMRAwDgYDVQQHDAdTYWxmb3JkMRow
                GAYDVQQKDBFDb21vZG8gQ0EgTGltaXRlZDEhMB8GA1UEAwwYQUFBIENlcnRpZmlj
                YXRlIFNlcnZpY2VzMB4XDTA0MDEwMTAwMDAwMFoXDTI4MTIzMTIzNTk1OVowezEL
                MAkGA1UEBhMCR0IxGzAZBgNVBAgMEkdyZWF0ZXIgTWFuY2hlc3RlcjEQMA4GA1UE
                BwwHU2FsZm9yZDEaMBgGA1UECgwRQ29tb2RvIENBIExpbWl0ZWQxITAfBgNVBAMM
                GEFBQSBDZXJ0aWZpY2F0ZSBTZXJ2aWNlczCCASIwDQYJKoZIhvcNAQEBBQADggEP
                ADCCAQoCggEBAL5AnfRu4ep2hxxNRUSOvkbIgwadwSr+GB+O5AL686tdUIoWMQua
                BtDFcCLNSS1UY8y2bmhGC1Pqy0wkwLxyTurxFa70VJoSCsN6sjNg4tqJVfMiWPPe
                3M/vg4aijJRPn2jymJBGhCfHdr/jzDUsi14HZGWCwEiwqJH5YZ92IFCokcdmtet4
                YgNW8IoaE+oxox6gmf049vYnMlhvB/VruPsUK6+3qszWY19zjNoFmag4qMsXeDZR
                rOme9Hg6jc8P2ULimAyrL58OAd7vn5lJ8S3frHRNG5i1R8XlKdH5kBjHYpy+g8cm
                ez6KJcfA3Z3mNWgQIJ2P2N7Sw4ScDV7oL8kCAwEAAaOBwDCBvTAdBgNVHQ4EFgQU
                oBEKIz6W8Qfs4q8p74Klf9AwpLQwDgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQF
                MAMBAf8wewYDVR0fBHQwcjA4oDagNIYyaHR0cDovL2NybC5jb21vZG9jYS5jb20v
                QUFBQ2VydGlmaWNhdGVTZXJ2aWNlcy5jcmwwNqA0oDKGMGh0dHA6Ly9jcmwuY29t
                b2RvLm5ldC9BQUFDZXJ0aWZpY2F0ZVNlcnZpY2VzLmNybDANBgkqhkiG9w0BAQUF
                AAOCAQEACFb8AvCb6P+k+tZ7xkSAzk/ExfYAWMymtrwUSWgEdujm7l3sAg9g1o1Q
                GE8mTgHj5rCl7r+8dFRBv/38ErjHT1r0iWAFf2C3BUrz9vHCv8S5dIa2LX1rzNLz
                Rt0vxuBqw8M0Ayx9lt1awg6nCpnBBYurDC/zXDrPbDdVCYfeU0BsWO/8tqtlbgT2
                G9w84FoVxp7Z8VlIMCFlA2zs6SFz7JsDoeA3raAVGI/6ugLOpyypEBMs1OUIJqsi
                l2D4kF501KKaU73yqWjgom7C12yxow+ev+to51byrvLjKzg6CYG1a4XXvi3tPxq3
                smPi9WIsgtRqAEFQ8TmDn5XpNpaYbg==
                -----END CERTIFICATE-----

                ### Cybertrust, Inc

                === /O=Cybertrust, Inc/CN=Cybertrust Global Root
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            04:00:00:00:00:01:0f:85:aa:2d:48
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec 15 08:00:00 2006 GMT
                            Not After : Dec 15 08:00:00 2021 GMT
                        Subject: O=Cybertrust, Inc, CN=Cybertrust Global Root
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                B6:08:7B:0D:7A:CC:AC:20:4C:86:56:32:5E:CF:AB:6E:85:2D:70:57
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://www2.public-trust.com/crl/ct/ctroot.crl

                            X509v3 Authority Key Identifier:
                                keyid:B6:08:7B:0D:7A:CC:AC:20:4C:86:56:32:5E:CF:AB:6E:85:2D:70:57

                SHA1 Fingerprint=5F:43:E5:B1:BF:F8:78:8C:AC:1C:C7:CA:4A:9A:C6:22:2B:CC:34:C6
                SHA256 Fingerprint=96:0A:DF:00:63:E9:63:56:75:0C:29:65:DD:0A:08:67:DA:0B:9C:BD:6E:77:71:4A:EA:FB:23:49:AB:39:3D:A3
                -----BEGIN CERTIFICATE-----
                MIIDoTCCAomgAwIBAgILBAAAAAABD4WqLUgwDQYJKoZIhvcNAQEFBQAwOzEYMBYG
                A1UEChMPQ3liZXJ0cnVzdCwgSW5jMR8wHQYDVQQDExZDeWJlcnRydXN0IEdsb2Jh
                bCBSb290MB4XDTA2MTIxNTA4MDAwMFoXDTIxMTIxNTA4MDAwMFowOzEYMBYGA1UE
                ChMPQ3liZXJ0cnVzdCwgSW5jMR8wHQYDVQQDExZDeWJlcnRydXN0IEdsb2JhbCBS
                b290MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA+Mi8vRRQZhP/8NN5
                7CPytxrHjoXxEnOmGaoQ25yiZXRadz5RfVb23CO21O1fWLE3TdVJDm71aofW0ozS
                J8bi/zafmGWgE07GKmSb1ZASzxQG9Dvj1Ci+6A74q05IlG2OlTEQXO2iLb3VOm2y
                HLtgwEZLAfVJrn5GitB0jaEMAs7u/OePuGtm839EAL9mJRQr3RAwHQeWP032a7iP
                t3sMpTjr3kfb1V05/Iin89cqdPHoWqI7n1C6poxFNcJQZZXcY4Lv3b93TZxiyWNz
                FtApD0mpSPCzqrdsxacwOUBdrsTiXSZT8M4cIwhhqJQZugRiQOwfOHB3EgZxpzAY
                XSUnpQIDAQABo4GlMIGiMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8EBTADAQH/
                MB0GA1UdDgQWBBS2CHsNesysIEyGVjJez6tuhS1wVzA/BgNVHR8EODA2MDSgMqAw
                hi5odHRwOi8vd3d3Mi5wdWJsaWMtdHJ1c3QuY29tL2NybC9jdC9jdHJvb3QuY3Js
                MB8GA1UdIwQYMBaAFLYIew16zKwgTIZWMl7Pq26FLXBXMA0GCSqGSIb3DQEBBQUA
                A4IBAQBW7wojoFROlZfJ+InaRcHUowAl9B8Tq7ejhVhpwjCt2BWKLePJzYFa+HMj
                Wqd8BfP9IjsO0QbE2zZMcwSO5bAi5MXzLqXZI+O4Tkogp24CJJ8iYGd7ix1yCcUx
                XOl5n4BHPa2hCwcUPUf/A2kaDAtE52Mlp3+yybh2hO0j9n0Hq0V+09+zv+mKts2o
                omcrUtW3ZfA5TGOgkXmTUg9U3YO7n9GPp1Nzw8v/MOx8BLjYRB+TX3EJIrduPuoc
                A06dGiBh+4E37F78CkWr1+cXVdCg6mCbpvbjjFspwgZgFJ0tl0ypkxWdYcQBX0jW
                WL1WMRJOEcgh4LMRkWXbtKaIOM5V
                -----END CERTIFICATE-----

                ### D-Trust GmbH

                === /C=DE/O=D-Trust GmbH/CN=D-TRUST Root Class 3 CA 2 2009
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 623603 (0x983f3)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Nov  5 08:35:58 2009 GMT
                            Not After : Nov  5 08:35:58 2029 GMT
                        Subject: C=DE, O=D-Trust GmbH, CN=D-TRUST Root Class 3 CA 2 2009
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                FD:DA:14:C4:9F:30:DE:21:BD:1E:42:39:FC:AB:63:23:49:E0:F1:84
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:ldap://directory.d-trust.net/CN=D-TRUST%20Root%20Class%203%20CA%202%202009,O=D-Trust%20GmbH,C=DE?certificaterevocationlist

                                Full Name:
                                  URI:http://www.d-trust.net/crl/d-trust_root_class_3_ca_2_2009.crl

                SHA1 Fingerprint=58:E8:AB:B0:36:15:33:FB:80:F7:9B:1B:6D:29:D3:FF:8D:5F:00:F0
                SHA256 Fingerprint=49:E7:A4:42:AC:F0:EA:62:87:05:00:54:B5:25:64:B6:50:E4:F4:9E:42:E3:48:D6:AA:38:E0:39:E9:57:B1:C1
                -----BEGIN CERTIFICATE-----
                MIIEMzCCAxugAwIBAgIDCYPzMA0GCSqGSIb3DQEBCwUAME0xCzAJBgNVBAYTAkRF
                MRUwEwYDVQQKDAxELVRydXN0IEdtYkgxJzAlBgNVBAMMHkQtVFJVU1QgUm9vdCBD
                bGFzcyAzIENBIDIgMjAwOTAeFw0wOTExMDUwODM1NThaFw0yOTExMDUwODM1NTha
                ME0xCzAJBgNVBAYTAkRFMRUwEwYDVQQKDAxELVRydXN0IEdtYkgxJzAlBgNVBAMM
                HkQtVFJVU1QgUm9vdCBDbGFzcyAzIENBIDIgMjAwOTCCASIwDQYJKoZIhvcNAQEB
                BQADggEPADCCAQoCggEBANOySs96R+91myP6Oi/WUEWJNTrGa9v+2wBoqOADER03
                UAifTUpolDWzU9GUY6cgVq/eUXjsKj3zSEhQPgrfRlWLJ23DEE0NkVJD2IfgXU42
                tSHKXzlABF9bfsyjxiupQB7ZNoTWSPOSHjRGICTBpFGOShrvUD9pXRl/RcPHAY9R
                ySPocq60vFYJfxLLHLGvKZAKyVXMD9O0Gu1HNVpK7ZxzBCHQqr0ME7UAyiZsxGsM
                lFqVlNpQmvH/pStmMaTJOKDfHR+4CS7zp+hnUquVH+BGPtikw8paxTGA6Eian5Rp
                /hnd2HN8gcqW3o7tszIFZYQ05ub9VxC1X3a/L7AQDcUCAwEAAaOCARowggEWMA8G
                A1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFP3aFMSfMN4hvR5COfyrYyNJ4PGEMA4G
                A1UdDwEB/wQEAwIBBjCB0wYDVR0fBIHLMIHIMIGAoH6gfIZ6bGRhcDovL2RpcmVj
                dG9yeS5kLXRydXN0Lm5ldC9DTj1ELVRSVVNUJTIwUm9vdCUyMENsYXNzJTIwMyUy
                MENBJTIwMiUyMDIwMDksTz1ELVRydXN0JTIwR21iSCxDPURFP2NlcnRpZmljYXRl
                cmV2b2NhdGlvbmxpc3QwQ6BBoD+GPWh0dHA6Ly93d3cuZC10cnVzdC5uZXQvY3Js
                L2QtdHJ1c3Rfcm9vdF9jbGFzc18zX2NhXzJfMjAwOS5jcmwwDQYJKoZIhvcNAQEL
                BQADggEBAH+X2zDI36ScfSF6gHDOFBJpiBSVYEQBrLLpME+bUMJm2H6NMLVwMeni
                acfzcNsgFYbQDfC+rAF1hM5+n02/t2A7nPPKHeJeaNijnZflQGDSNiH+0LS4F9p0
                o3/U37CYAqxva2ssJSRyoWXuJVrl5jLn8t+rSfrzkGkj2wTZ51xY/GXUl77M/C4K
                zCUqNQT4YJEVdT1B/yMfGchs64JTBKbkTCJNjYy6zltz7GRUUG3RnFX7acM2w4y8
                PIWmawomDeCTmGCufsYkl4phX5GOZpIJhzbNi5stPvZR1FDUWSi9g/LMKHtThm3Y
                Johw1+qRzT65ysCQblrGXnRl11z+o+I=
                -----END CERTIFICATE-----
                === /C=DE/O=D-Trust GmbH/CN=D-TRUST Root Class 3 CA 2 EV 2009
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 623604 (0x983f4)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Nov  5 08:50:46 2009 GMT
                            Not After : Nov  5 08:50:46 2029 GMT
                        Subject: C=DE, O=D-Trust GmbH, CN=D-TRUST Root Class 3 CA 2 EV 2009
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                D3:94:8A:4C:62:13:2A:19:2E:CC:AF:72:8A:7D:36:D7:9A:1C:DC:67
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:ldap://directory.d-trust.net/CN=D-TRUST%20Root%20Class%203%20CA%202%20EV%202009,O=D-Trust%20GmbH,C=DE?certificaterevocationlist

                                Full Name:
                                  URI:http://www.d-trust.net/crl/d-trust_root_class_3_ca_2_ev_2009.crl

                SHA1 Fingerprint=96:C9:1B:0B:95:B4:10:98:42:FA:D0:D8:22:79:FE:60:FA:B9:16:83
                SHA256 Fingerprint=EE:C5:49:6B:98:8C:E9:86:25:B9:34:09:2E:EC:29:08:BE:D0:B0:F3:16:C2:D4:73:0C:84:EA:F1:F3:D3:48:81
                -----BEGIN CERTIFICATE-----
                MIIEQzCCAyugAwIBAgIDCYP0MA0GCSqGSIb3DQEBCwUAMFAxCzAJBgNVBAYTAkRF
                MRUwEwYDVQQKDAxELVRydXN0IEdtYkgxKjAoBgNVBAMMIUQtVFJVU1QgUm9vdCBD
                bGFzcyAzIENBIDIgRVYgMjAwOTAeFw0wOTExMDUwODUwNDZaFw0yOTExMDUwODUw
                NDZaMFAxCzAJBgNVBAYTAkRFMRUwEwYDVQQKDAxELVRydXN0IEdtYkgxKjAoBgNV
                BAMMIUQtVFJVU1QgUm9vdCBDbGFzcyAzIENBIDIgRVYgMjAwOTCCASIwDQYJKoZI
                hvcNAQEBBQADggEPADCCAQoCggEBAJnxhDRwui+3MKCOvXwEz75ivJn9gpfSegpn
                ljgJ9hBOlSJzmY3aFS3nBfwZcyK3jpgAvDw9rKFs+9Z5JUut8Mxk2og+KbgPCdM0
                3TP1YtHhzRnp7hhPTFiu4h7WDFsVWtg6uMQYZB7jM7K1iXdODL/ZlGsTl28So/6Z
                qQTMFexgaDbtCHu39b+T7WYxg4zGcTSHThfqr4uRjRxWQa4iN1438h3Z0S0NL2lR
                p75mpoo6Kr3HGrHhFPC+Oh25z1uxav60sUYgovseO3Dvk5h9jHOW8sXvhXCtKSb8
                HgQ+HKDYD8tSg2J87otTlZCpV6LqYQXY+U3EJ/pure3511H3a6UCAwEAAaOCASQw
                ggEgMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFNOUikxiEyoZLsyvcop9Ntea
                HNxnMA4GA1UdDwEB/wQEAwIBBjCB3QYDVR0fBIHVMIHSMIGHoIGEoIGBhn9sZGFw
                Oi8vZGlyZWN0b3J5LmQtdHJ1c3QubmV0L0NOPUQtVFJVU1QlMjBSb290JTIwQ2xh
                c3MlMjAzJTIwQ0ElMjAyJTIwRVYlMjAyMDA5LE89RC1UcnVzdCUyMEdtYkgsQz1E
                RT9jZXJ0aWZpY2F0ZXJldm9jYXRpb25saXN0MEagRKBChkBodHRwOi8vd3d3LmQt
                dHJ1c3QubmV0L2NybC9kLXRydXN0X3Jvb3RfY2xhc3NfM19jYV8yX2V2XzIwMDku
                Y3JsMA0GCSqGSIb3DQEBCwUAA4IBAQA07XtaPKSUiO8aEXUHL7P+PPoeUSbrh/Yp
                3uDx1MYkCenBz1UbtDDZzhr+BlGmFaQt77JLvyAoJUnRpjZ3NOhk31KxEcdzes05
                nsKtjHEh8lprr988TlWvsoRlFIm5d8sqMb7Po23Pb0iUMkZv53GMoKaEGTcH8gNF
                CSuGdXzfX2lXANtu2KZyIktQ1HWYVt+3GP9DQ1CuekR78HlR10M9p9OB0/DJT7na
                xpeG0ILD5EJt/rDiZE4OJudANCa1CInXCGNjOCd1HjPqbqjdn5lPdE2BiYBL3ZqX
                KVwvvoFBuYz/6n1gBp7N1z3TLqMVvKjmJuVvw9y4AyHqnxbxLFS1
                -----END CERTIFICATE-----

                ### Dhimyotis

                === /C=FR/O=Dhimyotis/CN=Certigna
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            fe:dc:e3:01:0f:c9:48:ff
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jun 29 15:13:05 2007 GMT
                            Not After : Jun 29 15:13:05 2027 GMT
                        Subject: C=FR, O=Dhimyotis, CN=Certigna
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                1A:ED:FE:41:39:90:B4:24:59:BE:01:F2:52:D5:45:F6:5A:39:DC:11
                            X509v3 Authority Key Identifier:
                                keyid:1A:ED:FE:41:39:90:B4:24:59:BE:01:F2:52:D5:45:F6:5A:39:DC:11
                                DirName:/C=FR/O=Dhimyotis/CN=Certigna
                                serial:FE:DC:E3:01:0F:C9:48:FF

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            Netscape Cert Type:
                                SSL CA, S/MIME CA, Object Signing CA
                SHA1 Fingerprint=B1:2E:13:63:45:86:A4:6F:1A:B2:60:68:37:58:2D:C4:AC:FD:94:97
                SHA256 Fingerprint=E3:B6:A2:DB:2E:D7:CE:48:84:2F:7A:C5:32:41:C7:B7:1D:54:14:4B:FB:40:C1:1F:3F:1D:0B:42:F5:EE:A1:2D
                -----BEGIN CERTIFICATE-----
                MIIDqDCCApCgAwIBAgIJAP7c4wEPyUj/MA0GCSqGSIb3DQEBBQUAMDQxCzAJBgNV
                BAYTAkZSMRIwEAYDVQQKDAlEaGlteW90aXMxETAPBgNVBAMMCENlcnRpZ25hMB4X
                DTA3MDYyOTE1MTMwNVoXDTI3MDYyOTE1MTMwNVowNDELMAkGA1UEBhMCRlIxEjAQ
                BgNVBAoMCURoaW15b3RpczERMA8GA1UEAwwIQ2VydGlnbmEwggEiMA0GCSqGSIb3
                DQEBAQUAA4IBDwAwggEKAoIBAQDIaPHJ1tazNHUmgh7stL7qXOEm7RFHYeGifBZ4
                QCHkYJ5ayGPhxLGWkv8YbWkj4Sti993iNi+RB7lIzw7sebYs5zRLcAglozyHGxny
                gQcPOJAZ0xH+hrTy0V4eHpbNgGzOOzGTtvKg0KmVEn2lmsxryIRWijOp5yIVUxbw
                zBfsV1/pogqYCd7jX5xv3EjjhQsVWqa6n6xI4wmy9/Qy3l40vhx4XUJbzg4ij02Q
                130yGLMLLGq/jj8UEYkgDncUtT2UCIf3JR7VsmAA7G8qKCVuKj4YYxclPz5EIBb2
                JsglrgVKtOdjLPOMFlN+XPsRGgjBRmKfIrjxwo1p3Po6WAbfAgMBAAGjgbwwgbkw
                DwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUGu3+QTmQtCRZvgHyUtVF9lo53BEw
                ZAYDVR0jBF0wW4AUGu3+QTmQtCRZvgHyUtVF9lo53BGhOKQ2MDQxCzAJBgNVBAYT
                AkZSMRIwEAYDVQQKDAlEaGlteW90aXMxETAPBgNVBAMMCENlcnRpZ25hggkA/tzj
                AQ/JSP8wDgYDVR0PAQH/BAQDAgEGMBEGCWCGSAGG+EIBAQQEAwIABzANBgkqhkiG
                9w0BAQUFAAOCAQEAhQMeknH2Qq/ho2Ge6/PAD/Kl1NqV5ta+aDY9fm4fTIrv0Q8h
                bV6lUmPOEvjvKtpv6zf+EwLHyzs+ImvaYS5/1HI93TDhHkxAGYwP15zRgzB7mFnc
                fca5DClMoTOi62c6ZYTTluLtdkVwj7Ur3vkj1kluPBS1xp81HlDQwY9qcEQCYsuu
                HWhBp6pX6FOqB9IG9tUUBguRA3UsbHK1YZWaDYu5Def131TN3ubY1gkIl2PlwS6w
                t0QmwCbAr1UwnjvVNioZBPRcHv/PLLf/0P2HQBHVESO7SMAhqaQoLf0V+LBOK/Qw
                WyH8EZE0vkHve52Xdf+XlcCWWC/qu0bXu+TZLg==
                -----END CERTIFICATE-----
                === /C=FR/O=Dhimyotis/OU=0002 48146308100036/CN=Certigna Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            ca:e9:1b:89:f1:55:03:0d:a3:e6:41:6d:c4:e3:a6:e1
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct  1 08:32:27 2013 GMT
                            Not After : Oct  1 08:32:27 2033 GMT
                        Subject: C=FR, O=Dhimyotis, OU=0002 48146308100036, CN=Certigna Root CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                18:87:56:E0:6E:77:EE:24:35:3C:4E:73:9A:1F:D6:E1:E2:79:7E:2B
                            X509v3 Authority Key Identifier:
                                keyid:18:87:56:E0:6E:77:EE:24:35:3C:4E:73:9A:1F:D6:E1:E2:79:7E:2B

                            X509v3 Certificate Policies:
                                Policy: X509v3 Any Policy
                                  CPS: https://wwww.certigna.fr/autorites/

                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.certigna.fr/certignarootca.crl

                                Full Name:
                                  URI:http://crl.dhimyotis.com/certignarootca.crl

                SHA1 Fingerprint=2D:0D:52:14:FF:9E:AD:99:24:01:74:20:47:6E:6C:85:27:27:F5:43
                SHA256 Fingerprint=D4:8D:3D:23:EE:DB:50:A4:59:E5:51:97:60:1C:27:77:4B:9D:7B:18:C9:4D:5A:05:95:11:A1:02:50:B9:31:68
                -----BEGIN CERTIFICATE-----
                MIIGWzCCBEOgAwIBAgIRAMrpG4nxVQMNo+ZBbcTjpuEwDQYJKoZIhvcNAQELBQAw
                WjELMAkGA1UEBhMCRlIxEjAQBgNVBAoMCURoaW15b3RpczEcMBoGA1UECwwTMDAw
                MiA0ODE0NjMwODEwMDAzNjEZMBcGA1UEAwwQQ2VydGlnbmEgUm9vdCBDQTAeFw0x
                MzEwMDEwODMyMjdaFw0zMzEwMDEwODMyMjdaMFoxCzAJBgNVBAYTAkZSMRIwEAYD
                VQQKDAlEaGlteW90aXMxHDAaBgNVBAsMEzAwMDIgNDgxNDYzMDgxMDAwMzYxGTAX
                BgNVBAMMEENlcnRpZ25hIFJvb3QgQ0EwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAw
                ggIKAoICAQDNGDllGlmx6mQWDoyUJJV8g9PFOSbcDO8WV43X2KyjQn+Cyu3NW9sO
                ty3tRQgXstmzy9YXUnIo245Onoq2C/mehJpNdt4iKVzSs9IGPjA5qXSjklYcoW9M
                CiBtnyN6tMbaLOQdLNyzKNAT8kxOAkmhVECe5uUFoC2EyP+YbNDrihqECB63aCPu
                I9Vwzm1RaRDuoXrC0SIxwoKF0vJVdlB8JXrJhFwLrN1CTivngqIkicuQstDuI7pm
                TLtipPlTWmR7fJj6o0ieD5Wupxj0auwuA0Wv8HT4Ks16XdG+RCYyKfHx9WzMfgIh
                C59vpD++nVPiz32pLHxYGpfhPTc3GGYo0kDFUYqMwy3OU4gkWGQwFsWq4NYKpkDf
                ePb1BHxpE4S80dGnBs8B92jAqFe7OmGtBIyT46388NtEbVncSVmurJqZNjBBe3Yz
                IoejwpKGbvlw7q6Hh5UbxHq9MfPU0uWZ/75I7HX1eBYdpnDBfzwboZL7z8g81sWT
                Co/1VTp2lc5ZmIoJlXcymoO6LAQ6l73UL77XbJuiyn1tJslV1c/DeVIICZkHJC1k
                JWumIWmbat10TWuXekG9qxf5kBdIjzb5LdXF2+6qhUVB+s06RbFo5jZMm5BX7CO5
                hwjCxAnxl4YqKE3idMDaxIzb3+KhF1nOJFl0Mdp//TBt2dzhauH8XwIDAQABo4IB
                GjCCARYwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYE
                FBiHVuBud+4kNTxOc5of1uHieX4rMB8GA1UdIwQYMBaAFBiHVuBud+4kNTxOc5of
                1uHieX4rMEQGA1UdIAQ9MDswOQYEVR0gADAxMC8GCCsGAQUFBwIBFiNodHRwczov
                L3d3d3cuY2VydGlnbmEuZnIvYXV0b3JpdGVzLzBtBgNVHR8EZjBkMC+gLaArhilo
                dHRwOi8vY3JsLmNlcnRpZ25hLmZyL2NlcnRpZ25hcm9vdGNhLmNybDAxoC+gLYYr
                aHR0cDovL2NybC5kaGlteW90aXMuY29tL2NlcnRpZ25hcm9vdGNhLmNybDANBgkq
                hkiG9w0BAQsFAAOCAgEAlLieT/DjlQgi581oQfccVdV8AOItOoldaDgvUSILSo3L
                6btdPrtcPbEo/uRTVRPPoZAbAh1fZkYJMyjhDSSXcNMQH+pkV5a7XdrnxIxPTGRG
                HVyH41neQtGbqH6mid2PHMkwgu07nM3A6RngatgCdTer9zQoKJHyBApPNeNgJgH6
                0BGM+RFq7q89w1DTj18zeTyGqHNFkIwgtnJzFyO+B2XleJINugHA64wcZr+shncB
                lA2c5uk5jR+mUYyZDDl34bSb+hxnV29qao6pK0xXeXpXIs/NX2NGjVxZOob4Mkdi
                o2cNGJHc+6Zr9UhhcyNZjgKnvETq9Emd8VRY+WCv2hikLyhF3HqgiIZd8zvn/yk1
                gPxkQ5Tm4xxvvq0OKmOZK8l+hfZx6AYDlf7ej0gcWtSS6Cvu5zHbugRqh5jnxV/v
                faci9wHYTfmJ0A6aBVmknpjZbyvKcL5kwlWj9Omvw5Ip3IgWJJk8jSaYtlu3zM63
                Nwf9JtmYhST/WSMDmu2dnajkXjjO11INb9I/bbEFa0nOipFGc/T2L/Coc3cOZayh
                jWZSaX5LaAzHHjcng6WMxwLkFM1JAbBzs/3GkDpv0mztO+7skb6iQ12LAEpmJURw
                3kAP+HwV96LOPNdeE4yBFxgX0b3xdxA61GU5wSesVywlVP+i2k+KYTlerj1KjL0=
                -----END CERTIFICATE-----

                ### DigiCert Inc

                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Assured ID Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0c:e7:e0:e5:17:d8:46:fe:8f:e5:60:fc:1b:f0:30:39
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov 10 00:00:00 2006 GMT
                            Not After : Nov 10 00:00:00 2031 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Assured ID Root CA
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                45:EB:A2:AF:F4:92:CB:82:31:2D:51:8B:A7:A7:21:9D:F3:6D:C8:0F
                            X509v3 Authority Key Identifier:
                                keyid:45:EB:A2:AF:F4:92:CB:82:31:2D:51:8B:A7:A7:21:9D:F3:6D:C8:0F

                SHA1 Fingerprint=05:63:B8:63:0D:62:D7:5A:BB:C8:AB:1E:4B:DF:B5:A8:99:B2:4D:43
                SHA256 Fingerprint=3E:90:99:B5:01:5E:8F:48:6C:00:BC:EA:9D:11:1E:E7:21:FA:BA:35:5A:89:BC:F1:DF:69:56:1E:3D:C6:32:5C
                -----BEGIN CERTIFICATE-----
                MIIDtzCCAp+gAwIBAgIQDOfg5RfYRv6P5WD8G/AwOTANBgkqhkiG9w0BAQUFADBl
                MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
                d3cuZGlnaWNlcnQuY29tMSQwIgYDVQQDExtEaWdpQ2VydCBBc3N1cmVkIElEIFJv
                b3QgQ0EwHhcNMDYxMTEwMDAwMDAwWhcNMzExMTEwMDAwMDAwWjBlMQswCQYDVQQG
                EwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cuZGlnaWNl
                cnQuY29tMSQwIgYDVQQDExtEaWdpQ2VydCBBc3N1cmVkIElEIFJvb3QgQ0EwggEi
                MA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCtDhXO5EOAXLGH87dg+XESpa7c
                JpSIqvTO9SA5KFhgDPiA2qkVlTJhPLWxKISKityfCgyDF3qPkKyK53lTXDGEKvYP
                mDI2dsze3Tyoou9q+yHyUmHfnyDXH+Kx2f4YZNISW1/5WBg1vEfNoTb5a3/UsDg+
                wRvDjDPZ2C8Y/igPs6eD1sNuRMBhNZYW/lmci3Zt1/GiSw0r/wty2p5g0I6QNcZ4
                VYcgoc/lbQrISXwxmDNsIumH0DJaoroTghHtORedmTpyoeb6pNnVFzF1roV9Iq4/
                AUaG9ih5yLHa5FcXxH4cDrC0kqZWs72yl+2qp/C3xag/lRbQ/6GW6whfGHdPAgMB
                AAGjYzBhMA4GA1UdDwEB/wQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB0GA1UdDgQW
                BBRF66Kv9JLLgjEtUYunpyGd823IDzAfBgNVHSMEGDAWgBRF66Kv9JLLgjEtUYun
                pyGd823IDzANBgkqhkiG9w0BAQUFAAOCAQEAog683+Lt8ONyc3pklL/3cmbYMuRC
                dWKuh+vy1dneVrOfzM4UKLkNl2BcEkxY5NM9g0lFWJc1aRqoR+pWxnmrEthngYTf
                fwk8lOa4JiwgvT2zKIn3X/8i4peEH+ll74fg38FnSbNd67IJKusm7Xi+fT8r87cm
                NW1fiQG2SVufAQWbqz0lwcy2f8Lxb4bG+mRo64EtlOtCt/qMHt1i8b5QZ7dsvfPx
                H2sMNgcWfzd8qVttevESRmCD1ycEvkvOl77DZypoEd+A5wwzZr8TDRRu838fYxAe
                +o0bJW1sj6W3YQGx0qMmoRBxna3iw/nDmVG3KwcIzi7mULKn+gpFL6Lw8g==
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Assured ID Root G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0b:93:1c:3a:d6:39:67:ea:67:23:bf:c3:af:9a:f4:4b
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Aug  1 12:00:00 2013 GMT
                            Not After : Jan 15 12:00:00 2038 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Assured ID Root G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                CE:C3:4A:B9:99:55:F2:B8:DB:60:BF:A9:7E:BD:56:B5:97:36:A7:D6
                SHA1 Fingerprint=A1:4B:48:D9:43:EE:0A:0E:40:90:4F:3C:E0:A4:C0:91:93:51:5D:3F
                SHA256 Fingerprint=7D:05:EB:B6:82:33:9F:8C:94:51:EE:09:4E:EB:FE:FA:79:53:A1:14:ED:B2:F4:49:49:45:2F:AB:7D:2F:C1:85
                -----BEGIN CERTIFICATE-----
                MIIDljCCAn6gAwIBAgIQC5McOtY5Z+pnI7/Dr5r0SzANBgkqhkiG9w0BAQsFADBl
                MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
                d3cuZGlnaWNlcnQuY29tMSQwIgYDVQQDExtEaWdpQ2VydCBBc3N1cmVkIElEIFJv
                b3QgRzIwHhcNMTMwODAxMTIwMDAwWhcNMzgwMTE1MTIwMDAwWjBlMQswCQYDVQQG
                EwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cuZGlnaWNl
                cnQuY29tMSQwIgYDVQQDExtEaWdpQ2VydCBBc3N1cmVkIElEIFJvb3QgRzIwggEi
                MA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDZ5ygvUj82ckmIkzTz+GoeMVSA
                n61UQbVH35ao1K+ALbkKz3X9iaV9JPrjIgwrvJUXCzO/GU1BBpAAvQxNEP4Htecc
                biJVMWWXvdMX0h5i89vqbFCMP4QMls+3ywPgym2hFEwbid3tALBSfK+RbLE4E9Hp
                EgjAALAcKxHad3A2m67OeYfcgnDmCXRwVWmvo2ifv922ebPynXApVfSr/5Vh88lA
                bx3RvpO704gqu52/clpWcTs/1PPRCv4o76Pu2ZmvA9OPYLfykqGxvYmJHzDNw6Yu
                YjOuFgJ3RFrngQo8p0Quebg/BLxcoIfhG69Rjs3sLPr4/m3wOnyqi+RnlTGNAgMB
                AAGjQjBAMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgGGMB0GA1UdDgQW
                BBTOw0q5mVXyuNtgv6l+vVa1lzan1jANBgkqhkiG9w0BAQsFAAOCAQEAyqVVjOPI
                QW5pJ6d1Ee88hjZv0p3GeDgdaZaikmkuOGybfQTUiaWxMTeKySHMq2zNixya1r9I
                0jJmwYrA8y8678Dj1JGG0VDjA9tzd29KOVPt3ibHtX2vK0LRdWLjSisCx1BL4Gni
                lmwORGYQRI+tBev4eaymG+g3NJ1TyWGqolKvSnAWhsI6yLETcDbYz+70CjTVW0z9
                B5yiutkBclzzTcHdDrEcDcRjvq30FPuJ7KJBDkzMyFdA0G4Dqs0MjomZmWzwPDCv
                ON9vvKO+KSAnq3T/EyJ43pdSVR6DtVQgA+6uwE9W3jfMw3+qBCe703e4YtsXfJwo
                IhNzbM8m9Yop5w==
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Assured ID Root G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0b:a1:5a:fa:1d:df:a0:b5:49:44:af:cd:24:a0:6c:ec
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Aug  1 12:00:00 2013 GMT
                            Not After : Jan 15 12:00:00 2038 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Assured ID Root G3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                CB:D0:BD:A9:E1:98:05:51:A1:4D:37:A2:83:79:CE:8D:1D:2A:E4:84
                SHA1 Fingerprint=F5:17:A2:4F:9A:48:C6:C9:F8:A2:00:26:9F:DC:0F:48:2C:AB:30:89
                SHA256 Fingerprint=7E:37:CB:8B:4C:47:09:0C:AB:36:55:1B:A6:F4:5D:B8:40:68:0F:BA:16:6A:95:2D:B1:00:71:7F:43:05:3F:C2
                -----BEGIN CERTIFICATE-----
                MIICRjCCAc2gAwIBAgIQC6Fa+h3foLVJRK/NJKBs7DAKBggqhkjOPQQDAzBlMQsw
                CQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cu
                ZGlnaWNlcnQuY29tMSQwIgYDVQQDExtEaWdpQ2VydCBBc3N1cmVkIElEIFJvb3Qg
                RzMwHhcNMTMwODAxMTIwMDAwWhcNMzgwMTE1MTIwMDAwWjBlMQswCQYDVQQGEwJV
                UzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cuZGlnaWNlcnQu
                Y29tMSQwIgYDVQQDExtEaWdpQ2VydCBBc3N1cmVkIElEIFJvb3QgRzMwdjAQBgcq
                hkjOPQIBBgUrgQQAIgNiAAQZ57ysRGXtzbg/WPuNsVepRC0FFfLvC/8QdJ+1YlJf
                Zn4f5dwbRXkLzMZTCp2NXQLZqVneAlr2lSoOjThKiknGvMYDOAdfVdp+CW7if17Q
                RSAPWXYQ1qAk8C3eNvJsKTmjQjBAMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/
                BAQDAgGGMB0GA1UdDgQWBBTL0L2p4ZgFUaFNN6KDec6NHSrkhDAKBggqhkjOPQQD
                AwNnADBkAjAlpIFFAmsSS3V0T8gj43DydXLefInwz5FyYZ5eEJJZVrmDxxDnOOlY
                JjZ91eQ0hjkCMHw2U/Aw5WJjOpnitqM7mzT6HtoQknFekROn3aRukswy1vUhZscv
                6pZjamVFkpUBtA==
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Global Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            08:3b:e0:56:90:42:46:b1:a1:75:6a:c9:59:91:c7:4a
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov 10 00:00:00 2006 GMT
                            Not After : Nov 10 00:00:00 2031 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Global Root CA
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                03:DE:50:35:56:D1:4C:BB:66:F0:A3:E2:1B:1B:C3:97:B2:3D:D1:55
                            X509v3 Authority Key Identifier:
                                keyid:03:DE:50:35:56:D1:4C:BB:66:F0:A3:E2:1B:1B:C3:97:B2:3D:D1:55

                SHA1 Fingerprint=A8:98:5D:3A:65:E5:E5:C4:B2:D7:D6:6D:40:C6:DD:2F:B1:9C:54:36
                SHA256 Fingerprint=43:48:A0:E9:44:4C:78:CB:26:5E:05:8D:5E:89:44:B4:D8:4F:96:62:BD:26:DB:25:7F:89:34:A4:43:C7:01:61
                -----BEGIN CERTIFICATE-----
                MIIDrzCCApegAwIBAgIQCDvgVpBCRrGhdWrJWZHHSjANBgkqhkiG9w0BAQUFADBh
                MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
                d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBD
                QTAeFw0wNjExMTAwMDAwMDBaFw0zMTExMTAwMDAwMDBaMGExCzAJBgNVBAYTAlVT
                MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j
                b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IENBMIIBIjANBgkqhkiG
                9w0BAQEFAAOCAQ8AMIIBCgKCAQEA4jvhEXLeqKTTo1eqUKKPC3eQyaKl7hLOllsB
                CSDMAZOnTjC3U/dDxGkAV53ijSLdhwZAAIEJzs4bg7/fzTtxRuLWZscFs3YnFo97
                nh6Vfe63SKMI2tavegw5BmV/Sl0fvBf4q77uKNd0f3p4mVmFaG5cIzJLv07A6Fpt
                43C/dxC//AH2hdmoRBBYMql1GNXRor5H4idq9Joz+EkIYIvUX7Q6hL+hqkpMfT7P
                T19sdl6gSzeRntwi5m3OFBqOasv+zbMUZBfHWymeMr/y7vrTC0LUq7dBMtoM1O/4
                gdW7jVg/tRvoSSiicNoxBN33shbyTApOB6jtSj1etX+jkMOvJwIDAQABo2MwYTAO
                BgNVHQ8BAf8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUA95QNVbR
                TLtm8KPiGxvDl7I90VUwHwYDVR0jBBgwFoAUA95QNVbRTLtm8KPiGxvDl7I90VUw
                DQYJKoZIhvcNAQEFBQADggEBAMucN6pIExIK+t1EnE9SsPTfrgT1eXkIoyQY/Esr
                hMAtudXH/vTBH1jLuG2cenTnmCmrEbXjcKChzUyImZOMkXDiqw8cvpOp/2PV5Adg
                06O/nVsJ8dWO41P0jmP6P6fbtGbfYmbW0W5BjfIttep3Sp+dWOIrWcBAI+0tKIJF
                PnlUkiaY4IBIqDfv8NZ5YBberOgOzW6sRBc4L0na4UU+Krk2U886UAb3LujEV0ls
                YSEY1QSteDwsOoBrp+uvFRTp2InBuThs4pFsiv9kuXclVzDAGySj4dzp30d8tbQk
                CAUw7C29C79Fv1C5qfPrmAESrciIxpg0X40KPMbp1ZWVbd4=
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Global Root G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            03:3a:f1:e6:a7:11:a9:a0:bb:28:64:b1:1d:09:fa:e5
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Aug  1 12:00:00 2013 GMT
                            Not After : Jan 15 12:00:00 2038 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Global Root G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                4E:22:54:20:18:95:E6:E3:6E:E6:0F:FA:FA:B9:12:ED:06:17:8F:39
                SHA1 Fingerprint=DF:3C:24:F9:BF:D6:66:76:1B:26:80:73:FE:06:D1:CC:8D:4F:82:A4
                SHA256 Fingerprint=CB:3C:CB:B7:60:31:E5:E0:13:8F:8D:D3:9A:23:F9:DE:47:FF:C3:5E:43:C1:14:4C:EA:27:D4:6A:5A:B1:CB:5F
                -----BEGIN CERTIFICATE-----
                MIIDjjCCAnagAwIBAgIQAzrx5qcRqaC7KGSxHQn65TANBgkqhkiG9w0BAQsFADBh
                MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
                d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBH
                MjAeFw0xMzA4MDExMjAwMDBaFw0zODAxMTUxMjAwMDBaMGExCzAJBgNVBAYTAlVT
                MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j
                b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IEcyMIIBIjANBgkqhkiG
                9w0BAQEFAAOCAQ8AMIIBCgKCAQEAuzfNNNx7a8myaJCtSnX/RrohCgiN9RlUyfuI
                2/Ou8jqJkTx65qsGGmvPrC3oXgkkRLpimn7Wo6h+4FR1IAWsULecYxpsMNzaHxmx
                1x7e/dfgy5SDN67sH0NO3Xss0r0upS/kqbitOtSZpLYl6ZtrAGCSYP9PIUkY92eQ
                q2EGnI/yuum06ZIya7XzV+hdG82MHauVBJVJ8zUtluNJbd134/tJS7SsVQepj5Wz
                tCO7TG1F8PapspUwtP1MVYwnSlcUfIKdzXOS0xZKBgyMUNGPHgm+F6HmIcr9g+UQ
                vIOlCsRnKPZzFBQ9RnbDhxSJITRNrw9FDKZJobq7nMWxM4MphQIDAQABo0IwQDAP
                BgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBhjAdBgNVHQ4EFgQUTiJUIBiV
                5uNu5g/6+rkS7QYXjzkwDQYJKoZIhvcNAQELBQADggEBAGBnKJRvDkhj6zHd6mcY
                1Yl9PMWLSn/pvtsrF9+wX3N3KjITOYFnQoQj8kVnNeyIv/iPsGEMNKSuIEyExtv4
                NeF22d+mQrvHRAiGfzZ0JFrabA0UWTW98kndth/Jsw1HKj2ZL7tcu7XUIOGZX1NG
                Fdtom/DzMNU+MeKNhJ7jitralj41E6Vf8PlwUHBHQRFXGU7Aj64GxJUTFy8bJZ91
                8rGOmaFvE7FBcf6IKshPECBV1/MUReXgRPTqh5Uykw7+U0b6LJ3/iyK5S9kJRaTe
                pLiaWN0bfVKfjllDiIGknibVb63dDcY3fe0Dkhvld1927jyNxF1WW6LZZm6zNTfl
                MrY=
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Global Root G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            05:55:56:bc:f2:5e:a4:35:35:c3:a4:0f:d5:ab:45:72
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Aug  1 12:00:00 2013 GMT
                            Not After : Jan 15 12:00:00 2038 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Global Root G3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                B3:DB:48:A4:F9:A1:C5:D8:AE:36:41:CC:11:63:69:62:29:BC:4B:C6
                SHA1 Fingerprint=7E:04:DE:89:6A:3E:66:6D:00:E6:87:D3:3F:FA:D9:3B:E8:3D:34:9E
                SHA256 Fingerprint=31:AD:66:48:F8:10:41:38:C7:38:F3:9E:A4:32:01:33:39:3E:3A:18:CC:02:29:6E:F9:7C:2A:C9:EF:67:31:D0
                -----BEGIN CERTIFICATE-----
                MIICPzCCAcWgAwIBAgIQBVVWvPJepDU1w6QP1atFcjAKBggqhkjOPQQDAzBhMQsw
                CQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cu
                ZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBHMzAe
                Fw0xMzA4MDExMjAwMDBaFw0zODAxMTUxMjAwMDBaMGExCzAJBgNVBAYTAlVTMRUw
                EwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5jb20x
                IDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IEczMHYwEAYHKoZIzj0CAQYF
                K4EEACIDYgAE3afZu4q4C/sLfyHS8L6+c/MzXRq8NOrexpu80JX28MzQC7phW1FG
                fp4tn+6OYwwX7Adw9c+ELkCDnOg/QW07rdOkFFk2eJ0DQ+4QE2xy3q6Ip6FrtUPO
                Z9wj/wMco+I+o0IwQDAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBhjAd
                BgNVHQ4EFgQUs9tIpPmhxdiuNkHMEWNpYim8S8YwCgYIKoZIzj0EAwMDaAAwZQIx
                AK288mw/EkrRLTnDCgmXc/SINoyIJ7vmiI1Qhadj+Z4y3maTD/HMsQmP3Wyr+mt/
                oAIwOWZbwmSNuJ5Q3KjVSaLtx9zRSX8XAbjIho9OjIgrqJqpisXRAL34VOKa5Vt8
                sycX
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert High Assurance EV Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            02:ac:5c:26:6a:0b:40:9b:8f:0b:79:f2:ae:46:25:77
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov 10 00:00:00 2006 GMT
                            Not After : Nov 10 00:00:00 2031 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert High Assurance EV Root CA
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                B1:3E:C3:69:03:F8:BF:47:01:D4:98:26:1A:08:02:EF:63:64:2B:C3
                            X509v3 Authority Key Identifier:
                                keyid:B1:3E:C3:69:03:F8:BF:47:01:D4:98:26:1A:08:02:EF:63:64:2B:C3

                SHA1 Fingerprint=5F:B7:EE:06:33:E2:59:DB:AD:0C:4C:9A:E6:D3:8F:1A:61:C7:DC:25
                SHA256 Fingerprint=74:31:E5:F4:C3:C1:CE:46:90:77:4F:0B:61:E0:54:40:88:3B:A9:A0:1E:D0:0B:A6:AB:D7:80:6E:D3:B1:18:CF
                -----BEGIN CERTIFICATE-----
                MIIDxTCCAq2gAwIBAgIQAqxcJmoLQJuPC3nyrkYldzANBgkqhkiG9w0BAQUFADBs
                MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
                d3cuZGlnaWNlcnQuY29tMSswKQYDVQQDEyJEaWdpQ2VydCBIaWdoIEFzc3VyYW5j
                ZSBFViBSb290IENBMB4XDTA2MTExMDAwMDAwMFoXDTMxMTExMDAwMDAwMFowbDEL
                MAkGA1UEBhMCVVMxFTATBgNVBAoTDERpZ2lDZXJ0IEluYzEZMBcGA1UECxMQd3d3
                LmRpZ2ljZXJ0LmNvbTErMCkGA1UEAxMiRGlnaUNlcnQgSGlnaCBBc3N1cmFuY2Ug
                RVYgUm9vdCBDQTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMbM5XPm
                +9S75S0tMqbf5YE/yc0lSbZxKsPVlDRnogocsF9ppkCxxLeyj9CYpKlBWTrT3JTW
                PNt0OKRKzE0lgvdKpVMSOO7zSW1xkX5jtqumX8OkhPhPYlG++MXs2ziS4wblCJEM
                xChBVfvLWokVfnHoNb9Ncgk9vjo4UFt3MRuNs8ckRZqnrG0AFFoEt7oT61EKmEFB
                Ik5lYYeBQVCmeVyJ3hlKV9Uu5l0cUyx+mM0aBhakaHPQNAQTXKFx01p8VdteZOE3
                hzBWBOURtCmAEvF5OYiiAhF8J2a3iLd48soKqDirCmTCv2ZdlYTBoSUeh10aUAsg
                EsxBu24LUTi4S8sCAwEAAaNjMGEwDgYDVR0PAQH/BAQDAgGGMA8GA1UdEwEB/wQF
                MAMBAf8wHQYDVR0OBBYEFLE+w2kD+L9HAdSYJhoIAu9jZCvDMB8GA1UdIwQYMBaA
                FLE+w2kD+L9HAdSYJhoIAu9jZCvDMA0GCSqGSIb3DQEBBQUAA4IBAQAcGgaX3Nec
                nzyIZgYIVyHbIUf4KmeqvxgydkAQV8GK83rZEWWONfqe/EW1ntlMMUu4kehDLI6z
                eM7b41N5cdblIZQB2lWHmiRk9opmzN6cN82oNLFpmyPInngiK3BD41VHMWEZ71jF
                hS9OMPagMRYjyOfiZRYzy78aG6A9+MpeizGLYAiJLQwGXFK3xPkKmNEVX58Svnw2
                Yzi9RKR/5CYrCsSXaQ3pjOLAEFe4yHYSkVXySGnYvCoCWw9E1CAx2/S6cCZdkGCe
                vEsXCS+0yx5DaMkHJ8HSXPfqIbloEpw8nL+e/IBcm2PN7EeqJSdnoDfzAIJ9VNep
                +OkuE6N36B9K
                -----END CERTIFICATE-----
                === /C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert Trusted Root G4
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            05:9b:1b:57:9e:8e:21:32:e2:39:07:bd:a7:77:75:5c
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Aug  1 12:00:00 2013 GMT
                            Not After : Jan 15 12:00:00 2038 GMT
                        Subject: C=US, O=DigiCert Inc, OU=www.digicert.com, CN=DigiCert Trusted Root G4
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                EC:D7:E3:82:D2:71:5D:64:4C:DF:2E:67:3F:E7:BA:98:AE:1C:0F:4F
                SHA1 Fingerprint=DD:FB:16:CD:49:31:C9:73:A2:03:7D:3F:C8:3A:4D:7D:77:5D:05:E4
                SHA256 Fingerprint=55:2F:7B:DC:F1:A7:AF:9E:6C:E6:72:01:7F:4F:12:AB:F7:72:40:C7:8E:76:1A:C2:03:D1:D9:D2:0A:C8:99:88
                -----BEGIN CERTIFICATE-----
                MIIFkDCCA3igAwIBAgIQBZsbV56OITLiOQe9p3d1XDANBgkqhkiG9w0BAQwFADBi
                MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
                d3cuZGlnaWNlcnQuY29tMSEwHwYDVQQDExhEaWdpQ2VydCBUcnVzdGVkIFJvb3Qg
                RzQwHhcNMTMwODAxMTIwMDAwWhcNMzgwMTE1MTIwMDAwWjBiMQswCQYDVQQGEwJV
                UzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3d3cuZGlnaWNlcnQu
                Y29tMSEwHwYDVQQDExhEaWdpQ2VydCBUcnVzdGVkIFJvb3QgRzQwggIiMA0GCSqG
                SIb3DQEBAQUAA4ICDwAwggIKAoICAQC/5pBzaN675F1KPDAiMGkz7MKnJS7JIT3y
                ithZwuEppz1Yq3aaza57G4QNxDAf8xukOBbrVsaXbR2rsnnyyhHS5F/WBTxSD1If
                xp4VpX6+n6lXFllVcq9ok3DCsrp1mWpzMpTREEQQLt+C8weE5nQ7bXHiLQwb7iDV
                ySAdYyktzuxeTsiT+CFhmzTrBcZe7FsavOvJz82sNEBfsXpm7nfISKhmV1efVFiO
                DCu3T6cw2Vbuyntd463JT17lNecxy9qTXtyOj4DatpGYQJB5w3jHtrHEtWoYOAMQ
                jdjUN6QuBX2I9YI+EJFwq1WCQTLX2wRzKm6RAXwhTNS8rhsDdV14Ztk6MUSaM0C/
                CNdaSaTC5qmgZ92kJ7yhTzm1EVgX9yRcRo9k98FpiHaYdj1ZXUJ2h4mXaXpI8OCi
                EhtmmnTK3kse5w5jrubU75KSOp493ADkRSWJtppEGSt+wJS00mFt6zPZxd9LBADM
                fRyVw4/3IbKyEbe7f/LVjHAsQWCqsWMYRJUadmJ+9oCw++hkpjPRiQfhvbfmQ6QY
                uKZ3AeEPlAwhHbJUKSWJbOUOUlFHdL4mrLZBdd56rF+NP8m800ERElvlEFDrMcXK
                chYiCd98THU/Y+whX8QgUWtvsauGi0/C1kVfnSD8oR7FwI+isX4KJpn15GkvmB0t
                9dmpsh3lGwIDAQABo0IwQDAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIB
                hjAdBgNVHQ4EFgQU7NfjgtJxXWRM3y5nP+e6mK4cD08wDQYJKoZIhvcNAQEMBQAD
                ggIBALth2X2pbL4XxJEbw6GiAI3jZGgPVs93rnD5/ZpKmbnJeFwMDF/k5hQpVgs2
                SV1EY+CtnJYYZhsjDT156W1r1lT40jzBQ0CuHVD1UvyQO7uYmWlrx8GnqGikJ9yd
                +SeuMIW59mdNOj6PWTkiU0TryF0Dyu1Qen1iIQqAyHNm0aAFYF/opbSnr6j3bTWc
                fFqK1qI4mfN4i/RN0iAL3gTujJtHgXINwBQy7zBZLq7gcfJW5GqXb5JQbZaNaHqa
                sjYUegbyJLkJEVDXCLG4iXqEI2FCKeWjzaIgQdfRnGTZ6iahixTXTBmyUEFxPT9N
                cCOGDErcgdLMMpSEDQgJlxxPwO5rIHQw0uA5NBCFIRUBCOhVMt5xSdkoF1BN5r5N
                0XWs0Mr7QbhDparTwwVETyw2m+L64kW4I1NsBm9nVX9GtUw/bihaeSbSpKhil9Ie
                4u1Ki7wb/UdKDd9nZn6yW0HQO+T0O/QEY+nvwlQAUaCKKsnOeMzV6ocEGLPOr0mI
                r/OSmbaz5mEP0oUA51Aa5BuVnRmhuZyxm7EAHu/QD09CbMkKvO5D+jpxpchNJqU1
                /YldvIViHTLSoCtU7ZpXwdv6EM8Zt4tKG48BtieVU+i2iW1bvGjUI+iLUaJW+fCm
                gKDWHrO8Dw9TdSmq6hN35N6MgSGtBxBHEa2HPQfRdbzP82Z+
                -----END CERTIFICATE-----

                ### Digital Signature Trust Co.

                === /O=Digital Signature Trust Co./CN=DST Root CA X3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            44:af:b0:80:d6:a3:27:ba:89:30:39:86:2e:f8:40:6b
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Sep 30 21:12:19 2000 GMT
                            Not After : Sep 30 14:01:15 2021 GMT
                        Subject: O=Digital Signature Trust Co., CN=DST Root CA X3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                C4:A7:B1:A4:7B:2C:71:FA:DB:E1:4B:90:75:FF:C4:15:60:85:89:10
                SHA1 Fingerprint=DA:C9:02:4F:54:D8:F6:DF:94:93:5F:B1:73:26:38:CA:6A:D7:7C:13
                SHA256 Fingerprint=06:87:26:03:31:A7:24:03:D9:09:F1:05:E6:9B:CF:0D:32:E1:BD:24:93:FF:C6:D9:20:6D:11:BC:D6:77:07:39
                -----BEGIN CERTIFICATE-----
                MIIDSjCCAjKgAwIBAgIQRK+wgNajJ7qJMDmGLvhAazANBgkqhkiG9w0BAQUFADA/
                MSQwIgYDVQQKExtEaWdpdGFsIFNpZ25hdHVyZSBUcnVzdCBDby4xFzAVBgNVBAMT
                DkRTVCBSb290IENBIFgzMB4XDTAwMDkzMDIxMTIxOVoXDTIxMDkzMDE0MDExNVow
                PzEkMCIGA1UEChMbRGlnaXRhbCBTaWduYXR1cmUgVHJ1c3QgQ28uMRcwFQYDVQQD
                Ew5EU1QgUm9vdCBDQSBYMzCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEB
                AN+v6ZdQCINXtMxiZfaQguzH0yxrMMpb7NnDfcdAwRgUi+DoM3ZJKuM/IUmTrE4O
                rz5Iy2Xu/NMhD2XSKtkyj4zl93ewEnu1lcCJo6m67XMuegwGMoOifooUMM0RoOEq
                OLl5CjH9UL2AZd+3UWODyOKIYepLYYHsUmu5ouJLGiifSKOeDNoJjj4XLh7dIN9b
                xiqKqy69cK3FCxolkHRyxXtqqzTWMIn/5WgTe1QLyNau7Fqckh49ZLOMxt+/yUFw
                7BZy1SbsOFU5Q9D8/RhcQPGX69Wam40dutolucbY38EVAjqr2m7xPi71XAicPNaD
                aeQQmxkqtilX4+U9m5/wAl0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNV
                HQ8BAf8EBAMCAQYwHQYDVR0OBBYEFMSnsaR7LHH62+FLkHX/xBVghYkQMA0GCSqG
                SIb3DQEBBQUAA4IBAQCjGiybFwBcqR7uKGY3Or+Dxz9LwwmglSBd49lZRNI+DT69
                ikugdB/OEIKcdBodfpga3csTS7MgROSR6cz8faXbauX+5v3gTt23ADq1cEmv8uXr
                AvHRAosZy5Q6XkjEGB5YGV8eAlrwDPGxrancWYaLbumR9YbK+rlmM6pZW87ipxZz
                R8srzJmwN0jP41ZL9c8PDHIyh8bwRLtTcm1D9SZImlJnt1ir/md2cXjbDaJWFBM5
                JDGFoqgCWjBH4d1QB7wCCZAA62RjYJsWvIjJEubSfZGL+T0yjWW06XyxV3bqxbYo
                Ob8VZRzI9neWagqNdwvYkQsEjgfbKbYK7p2CNTUQ
                -----END CERTIFICATE-----

                ### Disig a.s.

                === /C=SK/L=Bratislava/O=Disig a.s./CN=CA Disig Root R2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            92:b8:88:db:b0:8a:c1:63
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jul 19 09:15:30 2012 GMT
                            Not After : Jul 19 09:15:30 2042 GMT
                        Subject: C=SK, L=Bratislava, O=Disig a.s., CN=CA Disig Root R2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                B5:99:F8:AF:B0:94:F5:E3:20:D6:0A:AD:CE:4E:56:A4:2E:6E:42:ED
                SHA1 Fingerprint=B5:61:EB:EA:A4:DE:E4:25:4B:69:1A:98:A5:57:47:C2:34:C7:D9:71
                SHA256 Fingerprint=E2:3D:4A:03:6D:7B:70:E9:F5:95:B1:42:20:79:D2:B9:1E:DF:BB:1F:B6:51:A0:63:3E:AA:8A:9D:C5:F8:07:03
                -----BEGIN CERTIFICATE-----
                MIIFaTCCA1GgAwIBAgIJAJK4iNuwisFjMA0GCSqGSIb3DQEBCwUAMFIxCzAJBgNV
                BAYTAlNLMRMwEQYDVQQHEwpCcmF0aXNsYXZhMRMwEQYDVQQKEwpEaXNpZyBhLnMu
                MRkwFwYDVQQDExBDQSBEaXNpZyBSb290IFIyMB4XDTEyMDcxOTA5MTUzMFoXDTQy
                MDcxOTA5MTUzMFowUjELMAkGA1UEBhMCU0sxEzARBgNVBAcTCkJyYXRpc2xhdmEx
                EzARBgNVBAoTCkRpc2lnIGEucy4xGTAXBgNVBAMTEENBIERpc2lnIFJvb3QgUjIw
                ggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQCio8QACdaFXS1tFPbCw3Oe
                NcJxVX6B+6tGUODBfEl45qt5WDza/3wcn9iXAng+a0EE6UG9vgMsRfYvZNSrXaNH
                PWSb6WiaxswbP7q+sos0Ai6YVRn8jG+qX9pMzk0DIaPY0jSTVpbLTAwAFjxfGs3I
                x2ymrdMxp7zo5eFm1tL7A7RBZckQrg4FY8aAamkw/dLukO8NJ9+flXP04SXabBbe
                QTg06ov80egEFGEtQX6sx3dOy1FU+16SGBsEWmjGycT6txOgmLcRK7fWV8x8nhfR
                yyX+hk4kLlYMeE2eARKmK6cBZW58Yh2EhN/qwGu1pSqVg8NTEQxzHQuyRpDRQjrO
                QG6Vrf/GlK1ul4SOfW+eioANSW1z4nuSHsPzwfPrLgVv2RvPN3YEyLRa5Beny912
                H9AZdugsBbPWnDTYltxhh5EF5EQIM8HauQhl1K6yNg3ruji6DOWbnuuNZt2Zz9aJ
                QfYEkoopKW1rOhzndX0CcQ7zwOe9yxndnWCywmZgtrEE7snmhrmaZkCo5xHtgUUD
                i/ZnWejBBhG93c+AAk9lQHhcR1DIm+YfgXvkRKhbhZri3lrVx/k6RGZL5DJUfORs
                nLMOPReisjQS1n6yqEm70XooQL6iFh/f5DcfEXP7kAplQ6INfPgGAVUzfbANuPT1
                rqVCV3w2EYx7XsQDnYx5nQIDAQABo0IwQDAPBgNVHRMBAf8EBTADAQH/MA4GA1Ud
                DwEB/wQEAwIBBjAdBgNVHQ4EFgQUtZn4r7CU9eMg1gqtzk5WpC5uQu0wDQYJKoZI
                hvcNAQELBQADggIBACYGXnDnZTPIgm7ZnBc6G3pmsgH2eDtpXi/q/075KMOYKmFM
                tCQSin1tERT3nLXK5ryeJ45MGcipvXrA1zYObYVybqjGom32+nNjf7xueQgcnYqf
                GopTpti72TVVsRHFqQOzVju5hJMiXn7B9hJSi+osZ7z+Nkz1uM/Rs0mSO9MpDpkb
                lvdhuDvEK7Z4bLQjb/D907JedR+Zlais9trhxTF7+9FGs9K8Z7RiVLoJ92Owk6Ka
                +elSLotgEqv89WBW7xBci8QaQtyDW2QOy7W81k/BfDxujRNt+3vrMNDcTa/F1bal
                TFtxyegxvug4BkihGuLq0t4SOVga/4AOgnXmt8kHbA7v/zjxmHHEt38OFdAlab0i
                nSvtBfZGR6ztwPDUO+Ls7pZbkBNOHlY667DvlruWIxG68kOGdGSVyCh13x01utI3
                gzhTODY7z2zp+WsO0PsE6E9312UBeIYMej4hYvF/Y3EMyZ9E26gnonW+boE+18Dr
                G5gPcFw0sorMwIUY6256s/daoQe/qUKS82Ail+QUoQebTnbAjn39pCXHR+3/H3Os
                zMOl6W8KjptlwlCFtaOgUxLMVYdh84GuEEZhvUQhuMI9dM9+JDX6HAcOmz0iyu8x
                L4ysEr3vQCj8KWefshNPZiTEUxnpHikV7+ZtsH8tZ/3zbBt1RqPlShfppNcL
                -----END CERTIFICATE-----

                ### E-Tu\U011Fra EBG Bili\U015Fim Teknolojileri ve Hizmetleri A.\U015E.

                === /C=TR/L=Ankara/O=E-Tu\xC4\x9Fra EBG Bili\xC5\x9Fim Teknolojileri ve Hizmetleri A.\xC5\x9E./OU=E-Tugra Sertifikasyon Merkezi/CN=E-Tugra Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 7667447206703254355 (0x6a683e9c519bcb53)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Mar  5 12:09:48 2013 GMT
                            Not After : Mar  3 12:09:48 2023 GMT
                        Subject: C=TR, L=Ankara, O=E-Tu\xC4\x9Fra EBG Bili\xC5\x9Fim Teknolojileri ve Hizmetleri A.\xC5\x9E., OU=E-Tugra Sertifikasyon Merkezi, CN=E-Tugra Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                2E:E3:DB:B2:49:D0:9C:54:79:5C:FA:27:2A:FE:CC:4E:D2:E8:4E:54
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:2E:E3:DB:B2:49:D0:9C:54:79:5C:FA:27:2A:FE:CC:4E:D2:E8:4E:54

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=51:C6:E7:08:49:06:6E:F3:92:D4:5C:A0:0D:6D:A3:62:8F:C3:52:39
                SHA256 Fingerprint=B0:BF:D5:2B:B0:D7:D9:BD:92:BF:5D:4D:C1:3D:A2:55:C0:2C:54:2F:37:83:65:EA:89:39:11:F5:5E:55:F2:3C
                -----BEGIN CERTIFICATE-----
                MIIGSzCCBDOgAwIBAgIIamg+nFGby1MwDQYJKoZIhvcNAQELBQAwgbIxCzAJBgNV
                BAYTAlRSMQ8wDQYDVQQHDAZBbmthcmExQDA+BgNVBAoMN0UtVHXEn3JhIEVCRyBC
                aWxpxZ9pbSBUZWtub2xvamlsZXJpIHZlIEhpem1ldGxlcmkgQS7Fni4xJjAkBgNV
                BAsMHUUtVHVncmEgU2VydGlmaWthc3lvbiBNZXJrZXppMSgwJgYDVQQDDB9FLVR1
                Z3JhIENlcnRpZmljYXRpb24gQXV0aG9yaXR5MB4XDTEzMDMwNTEyMDk0OFoXDTIz
                MDMwMzEyMDk0OFowgbIxCzAJBgNVBAYTAlRSMQ8wDQYDVQQHDAZBbmthcmExQDA+
                BgNVBAoMN0UtVHXEn3JhIEVCRyBCaWxpxZ9pbSBUZWtub2xvamlsZXJpIHZlIEhp
                em1ldGxlcmkgQS7Fni4xJjAkBgNVBAsMHUUtVHVncmEgU2VydGlmaWthc3lvbiBN
                ZXJrZXppMSgwJgYDVQQDDB9FLVR1Z3JhIENlcnRpZmljYXRpb24gQXV0aG9yaXR5
                MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA4vU/kwVRHoViVF56C/UY
                B4Oufq9899SKa6VjQzm5S/fDxmSJPZQuVIBSOTkHS0vdhQd2h8y/L5VMzH2nPbxH
                D5hw+IyFHnSOkm0bQNGZDbt1bsipa5rAhDGvykPL6ys06I+XawGb1Q5KCKpbknSF
                Q9OArqGIW66z6l7LFpp3RMih9lRozt6Plyu6W0ACDGQXwLWTzeHxE2bODHnv0ZEo
                q1+gElIwcxmOj+GMB6LDu0rw6h8VqO4lzKRG+Bsi77MOQ7osJLjFLFzUHPhdZL3D
                k14opz8n8Y4e0ypQBaNV2cvnOVPAmJ6MVGKLJrD3fY185MaeZkJVgkfnsliNZvcH
                fC425lAcP9tDJMW/hkd5s3kc91r0E+xs+D/iWR+V7kI+ua2oMoVJl0b+SzGPWsut
                dEcf6ZG33ygEIqDUD13ieU/qbIWGvaimzuT6w+Gzrt48Ue7LE3wBf4QOXVGUnhMM
                ti6lTPk5cDZvlsouDERVxcr6XQKj39ZkjFqzAQqptQpHF//vkUAqjqFGOjGY5RH8
                zLtJVor8udBhmm9lbObDyz51Sf6Pp+KJxWfXnUYTTjF2OySznhFlhqt/7x3U+Lzn
                rFpct1pHXFXOVbQicVtbC/DP3KBhZOqp12gKY6fgDT+gr9Oq0n7vUaDmUStVkhUX
                U8u3Zg5mTPj5dUyQ5xJwx0UCAwEAAaNjMGEwHQYDVR0OBBYEFC7j27JJ0JxUeVz6
                Jyr+zE7S6E5UMA8GA1UdEwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAULuPbsknQnFR5
                XPonKv7MTtLoTlQwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3DQEBCwUAA4ICAQAF
                Nzr0TbdF4kV1JI+2d1LoHNgQk2Xz8lkGpD4eKexd0dCrfOAKkEh47U6YA5n+KGCR
                HTAduGN8qOY1tfrTYXbm1gdLymmasoR6d5NFFxWfJNCYExL/u6Au/U5Mh/jOXKqY
                GwXgAEZKgoClM4so3O0409/lPun++1ndYYRP0lSWE2ETPo+Aab6TR7U1Q9Jauz1c
                77NCR807VRMGsAnb/WP2OogKmW9+4c4bU2pEZiNRCHu8W1Ki/QY3OEBhj0qWuJA3
                +GbHeJAAFS6LrVE1Uweoa2iu+U48BybNCAVwzDk/dr2l02cmAYamU9JgO3xDf1WK
                vJUawSg5TB9D0pH0clmKuVb8P7Sd2nCcdlqMQ1DujjByTd//SffGqWfZbawCEeI6
                FiWnWAjLb1NBnEg4R2gz0dfHj9R0IdTDBZB6/86WiLEVKV0jq9BgoRJP3vQXzTLl
                yb/IQ639Lo7xr+L0mPoSHyDYwKcMhcWQ9DstliaxLL5Mq+ux0orJ23gTDx4JnW2P
                AJ8C2sH6H3p6CcRK5ogql5+Ji/03X186zjhZhkuvcQu02PJwT58yE+Owp1fl2tpD
                y4Q08ijE6m30Ku/Ba3ba+367hTzSU8JNvnHhRdH9I2cNE3X7z2VnIp2usAnRCf8d
                NL/+I5c30jn6PQ0GC7TbO6Orb1wdtn7os4I07QZcJA==
                -----END CERTIFICATE-----

                ### eMudhra Inc

                === /C=US/OU=emSign PKI/O=eMudhra Inc/CN=emSign ECC Root CA - C3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            7b:71:b6:82:56:b8:12:7c:9c:a8
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Feb 18 18:30:00 2018 GMT
                            Not After : Feb 18 18:30:00 2043 GMT
                        Subject: C=US, OU=emSign PKI, O=eMudhra Inc, CN=emSign ECC Root CA - C3
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                FB:5A:48:D0:80:20:40:F2:A8:E9:00:07:69:19:77:A7:E6:C3:F4:CF
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=B6:AF:43:C2:9B:81:53:7D:F6:EF:6B:C3:1F:1F:60:15:0C:EE:48:66
                SHA256 Fingerprint=BC:4D:80:9B:15:18:9D:78:DB:3E:1D:8C:F4:F9:72:6A:79:5D:A1:64:3C:A5:F1:35:8E:1D:DB:0E:DC:0D:7E:B3
                -----BEGIN CERTIFICATE-----
                MIICKzCCAbGgAwIBAgIKe3G2gla4EnycqDAKBggqhkjOPQQDAzBaMQswCQYDVQQG
                EwJVUzETMBEGA1UECxMKZW1TaWduIFBLSTEUMBIGA1UEChMLZU11ZGhyYSBJbmMx
                IDAeBgNVBAMTF2VtU2lnbiBFQ0MgUm9vdCBDQSAtIEMzMB4XDTE4MDIxODE4MzAw
                MFoXDTQzMDIxODE4MzAwMFowWjELMAkGA1UEBhMCVVMxEzARBgNVBAsTCmVtU2ln
                biBQS0kxFDASBgNVBAoTC2VNdWRocmEgSW5jMSAwHgYDVQQDExdlbVNpZ24gRUND
                IFJvb3QgQ0EgLSBDMzB2MBAGByqGSM49AgEGBSuBBAAiA2IABP2lYa57JhAd6bci
                MK4G9IGzsUJxlTm801Ljr6/58pc1kjZGDoeVjbk5Wum739D+yAdBPLtVb4Ojavti
                sIGJAnB9SMVK4+kiVCJNk7tCDK93nCOmfddhEc5lx/h//vXyqaNCMEAwHQYDVR0O
                BBYEFPtaSNCAIEDyqOkAB2kZd6fmw/TPMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMB
                Af8EBTADAQH/MAoGCCqGSM49BAMDA2gAMGUCMQC02C8Cif22TGK6Q04ThHK1rt0c
                3ta13FaPWEBaLd4gTCKDypOofu4SQMfWh0/434UCMBwUZOR8loMRnLDRWmFLpg9J
                0wD8ofzkpf9/rdcw0Md3f76BB1UwUCAU9Vc4CqgxUQ==
                -----END CERTIFICATE-----
                === /C=US/OU=emSign PKI/O=eMudhra Inc/CN=emSign Root CA - C1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            ae:cf:00:ba:c4:cf:32:f8:43:b2
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb 18 18:30:00 2018 GMT
                            Not After : Feb 18 18:30:00 2043 GMT
                        Subject: C=US, OU=emSign PKI, O=eMudhra Inc, CN=emSign Root CA - C1
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                FE:A1:E0:70:1E:2A:03:39:52:5A:42:BE:5C:91:85:7A:18:AA:4D:B5
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=E7:2E:F1:DF:FC:B2:09:28:CF:5D:D4:D5:67:37:B1:51:CB:86:4F:01
                SHA256 Fingerprint=12:56:09:AA:30:1D:A0:A2:49:B9:7A:82:39:CB:6A:34:21:6F:44:DC:AC:9F:39:54:B1:42:92:F2:E8:C8:60:8F
                -----BEGIN CERTIFICATE-----
                MIIDczCCAlugAwIBAgILAK7PALrEzzL4Q7IwDQYJKoZIhvcNAQELBQAwVjELMAkG
                A1UEBhMCVVMxEzARBgNVBAsTCmVtU2lnbiBQS0kxFDASBgNVBAoTC2VNdWRocmEg
                SW5jMRwwGgYDVQQDExNlbVNpZ24gUm9vdCBDQSAtIEMxMB4XDTE4MDIxODE4MzAw
                MFoXDTQzMDIxODE4MzAwMFowVjELMAkGA1UEBhMCVVMxEzARBgNVBAsTCmVtU2ln
                biBQS0kxFDASBgNVBAoTC2VNdWRocmEgSW5jMRwwGgYDVQQDExNlbVNpZ24gUm9v
                dCBDQSAtIEMxMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAz+upufGZ
                BczYKCFK83M0UYRWEPWgTywS4/oTmifQz/l5GnRfHXk5/Fv4cI7gklL35CX5VIPZ
                HdPIWoU/Xse2B+4+wM6ar6xWQio5JXDWv7V7Nq2s9nPczdcdioOl+yuQFTdrHCZH
                3DspVpNqs8FqOp099cGXOFgFixwR4+S0uF2FHYP+eF8LRWgYSKVGczQ7/g/IdrvH
                GPMF0Ybzhe3nudkyrVWIzqa2kbBPrH4VI5b2P/AgNBbeCsbEBEV5f6f9vtKppa+c
                xSMq9zwhbL2vj07FOrLzNBL834AaSaTUqZX3noleoomslMuoaJuvimUnzYnu3Yy1
                aylwQ6BpC+S5DwIDAQABo0IwQDAdBgNVHQ4EFgQU/qHgcB4qAzlSWkK+XJGFehiq
                TbUwDgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEL
                BQADggEBAMJKVvoVIXsoounlHfv4LcQ5lkFMOycsxGwYFYDGrK9HWS8mC+M2sO87
                /kOXSTKZEhVb3xEp/6tT+LvBeA+snFOvV71ojD1pM/CjoCNjO2RnIkSt1XHLVip4
                kqNPEjE2NuLe/gDEo2APJ62gsIq1NnpSob0n9CAnYuhNlCQT5AoE6TyrLshDCUrG
                YQTlSTR+08TI9Q/Aqum6VF7zYytPT1DU/rl7mYw9wC68AivTxEDkigcxHpvOJpkT
                +xHqmiIMERnHXhuBUDDIlhJu58tBf5E7oke3VIAb3ADMmpDqw8NQBmIMMMAVSKeo
                WXzhriKi4gp6D/piq1JM4fHfyr6DDUI=
                -----END CERTIFICATE-----

                ### eMudhra Technologies Limited

                === /C=IN/OU=emSign PKI/O=eMudhra Technologies Limited/CN=emSign ECC Root CA - G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            3c:f6:07:a9:68:70:0e:da:8b:84
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Feb 18 18:30:00 2018 GMT
                            Not After : Feb 18 18:30:00 2043 GMT
                        Subject: C=IN, OU=emSign PKI, O=eMudhra Technologies Limited, CN=emSign ECC Root CA - G3
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                7C:5D:02:84:13:D4:CC:8A:9B:81:CE:17:1C:2E:29:1E:9C:48:63:42
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=30:43:FA:4F:F2:57:DC:A0:C3:80:EE:2E:58:EA:78:B2:3F:E6:BB:C1
                SHA256 Fingerprint=86:A1:EC:BA:08:9C:4A:8D:3B:BE:27:34:C6:12:BA:34:1D:81:3E:04:3C:F9:E8:A8:62:CD:5C:57:A3:6B:BE:6B
                -----BEGIN CERTIFICATE-----
                MIICTjCCAdOgAwIBAgIKPPYHqWhwDtqLhDAKBggqhkjOPQQDAzBrMQswCQYDVQQG
                EwJJTjETMBEGA1UECxMKZW1TaWduIFBLSTElMCMGA1UEChMcZU11ZGhyYSBUZWNo
                bm9sb2dpZXMgTGltaXRlZDEgMB4GA1UEAxMXZW1TaWduIEVDQyBSb290IENBIC0g
                RzMwHhcNMTgwMjE4MTgzMDAwWhcNNDMwMjE4MTgzMDAwWjBrMQswCQYDVQQGEwJJ
                TjETMBEGA1UECxMKZW1TaWduIFBLSTElMCMGA1UEChMcZU11ZGhyYSBUZWNobm9s
                b2dpZXMgTGltaXRlZDEgMB4GA1UEAxMXZW1TaWduIEVDQyBSb290IENBIC0gRzMw
                djAQBgcqhkjOPQIBBgUrgQQAIgNiAAQjpQy4LRL1KPOxst3iAhKAnjlfSU2fySU0
                WXTsuwYc58Byr+iuL+FBVIcUqEqy6HyC5ltqtdyzdc6LBtCGI79G1Y4PPwT01xyS
                fvalY8L1X44uT6EYGQIrMgqCZH0Wk9GjQjBAMB0GA1UdDgQWBBR8XQKEE9TMipuB
                zhccLikenEhjQjAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAKBggq
                hkjOPQQDAwNpADBmAjEAvvNhzwIQHWSVB7gYboiFBS+DCBeQyh+KTOgNG3qxrdWB
                CUfvO6wIBHxcmbHtRwfSAjEAnbpV/KlK6O3t5nYBQnvI+GDZjVGLVTv7jHvrZQnD
                +JbNR6iC8hZVdyR+EhCVBCyj
                -----END CERTIFICATE-----
                === /C=IN/OU=emSign PKI/O=eMudhra Technologies Limited/CN=emSign Root CA - G1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            31:f5:e4:62:0c:6c:58:ed:d6:d8
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb 18 18:30:00 2018 GMT
                            Not After : Feb 18 18:30:00 2043 GMT
                        Subject: C=IN, OU=emSign PKI, O=eMudhra Technologies Limited, CN=emSign Root CA - G1
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                FB:EF:0D:86:9E:B0:E3:DD:A9:B9:F1:21:17:7F:3E:FC:F0:77:2B:1A
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=8A:C7:AD:8F:73:AC:4E:C1:B5:75:4D:A5:40:F4:FC:CF:7C:B5:8E:8C
                SHA256 Fingerprint=40:F6:AF:03:46:A9:9A:A1:CD:1D:55:5A:4E:9C:CE:62:C7:F9:63:46:03:EE:40:66:15:83:3D:C8:C8:D0:03:67
                -----BEGIN CERTIFICATE-----
                MIIDlDCCAnygAwIBAgIKMfXkYgxsWO3W2DANBgkqhkiG9w0BAQsFADBnMQswCQYD
                VQQGEwJJTjETMBEGA1UECxMKZW1TaWduIFBLSTElMCMGA1UEChMcZU11ZGhyYSBU
                ZWNobm9sb2dpZXMgTGltaXRlZDEcMBoGA1UEAxMTZW1TaWduIFJvb3QgQ0EgLSBH
                MTAeFw0xODAyMTgxODMwMDBaFw00MzAyMTgxODMwMDBaMGcxCzAJBgNVBAYTAklO
                MRMwEQYDVQQLEwplbVNpZ24gUEtJMSUwIwYDVQQKExxlTXVkaHJhIFRlY2hub2xv
                Z2llcyBMaW1pdGVkMRwwGgYDVQQDExNlbVNpZ24gUm9vdCBDQSAtIEcxMIIBIjAN
                BgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAk0u76WaK7p1b1TST0Bsew+eeuGQz
                f2N4aLTNLnF115sgxk0pvLZoYIr3IZpWNVrzdr3YzZr/k1ZLpVkGoZM0Kd0WNHVO
                8oG0x5ZOrRkVUkr+PHB1cM2vK6sVmjM8qrOLqs1D/fXqcP/tzxE7lM5OMhbTI0Aq
                d7OvPAEsbO2ZLIvZTmmYsvePQbAyeGHWDV/D+qJAkh1cF+ZwPjXnorfCYuKrpDhM
                tTk1b+oDafo6VGiFbdbyL0NVHpENDtjVaqSW0RM8LHhQ6DqS0hdW5TUaQBw+jSzt
                Od9C4INBdN+jzcKGYEho42kLVACL5HZpIQ15TjQIXhTCzLG3rdd8cIrHhQIDAQAB
                o0IwQDAdBgNVHQ4EFgQU++8Nhp6w492pufEhF38+/PB3KxowDgYDVR0PAQH/BAQD
                AgEGMA8GA1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQELBQADggEBAFn/8oz1h31x
                PaOfG1vR2vjTnGs2vZupYeveFix0PZ7mddrXuqe8QhfnPZHr5X3dPpzxz5KsbEjM
                wiI/aTvFthUvozXGaCocV685743QNcMYDHsAVhzNixl03r4PEuDQqqE/AjSxcM6d
                GNYIAwlG7mDgfrbESQRRfXBgvKqy/3lyeqYdPV8q+Mri/Tm3R7nrft8EI6/6nAYH
                6ftjk4BAtcZsCjEozgyfz7MjNYBBjWzEN3uBL4ChQEKF6dk4jeihU80Bv2noWgby
                RQuQ+q7hv53yrlc8pa6yVvSLZUDp/TGBLPQ5Cdjua6e0ph0VpZj3AYHYhX3zUVxx
                iN66zB+Afko=
                -----END CERTIFICATE-----

                ### Entrust, Inc.

                === /C=US/O=Entrust, Inc./OU=See www.entrust.net/legal-terms/OU=(c) 2009 Entrust, Inc. - for authorized use only/CN=Entrust Root Certification Authority - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1246989352 (0x4a538c28)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jul  7 17:25:54 2009 GMT
                            Not After : Dec  7 17:55:54 2030 GMT
                        Subject: C=US, O=Entrust, Inc., OU=See www.entrust.net/legal-terms, OU=(c) 2009 Entrust, Inc. - for authorized use only, CN=Entrust Root Certification Authority - G2
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                6A:72:26:7A:D0:1E:EF:7D:E7:3B:69:51:D4:6C:8D:9F:90:12:66:AB
                SHA1 Fingerprint=8C:F4:27:FD:79:0C:3A:D1:66:06:8D:E8:1E:57:EF:BB:93:22:72:D4
                SHA256 Fingerprint=43:DF:57:74:B0:3E:7F:EF:5F:E4:0D:93:1A:7B:ED:F1:BB:2E:6B:42:73:8C:4E:6D:38:41:10:3D:3A:A7:F3:39
                -----BEGIN CERTIFICATE-----
                MIIEPjCCAyagAwIBAgIESlOMKDANBgkqhkiG9w0BAQsFADCBvjELMAkGA1UEBhMC
                VVMxFjAUBgNVBAoTDUVudHJ1c3QsIEluYy4xKDAmBgNVBAsTH1NlZSB3d3cuZW50
                cnVzdC5uZXQvbGVnYWwtdGVybXMxOTA3BgNVBAsTMChjKSAyMDA5IEVudHJ1c3Qs
                IEluYy4gLSBmb3IgYXV0aG9yaXplZCB1c2Ugb25seTEyMDAGA1UEAxMpRW50cnVz
                dCBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5IC0gRzIwHhcNMDkwNzA3MTcy
                NTU0WhcNMzAxMjA3MTc1NTU0WjCBvjELMAkGA1UEBhMCVVMxFjAUBgNVBAoTDUVu
                dHJ1c3QsIEluYy4xKDAmBgNVBAsTH1NlZSB3d3cuZW50cnVzdC5uZXQvbGVnYWwt
                dGVybXMxOTA3BgNVBAsTMChjKSAyMDA5IEVudHJ1c3QsIEluYy4gLSBmb3IgYXV0
                aG9yaXplZCB1c2Ugb25seTEyMDAGA1UEAxMpRW50cnVzdCBSb290IENlcnRpZmlj
                YXRpb24gQXV0aG9yaXR5IC0gRzIwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEK
                AoIBAQC6hLZy254Ma+KZ6TABp3bqMriVQRrJ2mFOWHLP/vaCeb9zYQYKpSfYs1/T
                RU4cctZOMvJyig/3gxnQaoCAAEUesMfnmr8SVycco2gvCoe9amsOXmXzHHfV1IWN
                cCG0szLni6LVhjkCsbjSR87kyUnEO6fe+1R9V77w6G7CebI6C1XiUJgWMhNcL3hW
                wcKUs/Ja5CeanyTXxuzQmyWC48zCxEXFjJd6BmsqEZ+pCm5IO2/b1BEZQvePB7/1
                U1+cPvQXLOZprE4yTGJ36rfo5bs0vBmLrpxR57d+tVOxMyLlbc9wPBr64ptntoP0
                jaWvYkxN4FisZDQSA/i2jZRjJKRxAgMBAAGjQjBAMA4GA1UdDwEB/wQEAwIBBjAP
                BgNVHRMBAf8EBTADAQH/MB0GA1UdDgQWBBRqciZ60B7vfec7aVHUbI2fkBJmqzAN
                BgkqhkiG9w0BAQsFAAOCAQEAeZ8dlsa2eT8ijYfThwMEYGprmi5ZiXMRrEPR9RP/
                jTkrwPK9T3CMqS/qF8QLVJ7UG5aYMzyorWKiAHarWWluBh1+xLlEjZivEtRh2woZ
                Rkfz6/djwUAFQKXSt/S1mja/qYh2iARVBCuch38aNzx+LaUa2NSJXsq9rD1s2G2v
                1fN2D807iDginWyTmsQ9v4IbZT+mD12q/OWyFcq1rca8PdCE6OoGcrBNOTJ4vz4R
                nAuknZoh8/CbCzB428Hch0P+vGOaysXCHMnHjf87ElgI5rY97HosTvuDls4MPGmH
                VHOkc8KT/1EQrBVUAdj8BbGJoX90g5pJ19xOe4pIb4tF9g==
                -----END CERTIFICATE-----
                === /C=US/O=Entrust, Inc./OU=See www.entrust.net/legal-terms/OU=(c) 2012 Entrust, Inc. - for authorized use only/CN=Entrust Root Certification Authority - EC1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            a6:8b:79:29:00:00:00:00:50:d0:91:f9
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Dec 18 15:25:36 2012 GMT
                            Not After : Dec 18 15:55:36 2037 GMT
                        Subject: C=US, O=Entrust, Inc., OU=See www.entrust.net/legal-terms, OU=(c) 2012 Entrust, Inc. - for authorized use only, CN=Entrust Root Certification Authority - EC1
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                B7:63:E7:1A:DD:8D:E9:08:A6:55:83:A4:E0:6A:50:41:65:11:42:49
                SHA1 Fingerprint=20:D8:06:40:DF:9B:25:F5:12:25:3A:11:EA:F7:59:8A:EB:14:B5:47
                SHA256 Fingerprint=02:ED:0E:B2:8C:14:DA:45:16:5C:56:67:91:70:0D:64:51:D7:FB:56:F0:B2:AB:1D:3B:8E:B0:70:E5:6E:DF:F5
                -----BEGIN CERTIFICATE-----
                MIIC+TCCAoCgAwIBAgINAKaLeSkAAAAAUNCR+TAKBggqhkjOPQQDAzCBvzELMAkG
                A1UEBhMCVVMxFjAUBgNVBAoTDUVudHJ1c3QsIEluYy4xKDAmBgNVBAsTH1NlZSB3
                d3cuZW50cnVzdC5uZXQvbGVnYWwtdGVybXMxOTA3BgNVBAsTMChjKSAyMDEyIEVu
                dHJ1c3QsIEluYy4gLSBmb3IgYXV0aG9yaXplZCB1c2Ugb25seTEzMDEGA1UEAxMq
                RW50cnVzdCBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5IC0gRUMxMB4XDTEy
                MTIxODE1MjUzNloXDTM3MTIxODE1NTUzNlowgb8xCzAJBgNVBAYTAlVTMRYwFAYD
                VQQKEw1FbnRydXN0LCBJbmMuMSgwJgYDVQQLEx9TZWUgd3d3LmVudHJ1c3QubmV0
                L2xlZ2FsLXRlcm1zMTkwNwYDVQQLEzAoYykgMjAxMiBFbnRydXN0LCBJbmMuIC0g
                Zm9yIGF1dGhvcml6ZWQgdXNlIG9ubHkxMzAxBgNVBAMTKkVudHJ1c3QgUm9vdCBD
                ZXJ0aWZpY2F0aW9uIEF1dGhvcml0eSAtIEVDMTB2MBAGByqGSM49AgEGBSuBBAAi
                A2IABIQTydC6bUF74mzQ61VfZgIaJPRbiWlH47jCffHyAsWfoPZb1YsGGYZPUxBt
                ByQnoaD41UcZYUx9ypMn6nQM72+WCf5j7HBdNq1nd67JnXxVRDqiY1Ef9eNi1KlH
                Bz7MIKNCMEAwDgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0O
                BBYEFLdj5xrdjekIplWDpOBqUEFlEUJJMAoGCCqGSM49BAMDA2cAMGQCMGF52OVC
                R98crlOZF7ZvHH3hvxGU0QOIdeSNiaSKd0bebWHvAvX7td/M/k7//qnmpwIwW5nX
                hTcGtXsI/esni0qU+eH6p44mCOh8kmhtc9hvJqwhAriZtyZBWyVgrtBIGu4G
                -----END CERTIFICATE-----
                === /C=US/O=Entrust, Inc./OU=See www.entrust.net/legal-terms/OU=(c) 2015 Entrust, Inc. - for authorized use only/CN=Entrust Root Certification Authority - G4
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            d9:b5:43:7f:af:a9:39:0f:00:00:00:00:55:65:ad:58
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: May 27 11:11:16 2015 GMT
                            Not After : Dec 27 11:41:16 2037 GMT
                        Subject: C=US, O=Entrust, Inc., OU=See www.entrust.net/legal-terms, OU=(c) 2015 Entrust, Inc. - for authorized use only, CN=Entrust Root Certification Authority - G4
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                9F:38:C4:56:23:C3:39:E8:A0:71:6C:E8:54:4C:E4:E8:3A:B1:BF:67
                SHA1 Fingerprint=14:88:4E:86:26:37:B0:26:AF:59:62:5C:40:77:EC:35:29:BA:96:01
                SHA256 Fingerprint=DB:35:17:D1:F6:73:2A:2D:5A:B9:7C:53:3E:C7:07:79:EE:32:70:A6:2F:B4:AC:42:38:37:24:60:E6:F0:1E:88
                -----BEGIN CERTIFICATE-----
                MIIGSzCCBDOgAwIBAgIRANm1Q3+vqTkPAAAAAFVlrVgwDQYJKoZIhvcNAQELBQAw
                gb4xCzAJBgNVBAYTAlVTMRYwFAYDVQQKEw1FbnRydXN0LCBJbmMuMSgwJgYDVQQL
                Ex9TZWUgd3d3LmVudHJ1c3QubmV0L2xlZ2FsLXRlcm1zMTkwNwYDVQQLEzAoYykg
                MjAxNSBFbnRydXN0LCBJbmMuIC0gZm9yIGF1dGhvcml6ZWQgdXNlIG9ubHkxMjAw
                BgNVBAMTKUVudHJ1c3QgUm9vdCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eSAtIEc0
                MB4XDTE1MDUyNzExMTExNloXDTM3MTIyNzExNDExNlowgb4xCzAJBgNVBAYTAlVT
                MRYwFAYDVQQKEw1FbnRydXN0LCBJbmMuMSgwJgYDVQQLEx9TZWUgd3d3LmVudHJ1
                c3QubmV0L2xlZ2FsLXRlcm1zMTkwNwYDVQQLEzAoYykgMjAxNSBFbnRydXN0LCBJ
                bmMuIC0gZm9yIGF1dGhvcml6ZWQgdXNlIG9ubHkxMjAwBgNVBAMTKUVudHJ1c3Qg
                Um9vdCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eSAtIEc0MIICIjANBgkqhkiG9w0B
                AQEFAAOCAg8AMIICCgKCAgEAsewsQu7i0TD/pZJH4i3DumSXbcr3DbVZwbPLqGgZ
                2K+EbTBwXX7zLtJTmeH+H17ZSK9dE43b/2MzTdMAArzE+NEGCJR5WIoV3imz/f3E
                T+iq4qA7ec2/a0My3dl0ELn39GjUu9CH1apLiipvKgS1sqbHoHrmSKvS0VnM1n4j
                5pds8ELl3FFLFUHtSUrJ3hCX1nbB76W1NhSXNdh4IjVS70O92yfbYVaCNNzLiGAM
                C1rlLAHGVK/XqsEQe9IFWrhAnoanw5CGAlZSCXqc0ieCU0plUmr1POeo8pyvi73T
                DtTUXm6Hnmo9RR3RXRv06QqsYJn7ibT/mCzPfB3pAqoEmh643IhuJbNsZvc8kPNX
                wbMv9W3y+8qh+CmdRouzavbmZwe+LGcKKh9asj5XxNMhIWNlUpEbsZmOeX7m640A
                2Vqq6nPopIICR5b+W45UYaPrL0swsIsjdXJ8ITzI9vF01Bx7owVV7rtNOzK+mndm
                nqxpkCIHH2E6lr7lmk/MBTwoWdPBDFSoWWG9yHJM6Nyfh3+9nEg2XpWjDrk4JFX8
                dWbrAuMINClKxuMrLzOg2qOGpRKX/YAr2hRC45K9PvJdXmd0LhyIRyk0X+IyqJwl
                N4y6mACXi0mWHv0liqzc2thddG5msP9E36EYxr5ILzeUePiVSj9/E15dWf10hkNj
                c0kCAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwHQYD
                VR0OBBYEFJ84xFYjwznooHFs6FRM5Og6sb9nMA0GCSqGSIb3DQEBCwUAA4ICAQAS
                5UKme4sPDORGpbZgQIeMJX6tuGguW8ZAdjwD+MlZ9POrYs4QjbRaZIxowLByQzTS
                Gwv2LFPSypBLhmb8qoMi9IsabyZIrHZ3CL/FmFz0Jomee8O5ZDIBf9PD3Vht7LGr
                hFV0d4QEJ1JrhkzO3bll/9bGXp+aEJlLdWr+aumXIOTkdnrG0CSqkM0gkLpHZPt/
                B7NTeLUKYvJzQ85BK4FqLoUWlFPUa19yIqtRLULVAJyZv967lDtX/Zr1hstWO1uI
                AeV8KEsD+UmDfLJ/fOPtjqF/YFOOVZ1QNBIPt5d7bIdKROf1beyAN/BYGW5KaHbw
                H5Lk6rWS02FREAutp9lfx1/cH6NcjKF+m7ee01ZvZl4HliDtC3T7Zk6LERXpgUl+
                b7DUUH8i119lAg2m9IUe2K4GS0qn0jFmwvjO5QimpAKWRGhXxNUzzxkvFMSUHHuk
                2fCfDrGA4tGeEWSpiBE6doLlYsKA2KSD7ZPvfC+QsDJMlhVoSFLUmQjAJOgc47Ol
                IQ6SwJAfzyBfyjs4x7dtOvPmRLgOMWuIjnDrnBdSqEGULoe256YSxXXfW8AKbnuk
                5F6G+TaU33fD6Q3AOfF5u0aOq0NZJ7cguyPpVkAh7DE9ZapD8j3fcEThuk0mEDuY
                n/PIjhs4ViFqUZPTkcpG2om3PVODLAgfi49T3f+sHw==
                -----END CERTIFICATE-----
                === /C=US/O=Entrust, Inc./OU=www.entrust.net/CPS is incorporated by reference/OU=(c) 2006 Entrust, Inc./CN=Entrust Root Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1164660820 (0x456b5054)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov 27 20:23:42 2006 GMT
                            Not After : Nov 27 20:53:42 2026 GMT
                        Subject: C=US, O=Entrust, Inc., OU=www.entrust.net/CPS is incorporated by reference, OU=(c) 2006 Entrust, Inc., CN=Entrust Root Certification Authority
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Private Key Usage Period:
                                Not Before: Nov 27 20:23:42 2006 GMT, Not After: Nov 27 20:53:42 2026 GMT
                            X509v3 Authority Key Identifier:
                                keyid:68:90:E4:67:A4:A6:53:80:C7:86:66:A4:F1:F7:4B:43:FB:84:BD:6D

                            X509v3 Subject Key Identifier:
                                68:90:E4:67:A4:A6:53:80:C7:86:66:A4:F1:F7:4B:43:FB:84:BD:6D
                            1.2.840.113533.7.65.0:
                                0...V7.1:4.0....
                SHA1 Fingerprint=B3:1E:B1:B7:40:E3:6C:84:02:DA:DC:37:D4:4D:F5:D4:67:49:52:F9
                SHA256 Fingerprint=73:C1:76:43:4F:1B:C6:D5:AD:F4:5B:0E:76:E7:27:28:7C:8D:E5:76:16:C1:E6:E6:14:1A:2B:2C:BC:7D:8E:4C
                -----BEGIN CERTIFICATE-----
                MIIEkTCCA3mgAwIBAgIERWtQVDANBgkqhkiG9w0BAQUFADCBsDELMAkGA1UEBhMC
                VVMxFjAUBgNVBAoTDUVudHJ1c3QsIEluYy4xOTA3BgNVBAsTMHd3dy5lbnRydXN0
                Lm5ldC9DUFMgaXMgaW5jb3Jwb3JhdGVkIGJ5IHJlZmVyZW5jZTEfMB0GA1UECxMW
                KGMpIDIwMDYgRW50cnVzdCwgSW5jLjEtMCsGA1UEAxMkRW50cnVzdCBSb290IENl
                cnRpZmljYXRpb24gQXV0aG9yaXR5MB4XDTA2MTEyNzIwMjM0MloXDTI2MTEyNzIw
                NTM0MlowgbAxCzAJBgNVBAYTAlVTMRYwFAYDVQQKEw1FbnRydXN0LCBJbmMuMTkw
                NwYDVQQLEzB3d3cuZW50cnVzdC5uZXQvQ1BTIGlzIGluY29ycG9yYXRlZCBieSBy
                ZWZlcmVuY2UxHzAdBgNVBAsTFihjKSAyMDA2IEVudHJ1c3QsIEluYy4xLTArBgNV
                BAMTJEVudHJ1c3QgUm9vdCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTCCASIwDQYJ
                KoZIhvcNAQEBBQADggEPADCCAQoCggEBALaVtkNC+sZtKm9I35RMOVcF7sN5EUFo
                Nu3s/poBj6E4KPz3EEZmLk0eGrEaTsbRwJWIsMn/MYszA9u3g3s+IIRe7bJWKKf4
                4LlAcTfFy0cOlypowCKVYhXbR9n10Cv/gkvJrT7eTNuQgFA/CYqEAOwwCj0Yzfv9
                KlmaI5UXLEWeH25DeW0MXJj+SKfFI0dcXv1u5x609mhF0YaDW6KKjbHjKYD+JXGI
                rb68j6xSlkuqUY3kEzEZ6E5Nn9uss2rVvDlUccp6en+Q3X0dgNmBu1kmwhH+5pPi
                94DkZfs0Nw4pgHBNrziGLp5/V6+eF67rHMsoIV+2HNjnogQi+dPa2MsCAwEAAaOB
                sDCBrTAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zArBgNVHRAEJDAi
                gA8yMDA2MTEyNzIwMjM0MlqBDzIwMjYxMTI3MjA1MzQyWjAfBgNVHSMEGDAWgBRo
                kORnpKZTgMeGZqTx90tD+4S9bTAdBgNVHQ4EFgQUaJDkZ6SmU4DHhmak8fdLQ/uE
                vW0wHQYJKoZIhvZ9B0EABBAwDhsIVjcuMTo0LjADAgSQMA0GCSqGSIb3DQEBBQUA
                A4IBAQCT1DCw1wMgKtD5Y+iRDAUgqV8ZyntyTtSx29CW+1RaGSwMCPeyvIWonX9t
                O1KzKtvn1ISMY/YPyyYBkVBs9F8U4pN0wBOeMDpQ47RgxRzwIkSNcUesyBrJ6Zua
                AGAT/3B+XxFNSRuzFVJ7yVTav52Vr2ua2J7p8eRDjeIRRDq/r72DQnNSi6q7pynP
                9WQcCk3RvKqsnyrQ/39/2n3qse0wJcGE2jTSW3iDVuycNsMm4hH2Z0kdkquM++v/
                eu6FSqdQgPCnXEqULl8FmTxSQeDNtGPPAUO6nIPcj2A781q0tHuu2guQOHXvgR1m
                0vdXcDazv/wor3ElhVsT/h5/WrQ8
                -----END CERTIFICATE-----

                ### Entrust.net

                === /O=Entrust.net/OU=www.entrust.net/CPS_2048 incorp. by ref. (limits liab.)/OU=(c) 1999 Entrust.net Limited/CN=Entrust.net Certification Authority (2048)
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 946069240 (0x3863def8)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec 24 17:50:51 1999 GMT
                            Not After : Jul 24 14:15:12 2029 GMT
                        Subject: O=Entrust.net, OU=www.entrust.net/CPS_2048 incorp. by ref. (limits liab.), OU=(c) 1999 Entrust.net Limited, CN=Entrust.net Certification Authority (2048)
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                55:E4:81:D1:11:80:BE:D8:89:B9:08:A3:31:F9:A1:24:09:16:B9:70
                SHA1 Fingerprint=50:30:06:09:1D:97:D4:F5:AE:39:F7:CB:E7:92:7D:7D:65:2D:34:31
                SHA256 Fingerprint=6D:C4:71:72:E0:1C:BC:B0:BF:62:58:0D:89:5F:E2:B8:AC:9A:D4:F8:73:80:1E:0C:10:B9:C8:37:D2:1E:B1:77
                -----BEGIN CERTIFICATE-----
                MIIEKjCCAxKgAwIBAgIEOGPe+DANBgkqhkiG9w0BAQUFADCBtDEUMBIGA1UEChML
                RW50cnVzdC5uZXQxQDA+BgNVBAsUN3d3dy5lbnRydXN0Lm5ldC9DUFNfMjA0OCBp
                bmNvcnAuIGJ5IHJlZi4gKGxpbWl0cyBsaWFiLikxJTAjBgNVBAsTHChjKSAxOTk5
                IEVudHJ1c3QubmV0IExpbWl0ZWQxMzAxBgNVBAMTKkVudHJ1c3QubmV0IENlcnRp
                ZmljYXRpb24gQXV0aG9yaXR5ICgyMDQ4KTAeFw05OTEyMjQxNzUwNTFaFw0yOTA3
                MjQxNDE1MTJaMIG0MRQwEgYDVQQKEwtFbnRydXN0Lm5ldDFAMD4GA1UECxQ3d3d3
                LmVudHJ1c3QubmV0L0NQU18yMDQ4IGluY29ycC4gYnkgcmVmLiAobGltaXRzIGxp
                YWIuKTElMCMGA1UECxMcKGMpIDE5OTkgRW50cnVzdC5uZXQgTGltaXRlZDEzMDEG
                A1UEAxMqRW50cnVzdC5uZXQgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkgKDIwNDgp
                MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEArU1LqRKGsuqjIAcVFmQq
                K0vRvwtKTY7tgHalZ7d4QMBzQshowNtTK91euHaYNZOLGp18EzoOH1u3Hs/lJBQe
                sYGpjX24zGtLA/ECDNyrpUAkAH90lKGdCCmziAv1h3edVc3kw37XamSrhRSGlVuX
                MlBvPci6Zgzj/L24ScF2iUkZ/cCovYmjZy/Gn7xxGWC4LeksyZB2ZnuU4q941mVT
                XTzWnLLPKQP5L6RQstRIzgUyVYr9smRMDuSYB3Xbf9+5CFVghTAp+XtIpGmG4zU/
                HoZdenoVve8AjhUiVBcAkCaTvA5JaJG/+EfTnZVCwQ5N328mz8MYIWJmQ3DW1cAH
                4QIDAQABo0IwQDAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNV
                HQ4EFgQUVeSB0RGAvtiJuQijMfmhJAkWuXAwDQYJKoZIhvcNAQEFBQADggEBADub
                j1abMOdTmXx6eadNl9cZlZD7Bh/KM3xGY4+WZiT6QBshJ8rmcnPyT/4xmf3IDExo
                U8aAghOY+rat2l098c5u9hURlIIM7j+VrxGrD9cv3h8Dj1csHsm7mhpElesYT6Yf
                zX1XEC+bBAlahLVu2B064dae0Wx5XnkcFMXj0EyTO2U87d89vqbllRrDtRnDvV5b
                u/8j72gZyxKTJ1wDLW8w0B62GqzeWvfRqqgnpv55gcR5mTNXuhKwqeBCbJPKVt7+
                bYQLCIt+jerXmCHG8+c8eS9enNFMFY3h7CI3zJpDC5fcgJCNs2ebb0gIFVbPv/Er
                fF6adulZkMV8gzURZVE=
                -----END CERTIFICATE-----

                ### FNMT-RCM

                === /C=ES/O=FNMT-RCM/OU=AC RAIZ FNMT-RCM
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            5d:93:8d:30:67:36:c8:06:1d:1a:c7:54:84:69:07
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct 29 15:59:56 2008 GMT
                            Not After : Jan  1 00:00:00 2030 GMT
                        Subject: C=ES, O=FNMT-RCM, OU=AC RAIZ FNMT-RCM
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                F7:7D:C5:FD:C4:E8:9A:1B:77:64:A7:F5:1D:A0:CC:BF:87:60:9A:6D
                            X509v3 Certificate Policies:
                                Policy: X509v3 Any Policy
                                  CPS: http://www.cert.fnmt.es/dpcs/

                SHA1 Fingerprint=EC:50:35:07:B2:15:C4:95:62:19:E2:A8:9A:5B:42:99:2C:4C:2C:20
                SHA256 Fingerprint=EB:C5:57:0C:29:01:8C:4D:67:B1:AA:12:7B:AF:12:F7:03:B4:61:1E:BC:17:B7:DA:B5:57:38:94:17:9B:93:FA
                -----BEGIN CERTIFICATE-----
                MIIFgzCCA2ugAwIBAgIPXZONMGc2yAYdGsdUhGkHMA0GCSqGSIb3DQEBCwUAMDsx
                CzAJBgNVBAYTAkVTMREwDwYDVQQKDAhGTk1ULVJDTTEZMBcGA1UECwwQQUMgUkFJ
                WiBGTk1ULVJDTTAeFw0wODEwMjkxNTU5NTZaFw0zMDAxMDEwMDAwMDBaMDsxCzAJ
                BgNVBAYTAkVTMREwDwYDVQQKDAhGTk1ULVJDTTEZMBcGA1UECwwQQUMgUkFJWiBG
                Tk1ULVJDTTCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBALpxgHpMhm5/
                yBNtwMZ9HACXjywMI7sQmkCpGreHiPibVmr75nuOi5KOpyVdWRHbNi63URcfqQgf
                BBckWKo3Shjf5TnUV/3XwSyRAZHiItQDwFj8d0fsjz50Q7qsNI1NOHZnjrDIbzAz
                WHFctPVrbtQBULgTfmxKo0nRIBnuvMApGGWn3v7v3QqQIecaZ5JCEJhfTzC8PhxF
                tBDXaEAUwED653cXeuYLj2VbPNmaUtu1vZ5Gzz3rkQUCwJaydkxNEJY7kvqcfw+Z
                374jNUUeAlz+taibmSXaXvMiwzn15Cou08YfxGyqxRxqAQVKL9LFwag0Jl1mpdIC
                IfkYtwb1TplvqKtMUejPUBjFd8g5CSxJkjKZqLsXF3mwWsXmo8RZZUc1g16p6DUL
                mbvkzSDGm0oGObVo/CK67lWMK07q87Hj/LaZmtVC+nFNCM+HHmpxffnTtOmlcYF7
                wk5HlqX2doWjKI/pgG6BU6VtX7hI+cL5NqYuSf+4lsKMB7ObiFj86xsc3i1w4peS
                MKGJ47xVqCfWS+2QrYv6YyVZLag13cqXM7zlzced0ezvXg5KkAYmY6252TUtB7p2
                ZSysV4999AeU14ECll2jB0nVetBX+RvnU0Z1qrB5QstocQjpYL05ac70r8NWQMet
                UqIJ5G+GR4of6ygnXYMgrwTJbFaai0b1AgMBAAGjgYMwgYAwDwYDVR0TAQH/BAUw
                AwEB/zAOBgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYEFPd9xf3E6Jobd2Sn9R2gzL+H
                YJptMD4GA1UdIAQ3MDUwMwYEVR0gADArMCkGCCsGAQUFBwIBFh1odHRwOi8vd3d3
                LmNlcnQuZm5tdC5lcy9kcGNzLzANBgkqhkiG9w0BAQsFAAOCAgEAB5BK3/MjTvDD
                nFFlm5wioooMhfNzKWtN/gHiqQxjAb8EZ6WdmF/9ARP67Jpi6Yb+tmLSbkyU+8B1
                RXxlDPiyN8+sD8+Nb/kZ94/sHvJwnvDKuO+3/3Y3dlv2bojzr2IyIpMNOmqOFGYM
                LVN0V2Ue1bLdI4E7pWYjJ2cJj+F3qkPNZVEI7VFY/uY5+ctHhKQV8Xa7pO6kO8Rf
                77IzlhEYt8llvhjho6Tc+hj507wTmzl6NLrTQfv6MooqtyuGC2mDOL7Nii4LcK2N
                JpLuHvUBKwrZ1pebbuCoGRw6IYsMHkCtA+fdZn71uSANA+iW+YJF1DngoABd15jm
                fZ5nc8OaKveri6E6FO80vFIOiZiaBECEHX5FaZNXzuvO+FB8TxxuBEOb+dY7Ixjp
                6o7RTUaN8Tvkasq6+yO3m/qZASlaWFot4/nUbQ4mrcFuNLwy+AwF+mWj2zs3gyLp
                1txyM/1d8iC9djwj2ij3+RvrWWTV3F9yfiD8zYm1kGdNYno/Tq0dwzn+evQoFt9B
                9kiABdcPUXmsEKvU7ANm5mqwujGSQkBqvjrTcuFqN1W8rB2Vt2lh8kORdOag0wok
                RqEIr9baRRmW1FMdW4R58MD3R++Lj8UGrp1MYp3/RgT408m2ECVAdf4WqslKYIYv
                uu8wd+RU4riEmViAqhOLUTpPSPaLtrM=
                -----END CERTIFICATE-----

                ### GeoTrust Inc.

                === /C=US/O=GeoTrust Inc./CN=GeoTrust Global CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 144470 (0x23456)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: May 21 04:00:00 2002 GMT
                            Not After : May 21 04:00:00 2022 GMT
                        Subject: C=US, O=GeoTrust Inc., CN=GeoTrust Global CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                C0:7A:98:68:8D:89:FB:AB:05:64:0C:11:7D:AA:7D:65:B8:CA:CC:4E
                            X509v3 Authority Key Identifier:
                                keyid:C0:7A:98:68:8D:89:FB:AB:05:64:0C:11:7D:AA:7D:65:B8:CA:CC:4E

                SHA1 Fingerprint=DE:28:F4:A4:FF:E5:B9:2F:A3:C5:03:D1:A3:49:A7:F9:96:2A:82:12
                SHA256 Fingerprint=FF:85:6A:2D:25:1D:CD:88:D3:66:56:F4:50:12:67:98:CF:AB:AA:DE:40:79:9C:72:2D:E4:D2:B5:DB:36:A7:3A
                -----BEGIN CERTIFICATE-----
                MIIDVDCCAjygAwIBAgIDAjRWMA0GCSqGSIb3DQEBBQUAMEIxCzAJBgNVBAYTAlVT
                MRYwFAYDVQQKEw1HZW9UcnVzdCBJbmMuMRswGQYDVQQDExJHZW9UcnVzdCBHbG9i
                YWwgQ0EwHhcNMDIwNTIxMDQwMDAwWhcNMjIwNTIxMDQwMDAwWjBCMQswCQYDVQQG
                EwJVUzEWMBQGA1UEChMNR2VvVHJ1c3QgSW5jLjEbMBkGA1UEAxMSR2VvVHJ1c3Qg
                R2xvYmFsIENBMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA2swYYzD9
                9BcjGlZ+W988bDjkcbd4kdS8odhM+KhDtgPpTSEHCIjaWC9mOSm9BXiLnTjoBbdq
                fnGk5sRgprDvgOSJKA+eJdbtg/OtppHHmMlCGDUUna2YRpIuT8rxh0PBFpVXLVDv
                iS2Aelet8u5fa9IAjbkU+BQVNdnARqN7csiRv8lVK83Qlz6cJmTM386DGXHKTubU
                1XupGc1V3sjs0l44U+VcT4wt/lAjNvxm5suOpDkZALeVAjmRCw7+OC7RHQWa9k0+
                bw8HHa8sHo9gOeL6NlMTOdReJivbPagUvTLrGAMoUgRx5aszPeE4uwc2hGKceeoW
                MPRfwCvocWvk+QIDAQABo1MwUTAPBgNVHRMBAf8EBTADAQH/MB0GA1UdDgQWBBTA
                ephojYn7qwVkDBF9qn1luMrMTjAfBgNVHSMEGDAWgBTAephojYn7qwVkDBF9qn1l
                uMrMTjANBgkqhkiG9w0BAQUFAAOCAQEANeMpauUvXVSOKVCUn5kaFOSPeCpilKIn
                Z57QzxpeR+nBsqTP3UEaBU6bS+5Kb1VSsyShNwrrZHYqLizz/Tt1kL/6cdjHPTfS
                tQWVYrmm3ok9Nns4d0iXrKYgjy6myQzCsplFAMfOEVEiIuCl6rYVSAlk6l5PdPcF
                PseKUgzbFbS9bZvlxrFUaKnjaZC2mqUPuLk/IH2uSrW4nOQdtqvmlKXBx4Ot2/Un
                hw4EbNX/3aBd7YdStysVAq45pmp06drE57xNNB6pXE0zX5IJL4hmXXeXxx12E6nV
                5fEWCRE11azbJHFwLJhWC9kXtNHjUStedejV0NxPNO3CBWaAocvmMw==
                -----END CERTIFICATE-----
                === /C=US/O=GeoTrust Inc./OU=(c) 2007 GeoTrust Inc. - For authorized use only/CN=GeoTrust Primary Certification Authority - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            3c:b2:f4:48:0a:00:e2:fe:eb:24:3b:5e:60:3e:c3:6b
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Nov  5 00:00:00 2007 GMT
                            Not After : Jan 18 23:59:59 2038 GMT
                        Subject: C=US, O=GeoTrust Inc., OU=(c) 2007 GeoTrust Inc. - For authorized use only, CN=GeoTrust Primary Certification Authority - G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                15:5F:35:57:51:55:FB:25:B2:AD:03:69:FC:01:A3:FA:BE:11:55:D5
                SHA1 Fingerprint=8D:17:84:D5:37:F3:03:7D:EC:70:FE:57:8B:51:9A:99:E6:10:D7:B0
                SHA256 Fingerprint=5E:DB:7A:C4:3B:82:A0:6A:87:61:E8:D7:BE:49:79:EB:F2:61:1F:7D:D7:9B:F9:1C:1C:6B:56:6A:21:9E:D7:66
                -----BEGIN CERTIFICATE-----
                MIICrjCCAjWgAwIBAgIQPLL0SAoA4v7rJDteYD7DazAKBggqhkjOPQQDAzCBmDEL
                MAkGA1UEBhMCVVMxFjAUBgNVBAoTDUdlb1RydXN0IEluYy4xOTA3BgNVBAsTMChj
                KSAyMDA3IEdlb1RydXN0IEluYy4gLSBGb3IgYXV0aG9yaXplZCB1c2Ugb25seTE2
                MDQGA1UEAxMtR2VvVHJ1c3QgUHJpbWFyeSBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0
                eSAtIEcyMB4XDTA3MTEwNTAwMDAwMFoXDTM4MDExODIzNTk1OVowgZgxCzAJBgNV
                BAYTAlVTMRYwFAYDVQQKEw1HZW9UcnVzdCBJbmMuMTkwNwYDVQQLEzAoYykgMjAw
                NyBHZW9UcnVzdCBJbmMuIC0gRm9yIGF1dGhvcml6ZWQgdXNlIG9ubHkxNjA0BgNV
                BAMTLUdlb1RydXN0IFByaW1hcnkgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkgLSBH
                MjB2MBAGByqGSM49AgEGBSuBBAAiA2IABBWx6P0DFUPlrOuHNxFi79KDNlJ9RVcL
                So17VDs6bl8VAsBQps8lL33KSLjHUGMcKiEIfJo22Av+0SbFWDEwKCXzXV2juLal
                tJLtbCyf691DiaI8S0iRHVDsJt/WYC69IaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAO
                BgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYEFBVfNVdRVfslsq0DafwBo/q+EVXVMAoG
                CCqGSM49BAMDA2cAMGQCMGSWWaboCd6LuvpaiIjwH5HTRqjySkwCY/tsXzjbLkGT
                qQ7mndwxHLKgpxgceeHHNgIwOlavmnRs9vuD4DPTCF+hnMJbn0bWtsuRBmOiBucz
                rD6ogRLQy7rQkgu2npaqBA+K
                -----END CERTIFICATE-----

                ### GlobalSign

                === /OU=GlobalSign ECC Root CA - R4/O=GlobalSign/CN=GlobalSign
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            2a:38:a4:1c:96:0a:04:de:42:b2:28:a5:0b:e8:34:98:02
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: Nov 13 00:00:00 2012 GMT
                            Not After : Jan 19 03:14:07 2038 GMT
                        Subject: OU=GlobalSign ECC Root CA - R4, O=GlobalSign, CN=GlobalSign
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                54:B0:7B:AD:45:B8:E2:40:7F:FB:0A:6E:FB:BE:33:C9:3C:A3:84:D5
                SHA1 Fingerprint=69:69:56:2E:40:80:F4:24:A1:E7:19:9F:14:BA:F3:EE:58:AB:6A:BB
                SHA256 Fingerprint=BE:C9:49:11:C2:95:56:76:DB:6C:0A:55:09:86:D7:6E:3B:A0:05:66:7C:44:2C:97:62:B4:FB:B7:73:DE:22:8C
                -----BEGIN CERTIFICATE-----
                MIIB4TCCAYegAwIBAgIRKjikHJYKBN5CsiilC+g0mAIwCgYIKoZIzj0EAwIwUDEk
                MCIGA1UECxMbR2xvYmFsU2lnbiBFQ0MgUm9vdCBDQSAtIFI0MRMwEQYDVQQKEwpH
                bG9iYWxTaWduMRMwEQYDVQQDEwpHbG9iYWxTaWduMB4XDTEyMTExMzAwMDAwMFoX
                DTM4MDExOTAzMTQwN1owUDEkMCIGA1UECxMbR2xvYmFsU2lnbiBFQ0MgUm9vdCBD
                QSAtIFI0MRMwEQYDVQQKEwpHbG9iYWxTaWduMRMwEQYDVQQDEwpHbG9iYWxTaWdu
                MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEuMZ5049sJQ6fLjkZHAOkrprlOQcJ
                FspjsbmG+IpXwVfOQvpzofdlQv8ewQCybnMO/8ch5RikqtlxP6jUuc6MHaNCMEAw
                DgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFFSwe61F
                uOJAf/sKbvu+M8k8o4TVMAoGCCqGSM49BAMCA0gAMEUCIQDckqGgE6bPA7DmxCGX
                kPoUVy0D7O48027KqGx2vKLeuwIgJ6iFJzWbVsaj8kfSt24bAgAXqmemFZHe+pTs
                ewv4n4Q=
                -----END CERTIFICATE-----
                === /OU=GlobalSign ECC Root CA - R5/O=GlobalSign/CN=GlobalSign
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            60:59:49:e0:26:2e:bb:55:f9:0a:77:8a:71:f9:4a:d8:6c
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Nov 13 00:00:00 2012 GMT
                            Not After : Jan 19 03:14:07 2038 GMT
                        Subject: OU=GlobalSign ECC Root CA - R5, O=GlobalSign, CN=GlobalSign
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                3D:E6:29:48:9B:EA:07:CA:21:44:4A:26:DE:6E:DE:D2:83:D0:9F:59
                SHA1 Fingerprint=1F:24:C6:30:CD:A4:18:EF:20:69:FF:AD:4F:DD:5F:46:3A:1B:69:AA
                SHA256 Fingerprint=17:9F:BC:14:8A:3D:D0:0F:D2:4E:A1:34:58:CC:43:BF:A7:F5:9C:81:82:D7:83:A5:13:F6:EB:EC:10:0C:89:24
                -----BEGIN CERTIFICATE-----
                MIICHjCCAaSgAwIBAgIRYFlJ4CYuu1X5CneKcflK2GwwCgYIKoZIzj0EAwMwUDEk
                MCIGA1UECxMbR2xvYmFsU2lnbiBFQ0MgUm9vdCBDQSAtIFI1MRMwEQYDVQQKEwpH
                bG9iYWxTaWduMRMwEQYDVQQDEwpHbG9iYWxTaWduMB4XDTEyMTExMzAwMDAwMFoX
                DTM4MDExOTAzMTQwN1owUDEkMCIGA1UECxMbR2xvYmFsU2lnbiBFQ0MgUm9vdCBD
                QSAtIFI1MRMwEQYDVQQKEwpHbG9iYWxTaWduMRMwEQYDVQQDEwpHbG9iYWxTaWdu
                MHYwEAYHKoZIzj0CAQYFK4EEACIDYgAER0UOlvt9Xb/pOdEh+J8LttV7HpI6SFkc
                8GIxLcB6KP4ap1yztsyX50XUWPrRd21DosCHZTQKH3rd6zwzocWdTaRvQZU4f8ke
                hOvRnkmSh5SHDDqFSmafnVmTTZdhBoZKo0IwQDAOBgNVHQ8BAf8EBAMCAQYwDwYD
                VR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUPeYpSJvqB8ohREom3m7e0oPQn1kwCgYI
                KoZIzj0EAwMDaAAwZQIxAOVpEslu28YxuglB4Zf4+/2a4n0Sye18ZNPLBSWLVtmg
                515dTguDnFt2KaAJJiFqYgIwcdK1j1zqO+F4CYWodZI7yFz9SO8NdCKoCOJuxUnO
                xwy8p2Fp8fc74SrL+SvzZpA3
                -----END CERTIFICATE-----
                === /OU=GlobalSign Root CA - R2/O=GlobalSign/CN=GlobalSign
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            04:00:00:00:00:01:0f:86:26:e6:0d
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec 15 08:00:00 2006 GMT
                            Not After : Dec 15 08:00:00 2021 GMT
                        Subject: OU=GlobalSign Root CA - R2, O=GlobalSign, CN=GlobalSign
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                9B:E2:07:57:67:1C:1E:C0:6A:06:DE:59:B4:9A:2D:DF:DC:19:86:2E
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.globalsign.net/root-r2.crl

                            X509v3 Authority Key Identifier:
                                keyid:9B:E2:07:57:67:1C:1E:C0:6A:06:DE:59:B4:9A:2D:DF:DC:19:86:2E

                SHA1 Fingerprint=75:E0:AB:B6:13:85:12:27:1C:04:F8:5F:DD:DE:38:E4:B7:24:2E:FE
                SHA256 Fingerprint=CA:42:DD:41:74:5F:D0:B8:1E:B9:02:36:2C:F9:D8:BF:71:9D:A1:BD:1B:1E:FC:94:6F:5B:4C:99:F4:2C:1B:9E
                -----BEGIN CERTIFICATE-----
                MIIDujCCAqKgAwIBAgILBAAAAAABD4Ym5g0wDQYJKoZIhvcNAQEFBQAwTDEgMB4G
                A1UECxMXR2xvYmFsU2lnbiBSb290IENBIC0gUjIxEzARBgNVBAoTCkdsb2JhbFNp
                Z24xEzARBgNVBAMTCkdsb2JhbFNpZ24wHhcNMDYxMjE1MDgwMDAwWhcNMjExMjE1
                MDgwMDAwWjBMMSAwHgYDVQQLExdHbG9iYWxTaWduIFJvb3QgQ0EgLSBSMjETMBEG
                A1UEChMKR2xvYmFsU2lnbjETMBEGA1UEAxMKR2xvYmFsU2lnbjCCASIwDQYJKoZI
                hvcNAQEBBQADggEPADCCAQoCggEBAKbPJA6+Lm8omUVCxKs+IVSbC9N/hHD6ErPL
                v4dfxn+G07IwXNb9rfF73OX4YJYJkhD10FPe+3t+c4isUoh7SqbKSaZeqKeMWhG8
                eoLrvozps6yWJQeXSpkqBy+0Hne/ig+1AnwblrjFuTosvNYSuetZfeLQBoZfXklq
                tTleiDTsvHgMCJiEbKjNS7SgfQx5TfC4LcshytVsW33hoCmEofnTlEnLJGKRILzd
                C9XZzPnqJworc5HGnRusyMvo4KD0L5CLTfuwNhv2GXqF4G3yYROIXJ/gkwpRl4pa
                zq+r1feqCapgvdzZX99yqWATXgAByUr6P6TqBwMhAo6CygPCm48CAwEAAaOBnDCB
                mTAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUm+IH
                V2ccHsBqBt5ZtJot39wZhi4wNgYDVR0fBC8wLTAroCmgJ4YlaHR0cDovL2NybC5n
                bG9iYWxzaWduLm5ldC9yb290LXIyLmNybDAfBgNVHSMEGDAWgBSb4gdXZxwewGoG
                3lm0mi3f3BmGLjANBgkqhkiG9w0BAQUFAAOCAQEAmYFThxxol4aR7OBKuEQLq4Gs
                J0/WwbgcQ3izDJr86iw8bmEbTUsp9Z8FHSbBuOmDAGJFtqkIk7mpM0sYmsL4h4hO
                291xNBrBVNpGP+DTKqttVCL1OmLNIG+6KYnX3ZHu01yiPqFbQfXf5WRDLenVOavS
                ot+3i9DAgBkcRcAtjOj4LaR0VknFBbVPFd5uRHg5h6h+u/N5GJG79G+dwfCMNYxd
                AfvDbbnvRG15RjF+Cv6pgsH/76tuIMRQyV+dTZsXjAzlAcmgQWpzU/qlULRuJQ/7
                TBj0/VLZjmmx6BEP3ojY+x1J96relc8geMJgEtslQIxq/H5COEBkEveegeGTLg==
                -----END CERTIFICATE-----
                === /OU=GlobalSign Root CA - R3/O=GlobalSign/CN=GlobalSign
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            04:00:00:00:00:01:21:58:53:08:a2
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Mar 18 10:00:00 2009 GMT
                            Not After : Mar 18 10:00:00 2029 GMT
                        Subject: OU=GlobalSign Root CA - R3, O=GlobalSign, CN=GlobalSign
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                8F:F0:4B:7F:A8:2E:45:24:AE:4D:50:FA:63:9A:8B:DE:E2:DD:1B:BC
                SHA1 Fingerprint=D6:9B:56:11:48:F0:1C:77:C5:45:78:C1:09:26:DF:5B:85:69:76:AD
                SHA256 Fingerprint=CB:B5:22:D7:B7:F1:27:AD:6A:01:13:86:5B:DF:1C:D4:10:2E:7D:07:59:AF:63:5A:7C:F4:72:0D:C9:63:C5:3B
                -----BEGIN CERTIFICATE-----
                MIIDXzCCAkegAwIBAgILBAAAAAABIVhTCKIwDQYJKoZIhvcNAQELBQAwTDEgMB4G
                A1UECxMXR2xvYmFsU2lnbiBSb290IENBIC0gUjMxEzARBgNVBAoTCkdsb2JhbFNp
                Z24xEzARBgNVBAMTCkdsb2JhbFNpZ24wHhcNMDkwMzE4MTAwMDAwWhcNMjkwMzE4
                MTAwMDAwWjBMMSAwHgYDVQQLExdHbG9iYWxTaWduIFJvb3QgQ0EgLSBSMzETMBEG
                A1UEChMKR2xvYmFsU2lnbjETMBEGA1UEAxMKR2xvYmFsU2lnbjCCASIwDQYJKoZI
                hvcNAQEBBQADggEPADCCAQoCggEBAMwldpB5BngiFvXAg7aEyiie/QV2EcWtiHL8
                RgJDx7KKnQRfJMsuS+FggkbhUqsMgUdwbN1k0ev1LKMPgj0MK66X17YUhhB5uzsT
                gHeMCOFJ0mpiLx9e+pZo34knlTifBtc+ycsmWQ1z3rDI6SYOgxXG71uL0gRgykmm
                KPZpO/bLyCiR5Z2KYVc3rHQU3HTgOu5yLy6c+9C7v/U9AOEGM+iCK65TpjoWc4zd
                QQ4gOsC0p6Hpsk+QLjJg6VfLuQSSaGjlOCZgdbKfd/+RFO+uIEn8rUAVSNECMWEZ
                XriX7613t2Saer9fwRPvm2L7DWzgVGkWqQPabumDk3F2xmmFghcCAwEAAaNCMEAw
                DgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFI/wS3+o
                LkUkrk1Q+mOai97i3Ru8MA0GCSqGSIb3DQEBCwUAA4IBAQBLQNvAUKr+yAzv95ZU
                RUm7lgAJQayzE4aGKAczymvmdLm6AC2upArT9fHxD4q/c2dKg8dEe3jgr25sbwMp
                jjM5RcOO5LlXbKr8EpbsU8Yt5CRsuZRj+9xTaGdWPoO4zzUhw8lo/s7awlOqzJCK
                6fBdRoyV3XpYKBovHd7NADdBj+1EbddTKJd+82cEHhXXipa0095MJ6RMG3NzdvQX
                mcIfeg7jLQitChws/zyrVQ4PkX4268NXSb7hLi18YIvDQVETI53O9zJrlAGomecs
                Mx86OyXShkDOOyyGeMlhLxS67ttVb9+E7gUJTb0o2HLO02JQZR7rkpeDMdmztcpH
                WD9f
                -----END CERTIFICATE-----
                === /OU=GlobalSign Root CA - R6/O=GlobalSign/CN=GlobalSign
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            45:e6:bb:03:83:33:c3:85:65:48:e6:ff:45:51
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Dec 10 00:00:00 2014 GMT
                            Not After : Dec 10 00:00:00 2034 GMT
                        Subject: OU=GlobalSign Root CA - R6, O=GlobalSign, CN=GlobalSign
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                AE:6C:05:A3:93:13:E2:A2:E7:E2:D7:1C:D6:C7:F0:7F:C8:67:53:A0
                            X509v3 Authority Key Identifier:
                                keyid:AE:6C:05:A3:93:13:E2:A2:E7:E2:D7:1C:D6:C7:F0:7F:C8:67:53:A0

                SHA1 Fingerprint=80:94:64:0E:B5:A7:A1:CA:11:9C:1F:DD:D5:9F:81:02:63:A7:FB:D1
                SHA256 Fingerprint=2C:AB:EA:FE:37:D0:6C:A2:2A:BA:73:91:C0:03:3D:25:98:29:52:C4:53:64:73:49:76:3A:3A:B5:AD:6C:CF:69
                -----BEGIN CERTIFICATE-----
                MIIFgzCCA2ugAwIBAgIORea7A4Mzw4VlSOb/RVEwDQYJKoZIhvcNAQEMBQAwTDEg
                MB4GA1UECxMXR2xvYmFsU2lnbiBSb290IENBIC0gUjYxEzARBgNVBAoTCkdsb2Jh
                bFNpZ24xEzARBgNVBAMTCkdsb2JhbFNpZ24wHhcNMTQxMjEwMDAwMDAwWhcNMzQx
                MjEwMDAwMDAwWjBMMSAwHgYDVQQLExdHbG9iYWxTaWduIFJvb3QgQ0EgLSBSNjET
                MBEGA1UEChMKR2xvYmFsU2lnbjETMBEGA1UEAxMKR2xvYmFsU2lnbjCCAiIwDQYJ
                KoZIhvcNAQEBBQADggIPADCCAgoCggIBAJUH6HPKZvnsFMp7PPcNCPG0RQssgrRI
                xutbPK6DuEGSMxSkb3/pKszGsIhrxbaJ0cay/xTOURQh7ErdG1rG1ofuTToVBu1k
                ZguSgMpE3nOUTvOniX9PeGMIyBJQbUJmL025eShNUhqKGoC3GYEOfsSKvGRMIRxD
                aNc9PIrFsmbVkJq3MQbFvuJtMgamHvm566qjuL++gmNQ0PAYid/kD3n16qIfKtJw
                LnvnvJO7bVPiSHyMEAc4/2ayd2F+4OqMPKq0pPbzlUoSB239jLKJz9CgYXfIWHSw
                1CM69106yqLbnQneXUQtkPGBzVeS+n68UARjNN9rkxi+azayOeSsJDa38O+2HBNX
                k7besvjihbdzorg1qkXy4J02oW9UivFyVm4uiMVRQkQVlO6jxTiWm05OWgtH8wY2
                SXcwvHE35absIQh1/OZhFj931dmRl4QKbNQCTXTAFO39OfuD8l4UoQSwC+n+7o/h
                bguyCLNhZglqsQY6ZZZZwPA1/cnaKI0aEYdwgQqomnUdnjqGBQCe24DWJfncBZ4n
                WUx2OVvq+aWh2IMP0f/fMBH5hc8zSPXKbWQULHpYT9NLCEnFlWQaYw55PfWzjMpY
                rZxCRXluDocZXFSxZba/jJvcE+kNb7gu3GduyYsRtYQUigAZcIN5kZeR1Bonvzce
                MgfYFGM8KEyvAgMBAAGjYzBhMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8EBTAD
                AQH/MB0GA1UdDgQWBBSubAWjkxPioufi1xzWx/B/yGdToDAfBgNVHSMEGDAWgBSu
                bAWjkxPioufi1xzWx/B/yGdToDANBgkqhkiG9w0BAQwFAAOCAgEAgyXt6NH9lVLN
                nsAEoJFp5lzQhN7craJP6Ed41mWYqVuoPId8AorRbrcWc+ZfwFSY1XS+wc3iEZGt
                Ixg93eFyRJa0lV7Ae46ZeBZDE1ZXs6KzO7V33EByrKPrmzU+sQghoefEQzd5Mr61
                55wsTLxDKZmOMNOsIeDjHfrYBzN2VAAiKrlNIC5waNrlU/yDXNOd8v9EDERm8tLj
                vUYAGm0CuiVdjaExUd1URhxN25mW7xocBFymFe944Hn+Xds+qkxV/ZoVqW/hpvvf
                cDDpw+5CRu3CkwWJ+n1jez/QcYF8AOiYrg54NMMl+68KnyBr3TsTjxKM4kEaSHpz
                oHdpx7Zcf4LIHv5YGygrqGytXm3ABdJ7t+uA/iU3/gKbaKxCXcPu9czc8FB10jZp
                nOZ7BN9uBmm23goJSFmH63sUYHpkqmlD75HHTOwY3WzvUy2MmeFe8nI+z1TIvWfs
                pA9MRf/TuTAjB0yPEL+GltmZWrSZVxykzLsViVO6LAUP5MSeGbEYNNVMnbrt9x+v
                JJUEeKgDu+6B5dpffItKoZB0JaezPkvILFa9x8jvOOJckvB595yEunQtYQEgfn7R
                8k8HWV+LLUNS60YMlOH1Zkd5d9VUWx+tJDfLRVpOoERIyNiwmcUVhAn21klJwGW4
                5hpxbqCo8YLoRT5s1gLXCmeDBVrJpBA=
                -----END CERTIFICATE-----

                ### GlobalSign nv-sa

                === /C=BE/O=GlobalSign nv-sa/OU=Root CA/CN=GlobalSign Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            04:00:00:00:00:01:15:4b:5a:c3:94
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Sep  1 12:00:00 1998 GMT
                            Not After : Jan 28 12:00:00 2028 GMT
                        Subject: C=BE, O=GlobalSign nv-sa, OU=Root CA, CN=GlobalSign Root CA
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                60:7B:66:1A:45:0D:97:CA:89:50:2F:7D:04:CD:34:A8:FF:FC:FD:4B
                SHA1 Fingerprint=B1:BC:96:8B:D4:F4:9D:62:2A:A8:9A:81:F2:15:01:52:A4:1D:82:9C
                SHA256 Fingerprint=EB:D4:10:40:E4:BB:3E:C7:42:C9:E3:81:D3:1E:F2:A4:1A:48:B6:68:5C:96:E7:CE:F3:C1:DF:6C:D4:33:1C:99
                -----BEGIN CERTIFICATE-----
                MIIDdTCCAl2gAwIBAgILBAAAAAABFUtaw5QwDQYJKoZIhvcNAQEFBQAwVzELMAkG
                A1UEBhMCQkUxGTAXBgNVBAoTEEdsb2JhbFNpZ24gbnYtc2ExEDAOBgNVBAsTB1Jv
                b3QgQ0ExGzAZBgNVBAMTEkdsb2JhbFNpZ24gUm9vdCBDQTAeFw05ODA5MDExMjAw
                MDBaFw0yODAxMjgxMjAwMDBaMFcxCzAJBgNVBAYTAkJFMRkwFwYDVQQKExBHbG9i
                YWxTaWduIG52LXNhMRAwDgYDVQQLEwdSb290IENBMRswGQYDVQQDExJHbG9iYWxT
                aWduIFJvb3QgQ0EwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDaDuaZ
                jc6j40+Kfvvxi4Mla+pIH/EqsLmVEQS98GPR4mdmzxzdzxtIK+6NiY6arymAZavp
                xy0Sy6scTHAHoT0KMM0VjU/43dSMUBUc71DuxC73/OlS8pF94G3VNTCOXkNz8kHp
                1Wrjsok6Vjk4bwY8iGlbKk3Fp1S4bInMm/k8yuX9ifUSPJJ4ltbcdG6TRGHRjcdG
                snUOhugZitVtbNV4FpWi6cgKOOvyJBNPc1STE4U6G7weNLWLBYy5d4ux2x8gkasJ
                U26Qzns3dLlwR5EiUWMWea6xrkEmCMgZK9FGqkjWZCrXgzT/LCrBbBlDSgeF59N8
                9iFo7+ryUp9/k5DPAgMBAAGjQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8E
                BTADAQH/MB0GA1UdDgQWBBRge2YaRQ2XyolQL30EzTSo//z9SzANBgkqhkiG9w0B
                AQUFAAOCAQEA1nPnfE920I2/7LqivjTFKDK1fPxsnCwrvQmeU79rXqoRSLblCKOz
                yj1hTdNGCbM+w6DjY1Ub8rrvrTnhQ7k4o+YviiY776BQVvnGCv04zcQLcFGUl5gE
                38NflNUVyRRBnMRddWQVDf9VMOyGj/8N7yy5Y0b2qvzfvGn9LhJIZJrglfCm7ymP
                AbEVtQwdpf5pLGkkeB6zpxxxYu7KyJesF12KwvhHhm4qxFYxldBniYUr+WymXUad
                DKqC5JlR3XC321Y9YeRq4VzW9v493kHMB65jUr9TU/Qr6cf9tveCX4XSQRjbgbME
                HMUfpIBvFSDJ3gyICh3WZlXi/EjJKSZp4A==
                -----END CERTIFICATE-----

                ### GoDaddy.com, Inc.

                === /C=US/ST=Arizona/L=Scottsdale/O=GoDaddy.com, Inc./CN=Go Daddy Root Certificate Authority - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Sep  1 00:00:00 2009 GMT
                            Not After : Dec 31 23:59:59 2037 GMT
                        Subject: C=US, ST=Arizona, L=Scottsdale, O=GoDaddy.com, Inc., CN=Go Daddy Root Certificate Authority - G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                3A:9A:85:07:10:67:28:B6:EF:F6:BD:05:41:6E:20:C1:94:DA:0F:DE
                SHA1 Fingerprint=47:BE:AB:C9:22:EA:E8:0E:78:78:34:62:A7:9F:45:C2:54:FD:E6:8B
                SHA256 Fingerprint=45:14:0B:32:47:EB:9C:C8:C5:B4:F0:D7:B5:30:91:F7:32:92:08:9E:6E:5A:63:E2:74:9D:D3:AC:A9:19:8E:DA
                -----BEGIN CERTIFICATE-----
                MIIDxTCCAq2gAwIBAgIBADANBgkqhkiG9w0BAQsFADCBgzELMAkGA1UEBhMCVVMx
                EDAOBgNVBAgTB0FyaXpvbmExEzARBgNVBAcTClNjb3R0c2RhbGUxGjAYBgNVBAoT
                EUdvRGFkZHkuY29tLCBJbmMuMTEwLwYDVQQDEyhHbyBEYWRkeSBSb290IENlcnRp
                ZmljYXRlIEF1dGhvcml0eSAtIEcyMB4XDTA5MDkwMTAwMDAwMFoXDTM3MTIzMTIz
                NTk1OVowgYMxCzAJBgNVBAYTAlVTMRAwDgYDVQQIEwdBcml6b25hMRMwEQYDVQQH
                EwpTY290dHNkYWxlMRowGAYDVQQKExFHb0RhZGR5LmNvbSwgSW5jLjExMC8GA1UE
                AxMoR28gRGFkZHkgUm9vdCBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkgLSBHMjCCASIw
                DQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAL9xYgjx+lk09xvJGKP3gElY6SKD
                E6bFIEMBO4Tx5oVJnyfq9oQbTqC023CYxzIBsQU+B07u9PpPL1kwIuerGVZr4oAH
                /PMWdYA5UXvl+TW2dE6pjYIT5LY/qQOD+qK+ihVqf94Lw7YZFAXK6sOoBJQ7Rnwy
                DfMAZiLIjWltNowRGLfTshxgtDj6AozO091GB94KPutdfMh8+7ArU6SSYmlRJQVh
                GkSBjCypQ5Yj36w6gZoOKcUcqeldHraenjAKOc7xiID7S13MMuyFYkMlNAJWJwGR
                tDtwKj9useiciAF9n9T521NtYJ2/LOdYq7hfRvzOxBsDPAnrSTFcaUaz4EcCAwEA
                AaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYE
                FDqahQcQZyi27/a9BUFuIMGU2g/eMA0GCSqGSIb3DQEBCwUAA4IBAQCZ21151fmX
                WWcDYfF+OwYxdS2hII5PZYe096acvNjpL9DbWu7PdIxztDhC2gV7+AJ1uP2lsdeu
                9tfeE8tTEH6KRtGX+rcuKxGrkLAngPnon1rpN5+r5N9ss4UXnT3ZJE95kTXWXwTr
                gIOrmgIttRD02JDHBHNA7XIloKmf7J6raBKZV8aPEjoJpL1E/QYVN8Gb5DKj7Tjo
                2GTzLH4U/ALqn83/B2gX2yKQOC16jdFU8WnjXzPKej17CuPKf1855eJ1usV2GDPO
                LPAvTK33sefOT6jEm0pUBsV/fdUID+Ic/n4XuKxe9tQWskMJDE32p2u0mYRlynqI
                4uJEvlz36hz1
                -----END CERTIFICATE-----

                ### Google Trust Services LLC

                === /C=US/O=Google Trust Services LLC/CN=GTS Root R1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            6e:47:a9:c5:4b:47:0c:0d:ec:33:d0:89:b9:1c:f4:e1
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Jun 22 00:00:00 2016 GMT
                            Not After : Jun 22 00:00:00 2036 GMT
                        Subject: C=US, O=Google Trust Services LLC, CN=GTS Root R1
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                E4:AF:2B:26:71:1A:2B:48:27:85:2F:52:66:2C:EF:F0:89:13:71:3E
                SHA1 Fingerprint=E1:C9:50:E6:EF:22:F8:4C:56:45:72:8B:92:20:60:D7:D5:A7:A3:E8
                SHA256 Fingerprint=2A:57:54:71:E3:13:40:BC:21:58:1C:BD:2C:F1:3E:15:84:63:20:3E:CE:94:BC:F9:D3:CC:19:6B:F0:9A:54:72
                -----BEGIN CERTIFICATE-----
                MIIFWjCCA0KgAwIBAgIQbkepxUtHDA3sM9CJuRz04TANBgkqhkiG9w0BAQwFADBH
                MQswCQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNlcnZpY2VzIExM
                QzEUMBIGA1UEAxMLR1RTIFJvb3QgUjEwHhcNMTYwNjIyMDAwMDAwWhcNMzYwNjIy
                MDAwMDAwWjBHMQswCQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNl
                cnZpY2VzIExMQzEUMBIGA1UEAxMLR1RTIFJvb3QgUjEwggIiMA0GCSqGSIb3DQEB
                AQUAA4ICDwAwggIKAoICAQC2EQKLHuOhd5s73L+UPreVp0A8of2C+X0yBoJx9vaM
                f/vo27xqLpeXo4xL+Sv2sfnOhB2x+cWX3u+58qPpvBKJXqeqUqv4IyfLpLGcY9vX
                mX7wCl7raKb0xlpHDU0QM+NOsROjyBhsS+z8CZDfnWQpJSMHobTSPS5g4M/SCYe7
                zUjwTcLCeoiKu7rPWRnWr4+wB7CeMfGCwcDfLqZtbBkOtdh+JhpFAz2weaSUKK0P
                fyblqAj+lug8aJRT7oM6iCsVlgmy4HqMLnXWnOunVmSPlk9orj2XwoSPwLxAwAtc
                vfaHszVsrBhQf4TgTM2S0yDpM7xSma8ytSmzJSq0SPly4cpk9+aCEI3oncKKiPo4
                Zor8Y/kB+Xj9e1x3+naH+uzfsQ55lVe0vSbv1gHR6xYKu44LtcXFilWr06zqkUsp
                zBmkMiVOKvFlRNACzqrOSbTqn3yDsEB750Orp2yjj32JgfpMpf/VjsPOS+C12LOO
                Rc92wO1AK/1TD7Cn1TsNsYqiA94xrcx36m97PtbfkSIS5r762DL8EGMUUXLeXdYW
                k70paDPvOmbsB4om3xPXV2V4J95eSRQAogB/mqghtqmxlbCluQ0WEdrHbEg8QOB+
                DVrNVjzRlwW5y0vtOUucxD/SVRNuJLDWcfr0wbrM7Rv1/oFB2ACYPTrIrnqYNxgF
                lQIDAQABo0IwQDAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNV
                HQ4EFgQU5K8rJnEaK0gnhS9SZizv8IkTcT4wDQYJKoZIhvcNAQEMBQADggIBADiW
                Cu49tJYeX++dnAsznyvgyv3SjgofQXSlfKqE1OXyHuY3UjKcC9FhHb8owbZEKTV1
                d5iyfNm9dKyKaOOpMQkpAWBz40d8U6iQSifvS9efk+eCNs6aaAyC58/UEBZvXw6Z
                XPYfcX3v73svfuo21pdwCxXu11xWajOl40k4DLh9+42FpLFZXvRq4d2h9mREruZR
                gyFmxhE+885H7pwoHyXa/6xmld01D1zvICxi/ZG6qcz8WpyTgYMpl0p8WnK0OdC3
                d8t5/Wk6kjftbjhlRn7pYL15iJdfOBL07q9bgsiG1eGZbYwE8na6SfZu6W0eX6Dv
                J4J2QPim01hcDyxC2kLGe4g0x8HYRZvBPsVhHdljUEn2NIVq4BjFbkerQUIpm/Zg
                DdIx02OYI5NaAIFItO/Nis3Jz5nu2Z6qNuFoS3FJFDYoOj0dzpqPJeaAcWErtXvM
                +SUWgeExX6GjfhaknBZqlxi9dnKlC54dNuYvoS++cJEPqOba+MSSQGwlfnuzCdyy
                F62ARPBopY+Udf90WuioAnwMCeKpSwughQtiue+hMZL77/ZRBIls6Kl0obsXs7X9
                SQ98POyDGCBDTtWTurQ0sR8WNh8M5mQ5Fkzc4P4dyKliPUDqysU0ArSuiYgzNdws
                E3PYJ/HQcu51OyLemGhmW/HGY0dVHLqlCFF1pkgl
                -----END CERTIFICATE-----
                === /C=US/O=Google Trust Services LLC/CN=GTS Root R2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            6e:47:a9:c6:5a:b3:e7:20:c5:30:9a:3f:68:52:f2:6f
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Jun 22 00:00:00 2016 GMT
                            Not After : Jun 22 00:00:00 2036 GMT
                        Subject: C=US, O=Google Trust Services LLC, CN=GTS Root R2
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                BB:FF:CA:8E:23:9F:4F:99:CA:DB:E2:68:A6:A5:15:27:17:1E:D9:0E
                SHA1 Fingerprint=D2:73:96:2A:2A:5E:39:9F:73:3F:E1:C7:1E:64:3F:03:38:34:FC:4D
                SHA256 Fingerprint=C4:5D:7B:B0:8E:6D:67:E6:2E:42:35:11:0B:56:4E:5F:78:FD:92:EF:05:8C:84:0A:EA:4E:64:55:D7:58:5C:60
                -----BEGIN CERTIFICATE-----
                MIIFWjCCA0KgAwIBAgIQbkepxlqz5yDFMJo/aFLybzANBgkqhkiG9w0BAQwFADBH
                MQswCQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNlcnZpY2VzIExM
                QzEUMBIGA1UEAxMLR1RTIFJvb3QgUjIwHhcNMTYwNjIyMDAwMDAwWhcNMzYwNjIy
                MDAwMDAwWjBHMQswCQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNl
                cnZpY2VzIExMQzEUMBIGA1UEAxMLR1RTIFJvb3QgUjIwggIiMA0GCSqGSIb3DQEB
                AQUAA4ICDwAwggIKAoICAQDO3v2m++zsFDQ8BwZabFn3GTXd98GdVarTzTukk3Lv
                CvptnfbwhYBboUhSnznFt+4orO/LdmgUud+tAWyZH8QiHZ/+cnfgLFuv5AS/T3Kg
                GjSY6Dlo7JUle3ah5mm5hRm9iYz+re026nO8/4Piy33B0s5Ks40FnotJk9/BW9Bu
                XvAuMC6C/Pq8tBcKSOWIm8Wba96wyrQD8Nr0kLhlZPdcTK3ofmZemde4wj7I0BOd
                re7kRXuJVfeKH2JShBKzwkCX44ofR5GmdFrS+LFjKBC4swm4VndAoiaYecb+3yXu
                PuWgf9RhD1FLPD+M2uFwdNjCaKH5wQzpoeJ/u1U8dgbuak7MkogwTZq9TwtImoS1
                mKPV+3PBV2HdKFZ1E66HjucMUQkQdYhMvI35ezzUIkgfKtzra7tEscszcTJGr61K
                8YzodDqs5xoic4DSMPclQsciOzsSrZYuxsN2B6ogtzVJV+mSSeh2FnIxZyuWfoqj
                x5RWIr9qS34BIbIjMt/kmkRtWVtd9QCgHJvGeJeNkP+byKq0rxFROV7Z+2et1VsR
                nTKaG73VululycslaVNVJ1zgyjbLiGH7HrfQy+4W+9OmTN6SpdTi3/UGVN4unUu0
                kzCqgc7dGtxRcw1PcOnlthYhGXmy5okLdWTK1au8CcEYof/UVKGFPP0UJAOyh9Ok
                twIDAQABo0IwQDAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNV
                HQ4EFgQUu//KjiOfT5nK2+JopqUVJxce2Q4wDQYJKoZIhvcNAQEMBQADggIBALZp
                8KZ3/p7uC4Gt4cCpx/k1HUCCq+YEtN/L9x0Pg/B+E02NjO7jMyLDOfxA325BS0JT
                vhaI8dI4XsRomRyYUpOM52jtG2pzegVATX9lO9ZY8c6DR2Dj/5epnGB3GFW1fgiT
                z9D2PGcDFWEJ+YF59exTpJ/JjwGLc8R3dtyDovUMSRqodt6Sm2T4syzFJ9MHwAiA
                pJiS4wGWAqoC7o87xdFtCjMwc3i5T1QWvwsHoaRc5svJXISPD+AVdyx+Jn7axEvb
                pxZ3B7DNdehyQtaVhJ2Gg/LkkM0JR9SLA3DaWsYDQvTtN6LwG1BUSw7YhN4ZKJmB
                R64JGz9I0cNv4rBgF/XuIwKl2gBbbZCr7qLpGzvpx0QnRY5rn/WkhLx3+WuXrD5R
                RaIRpsyF7gpo8j5QOHokYh4XIDdtak23CZvJ/KRY9bb7nE4Yu5UC56GtmwfuNmsk
                0jmGwZODUNKBRqhfYlcsu2xkiAhu7xNUX90txGdj08+JN7+dIPT7eoOboB6BAFDC
                5AwiWVIQ7UNWhwD4FFKnHYuTjKJNRn8nxnGbJN7k2oaLDX5rIMHAnuFl2GqjpuiF
                izoHCBy69Y9Vmhh1fuXsgWbRIXOhNUQLgD1bnF5vKheW0YMjiGZt5obicDIvUiLn
                yOd/xCxgXS/Dr55FBcOEArf9LAhST4Ldo/DUhgkC
                -----END CERTIFICATE-----
                === /C=US/O=Google Trust Services LLC/CN=GTS Root R3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            6e:47:a9:c7:6c:a9:73:24:40:89:0f:03:55:dd:8d:1d
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Jun 22 00:00:00 2016 GMT
                            Not After : Jun 22 00:00:00 2036 GMT
                        Subject: C=US, O=Google Trust Services LLC, CN=GTS Root R3
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                C1:F1:26:BA:A0:2D:AE:85:81:CF:D3:F1:2A:12:BD:B8:0A:67:FD:BC
                SHA1 Fingerprint=30:D4:24:6F:07:FF:DB:91:89:8A:0B:E9:49:66:11:EB:8C:5E:46:E5
                SHA256 Fingerprint=15:D5:B8:77:46:19:EA:7D:54:CE:1C:A6:D0:B0:C4:03:E0:37:A9:17:F1:31:E8:A0:4E:1E:6B:7A:71:BA:BC:E5
                -----BEGIN CERTIFICATE-----
                MIICDDCCAZGgAwIBAgIQbkepx2ypcyRAiQ8DVd2NHTAKBggqhkjOPQQDAzBHMQsw
                CQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNlcnZpY2VzIExMQzEU
                MBIGA1UEAxMLR1RTIFJvb3QgUjMwHhcNMTYwNjIyMDAwMDAwWhcNMzYwNjIyMDAw
                MDAwWjBHMQswCQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNlcnZp
                Y2VzIExMQzEUMBIGA1UEAxMLR1RTIFJvb3QgUjMwdjAQBgcqhkjOPQIBBgUrgQQA
                IgNiAAQfTzOHMymKoYTey8chWEGJ6ladK0uFxh1MJ7x/JlFyb+Kf1qPKzEUURout
                736GjOyxfi//qXGdGIRFBEFVbivqJn+7kAHjSxm65FSWRQmx1WyRRK2EE46ajA2A
                DDL24CejQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8EBTADAQH/MB0GA1Ud
                DgQWBBTB8Sa6oC2uhYHP0/EqEr24Cmf9vDAKBggqhkjOPQQDAwNpADBmAjEAgFuk
                fCPAlaUs3L6JbyO5o91lAFJekazInXJ0glMLfalAvWhgxeG4VDvBNhcl2MG9AjEA
                njWSdIUlUfUk7GRSJFClH9voy8l27OyCbvWFGFPouOOaKaqW04MjyaR7YbPMAuhd
                -----END CERTIFICATE-----
                === /C=US/O=Google Trust Services LLC/CN=GTS Root R4
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            6e:47:a9:c8:8b:94:b6:e8:bb:3b:2a:d8:a2:b2:c1:99
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Jun 22 00:00:00 2016 GMT
                            Not After : Jun 22 00:00:00 2036 GMT
                        Subject: C=US, O=Google Trust Services LLC, CN=GTS Root R4
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                80:4C:D6:EB:74:FF:49:36:A3:D5:D8:FC:B5:3E:C5:6A:F0:94:1D:8C
                SHA1 Fingerprint=2A:1D:60:27:D9:4A:B1:0A:1C:4D:91:5C:CD:33:A0:CB:3E:2D:54:CB
                SHA256 Fingerprint=71:CC:A5:39:1F:9E:79:4B:04:80:25:30:B3:63:E1:21:DA:8A:30:43:BB:26:66:2F:EA:4D:CA:7F:C9:51:A4:BD
                -----BEGIN CERTIFICATE-----
                MIICCjCCAZGgAwIBAgIQbkepyIuUtui7OyrYorLBmTAKBggqhkjOPQQDAzBHMQsw
                CQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNlcnZpY2VzIExMQzEU
                MBIGA1UEAxMLR1RTIFJvb3QgUjQwHhcNMTYwNjIyMDAwMDAwWhcNMzYwNjIyMDAw
                MDAwWjBHMQswCQYDVQQGEwJVUzEiMCAGA1UEChMZR29vZ2xlIFRydXN0IFNlcnZp
                Y2VzIExMQzEUMBIGA1UEAxMLR1RTIFJvb3QgUjQwdjAQBgcqhkjOPQIBBgUrgQQA
                IgNiAATzdHOnaItgrkO4NcWBMHtLSZ37wWHO5t5GvWvVYRg1rkDdc/eJkTBa6zzu
                hXyiQHY7qca4R9gq55KRanPpsXI5nymfopjTX15YhmUPoYRlBtHci8nHc8iMai/l
                xKvRHYqjQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8EBTADAQH/MB0GA1Ud
                DgQWBBSATNbrdP9JNqPV2Py1PsVq8JQdjDAKBggqhkjOPQQDAwNnADBkAjBqUFJ0
                CMRw3J5QdCHojXohw0+WbhXRIjVhLfoIN+4Zba3bssx9BzT1YBkstTTZbyACMANx
                sbqjYAuG7ZoIapVon+Kz4ZNkfF6Tpt95LY2F45TPI11xzPKwTdb+mciUqXWi4w==
                -----END CERTIFICATE-----

                ### GUANG DONG CERTIFICATE AUTHORITY CO.,LTD.

                === /C=CN/O=GUANG DONG CERTIFICATE AUTHORITY CO.,LTD./CN=GDCA TrustAUTH R5 ROOT
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 9009899650740120186 (0x7d0997fef047ea7a)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Nov 26 05:13:15 2014 GMT
                            Not After : Dec 31 15:59:59 2040 GMT
                        Subject: C=CN, O=GUANG DONG CERTIFICATE AUTHORITY CO.,LTD., CN=GDCA TrustAUTH R5 ROOT
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                E2:C9:40:9F:4D:CE:E8:9A:A1:7C:CF:0E:3F:65:C5:29:88:6A:19:51
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=0F:36:38:5B:81:1A:25:C3:9B:31:4E:83:CA:E9:34:66:70:CC:74:B4
                SHA256 Fingerprint=BF:FF:8F:D0:44:33:48:7D:6A:8A:A6:0C:1A:29:76:7A:9F:C2:BB:B0:5E:42:0F:71:3A:13:B9:92:89:1D:38:93
                -----BEGIN CERTIFICATE-----
                MIIFiDCCA3CgAwIBAgIIfQmX/vBH6nowDQYJKoZIhvcNAQELBQAwYjELMAkGA1UE
                BhMCQ04xMjAwBgNVBAoMKUdVQU5HIERPTkcgQ0VSVElGSUNBVEUgQVVUSE9SSVRZ
                IENPLixMVEQuMR8wHQYDVQQDDBZHRENBIFRydXN0QVVUSCBSNSBST09UMB4XDTE0
                MTEyNjA1MTMxNVoXDTQwMTIzMTE1NTk1OVowYjELMAkGA1UEBhMCQ04xMjAwBgNV
                BAoMKUdVQU5HIERPTkcgQ0VSVElGSUNBVEUgQVVUSE9SSVRZIENPLixMVEQuMR8w
                HQYDVQQDDBZHRENBIFRydXN0QVVUSCBSNSBST09UMIICIjANBgkqhkiG9w0BAQEF
                AAOCAg8AMIICCgKCAgEA2aMW8Mh0dHeb7zMNOwZ+Vfy1YI92hhJCfVZmPoiC7XJj
                Dp6L3TQsAlFRwxn9WVSEyfFrs0yw6ehGXTjGoqcuEVe6ghWinI9tsJlKCvLriXBj
                TnnEt1u9ol2x8kECK62pOqPseQrsXzrj/e+APK00mxqriCZ7VqKChh/rNYmDf1+u
                KU49tm7srsHwJ5uu4/Ts765/94Y9cnrrpftZTqfrlYwiOXnhLQiPzLyRuEH3FMEj
                qcOtmkVEs7LXLM3GKeJQEK5cy4KOFxg2fZfmiJqwTTQJ9Cy5WmYqsBebnh52nUpm
                MUHfP/vFBu8btn4aRjb3ZGM74zkYI+dndRTVdVeSN72+ahsmUPI2JgaQxXABZG12
                ZuGR224HwGGALrIuL4xwp9E7PLOR5G62xDtw8mySlwnNR30YwPO7ng/Wi64HtloP
                zgsMR6flPri9fcebNaBhlzpBdRfMK5Z3KpIhHtmVdiBnaM8Nvd/WHwlqmuLMc3Gk
                L30SgLdTMEZeS1SZD2fJpcjyIMGC7J0R38IC+xo70e0gmu9lZJIQDSri3nDxGGeC
                jGHeuLzRL5z7D9Ar7Rt2ueQ5Vfj4oR24qoAATILnsn8JuLwwoC8N9VKejveSswoA
                HQBUlwbgsQfZxw9cZX08bVlX5O2ljelAU58VS6Bx9hoh49pwBiFYFIeFd3mqgnkC
                AwEAAaNCMEAwHQYDVR0OBBYEFOLJQJ9NzuiaoXzPDj9lxSmIahlRMA8GA1UdEwEB
                /wQFMAMBAf8wDgYDVR0PAQH/BAQDAgGGMA0GCSqGSIb3DQEBCwUAA4ICAQDRSVfg
                p8xoWLoBDysZzY2wYUWsEe1jUGn4H3++Fo/9nesLqjJHdtJnJO29fDMylyrHBYZm
                DRd9FBUb1Ov9H5r2XpdptxolpAqzkT9fNqyL7FeoPueBihhXOYV0GkLH6VsTX4/5
                COmSdI31R9KrO9b7eGZONn356ZLpBN79SWP8bfsUcZNnL0dKt7n/HipzcEYwv1ry
                L3ml4Y0M2fmyYzeMN2WFcGpcWwlyua1jPLHd+PwyvzeG5LuOmCd+uh8W4XAR8gPf
                JWIyJyYYMoSf/wA6E7qaTfRPuBRwIrHKK5DOKcFw9C+df/KQHtZa37dG/OaG+svg
                IHZ6uqbL9XzeYqWxi+7egmaKTjowHz+Ay60nugxe19CxVsp3cbK1daFQqUBDF8Io
                2c9Si1vIY9RCPqAzekYu9wogRlR+ak8x8YF+QnQ4ZXMn7sZ8uI7XpTrXmKGcjBBV
                09tL7ECQ8s1uV9JiDnxXk7Gnbc2dg7sq5+W2O3FYrf3RRbxake5TFW/TRQl1brqQ
                XR4EzzffHqhmsYzmIGrv/EhOdJhCrylvLmrH+33RZjEizIYAfmaDDEL0vTSSwxrq
                T8p+ck0LcIymSLumoRT2+1hEmRSuqguTaaApJUqlyyvdimYHFngVV3Eb7PVHhPOe
                MTd61X8kreS8/f3MboPoDKi3QWwH3b08hpcv0g==
                -----END CERTIFICATE-----

                ### Hellenic Academic and Research Institutions Cert. Authority

                === /C=GR/L=Athens/O=Hellenic Academic and Research Institutions Cert. Authority/CN=Hellenic Academic and Research Institutions ECC RootCA 2015
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: Jul  7 10:37:12 2015 GMT
                            Not After : Jun 30 10:37:12 2040 GMT
                        Subject: C=GR, L=Athens, O=Hellenic Academic and Research Institutions Cert. Authority, CN=Hellenic Academic and Research Institutions ECC RootCA 2015
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                B4:22:0B:82:99:24:01:0E:9C:BB:E4:0E:FD:BF:FB:97:20:93:99:2A
                SHA1 Fingerprint=9F:F1:71:8D:92:D5:9A:F3:7D:74:97:B4:BC:6F:84:68:0B:BA:B6:66
                SHA256 Fingerprint=44:B5:45:AA:8A:25:E6:5A:73:CA:15:DC:27:FC:36:D2:4C:1C:B9:95:3A:06:65:39:B1:15:82:DC:48:7B:48:33
                -----BEGIN CERTIFICATE-----
                MIICwzCCAkqgAwIBAgIBADAKBggqhkjOPQQDAjCBqjELMAkGA1UEBhMCR1IxDzAN
                BgNVBAcTBkF0aGVuczFEMEIGA1UEChM7SGVsbGVuaWMgQWNhZGVtaWMgYW5kIFJl
                c2VhcmNoIEluc3RpdHV0aW9ucyBDZXJ0LiBBdXRob3JpdHkxRDBCBgNVBAMTO0hl
                bGxlbmljIEFjYWRlbWljIGFuZCBSZXNlYXJjaCBJbnN0aXR1dGlvbnMgRUNDIFJv
                b3RDQSAyMDE1MB4XDTE1MDcwNzEwMzcxMloXDTQwMDYzMDEwMzcxMlowgaoxCzAJ
                BgNVBAYTAkdSMQ8wDQYDVQQHEwZBdGhlbnMxRDBCBgNVBAoTO0hlbGxlbmljIEFj
                YWRlbWljIGFuZCBSZXNlYXJjaCBJbnN0aXR1dGlvbnMgQ2VydC4gQXV0aG9yaXR5
                MUQwQgYDVQQDEztIZWxsZW5pYyBBY2FkZW1pYyBhbmQgUmVzZWFyY2ggSW5zdGl0
                dXRpb25zIEVDQyBSb290Q0EgMjAxNTB2MBAGByqGSM49AgEGBSuBBAAiA2IABJKg
                QehLgoRc4vgxEZmGZE4JJS+dQS8KrjVPdJWyUWRrjWvmP3CV8AVER6ZyOFB2lQJa
                jq4onvktTpnvLEhvTCUp6NFxW98dwXU3tNf6e3pCnGoKVlp8aQuqgAkkbH7BRqNC
                MEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYEFLQi
                C4KZJAEOnLvkDv2/+5cgk5kqMAoGCCqGSM49BAMCA2cAMGQCMGfOFmI4oqxiRaep
                lSTAGiecMjvAwNW6qef4BENThe5SId6d9SWDPp5YSy/XZxMOIQIwBeF1Ad5o7Sof
                TUwJCA3sS61kFyjndc5FZXIhF8siQQ6ME5g4mlRtm8rifOoCWCKR
                -----END CERTIFICATE-----
                === /C=GR/L=Athens/O=Hellenic Academic and Research Institutions Cert. Authority/CN=Hellenic Academic and Research Institutions RootCA 2015
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jul  7 10:11:21 2015 GMT
                            Not After : Jun 30 10:11:21 2040 GMT
                        Subject: C=GR, L=Athens, O=Hellenic Academic and Research Institutions Cert. Authority, CN=Hellenic Academic and Research Institutions RootCA 2015
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                71:15:67:C8:C8:C9:BD:75:5D:72:D0:38:18:6A:9D:F3:71:24:54:0B
                SHA1 Fingerprint=01:0C:06:95:A6:98:19:14:FF:BF:5F:C6:B0:B6:95:EA:29:E9:12:A6
                SHA256 Fingerprint=A0:40:92:9A:02:CE:53:B4:AC:F4:F2:FF:C6:98:1C:E4:49:6F:75:5E:6D:45:FE:0B:2A:69:2B:CD:52:52:3F:36
                -----BEGIN CERTIFICATE-----
                MIIGCzCCA/OgAwIBAgIBADANBgkqhkiG9w0BAQsFADCBpjELMAkGA1UEBhMCR1Ix
                DzANBgNVBAcTBkF0aGVuczFEMEIGA1UEChM7SGVsbGVuaWMgQWNhZGVtaWMgYW5k
                IFJlc2VhcmNoIEluc3RpdHV0aW9ucyBDZXJ0LiBBdXRob3JpdHkxQDA+BgNVBAMT
                N0hlbGxlbmljIEFjYWRlbWljIGFuZCBSZXNlYXJjaCBJbnN0aXR1dGlvbnMgUm9v
                dENBIDIwMTUwHhcNMTUwNzA3MTAxMTIxWhcNNDAwNjMwMTAxMTIxWjCBpjELMAkG
                A1UEBhMCR1IxDzANBgNVBAcTBkF0aGVuczFEMEIGA1UEChM7SGVsbGVuaWMgQWNh
                ZGVtaWMgYW5kIFJlc2VhcmNoIEluc3RpdHV0aW9ucyBDZXJ0LiBBdXRob3JpdHkx
                QDA+BgNVBAMTN0hlbGxlbmljIEFjYWRlbWljIGFuZCBSZXNlYXJjaCBJbnN0aXR1
                dGlvbnMgUm9vdENBIDIwMTUwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoIC
                AQDC+Kk/G4n8PDwEXT2QNrCROnk8ZlrvbTkBSRq0t89/TSNTt5AA4xMqKKYx8ZEA
                4yjsriFBzh/a/X0SWwGDD7mwX5nh8hKDgE0GPt+sr+ehiGsxr/CL0BgzuNtFajT0
                AoAkKAoCFZVedioNmToUW/bLy1O8E00BiDeUJRtCvCLYjqOWXjrZMts+6PAQZe10
                4S+nfK8nNLspfZu2zwnI5dMK/IhlZXQK3HMcXM1AsRzUtoSMTFDPaI6oWa7CJ06C
                ojXdFPQf/7J31Ycvqm59JCfnxssm5uX+Zwdj2EUN3TpZZTlYepKZcj2chF6IIbjV
                9Cz82XBST3i4vTwri5WY9bPRaM8gFH5MXF/ni+X1NYEZN9cRCLdmvtNKzoNXADrD
                gfgXy5I2XdGj2HUb4Ysn6npIQf1FGQatJ5lOwXBH3bWfgVMS5bGMSF0xQxfjjMZ6
                Y5ZLKTBOhE5iGV48zpeQpX8B653g+IuJ3SWYPZK2fu/Z8VFRfS0myGlZYeCsargq
                NhEEelC9MoS+L9xy1dcdFkfkR2YgP/SWxa+OAXqlD3pk9Q0Yh9muiNX6hME6wGko
                LfINaFGq46V3xqSQDqE3izEjR8EJCOtu93ib14L8hCCZSRm2Ekax+0VVFqmjZayc
                Bw/qa9wfLgZy7IaIEuQt218FL+TwA9MmM+eAws1CoRc0CwIDAQABo0IwQDAPBgNV
                HRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBBjAdBgNVHQ4EFgQUcRVnyMjJvXVd
                ctA4GGqd83EkVAswDQYJKoZIhvcNAQELBQADggIBAHW7bVRLqhBYRjTyYtcWNl0I
                XtVsyIe9tC5G8jH4fOpCtZMWVdyhDBKg2mF+D1hYc2Ryx+hFjtyp8iY/xnmMsVMI
                M4GwVhO+5lFc2JsKT0ucVlMC6U/2DWDqTUJV6HwbISHTGzrMd/K4kPFox/la/vot
                9L/J9UUbzjgQKjeKeaO04wlshYaT/4mWJ3iBj2fjRnRUjtkNaeJK9E10A/+yd+2V
                Z5fkscWrv2oj6NSU4kQoYsRL4vDY4ilrGnB+JGGTe08DMiUNRSQrlrRGar9KC/ea
                j8GsGsVn82800vpzY4zvFrCopEYq+OsS7HK07/grfoxSwIuEVPkvPuNVqNxmsdnh
                X9izjFk0WaSrT2y7HxjbdavYy5LNlDhhDgcGH0tGEPEVvo2FXDtKK4F5D7Rpn0lQ
                l033DlZdwJVqwjbDG2jJ9SrcR5q+ss7FJej6A7na+RZukYT1HCjI/CbM1xyQVqdf
                bzoEvM14iQuODy+jqk+iGxI9FghAD/FGTNeqewjBCvVtJ94Cj8rDtSvK6evIIVM4
                pcw72Hc3MKJP2W/R8kCtQXoXxdZKNYm3QdV8hn9VTYNKpXMgwDqvkPGaJI7ZjnHK
                e7iG2rKPmT4dEw0SEe7Uq/DpFXYC5ODfqiAeW2GFZECpkJcNrVPSWh2HagCXZWK0
                vm9qp/UsQu0yrbYhnr68
                -----END CERTIFICATE-----
                === /C=GR/O=Hellenic Academic and Research Institutions Cert. Authority/CN=Hellenic Academic and Research Institutions RootCA 2011
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec  6 13:49:52 2011 GMT
                            Not After : Dec  1 13:49:52 2031 GMT
                        Subject: C=GR, O=Hellenic Academic and Research Institutions Cert. Authority, CN=Hellenic Academic and Research Institutions RootCA 2011
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage:
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                A6:91:42:FD:13:61:4A:23:9E:08:A4:29:E5:D8:13:04:23:EE:41:25
                            X509v3 Name Constraints:
                                Permitted:
                                  DNS:.gr
                                  DNS:.eu
                                  DNS:.edu
                                  DNS:.org
                                  email:.gr
                                  email:.eu
                                  email:.edu
                                  email:.org

                SHA1 Fingerprint=FE:45:65:9B:79:03:5B:98:A1:61:B5:51:2E:AC:DA:58:09:48:22:4D
                SHA256 Fingerprint=BC:10:4F:15:A4:8B:E7:09:DC:A5:42:A7:E1:D4:B9:DF:6F:05:45:27:E8:02:EA:A9:2D:59:54:44:25:8A:FE:71
                -----BEGIN CERTIFICATE-----
                MIIEMTCCAxmgAwIBAgIBADANBgkqhkiG9w0BAQUFADCBlTELMAkGA1UEBhMCR1Ix
                RDBCBgNVBAoTO0hlbGxlbmljIEFjYWRlbWljIGFuZCBSZXNlYXJjaCBJbnN0aXR1
                dGlvbnMgQ2VydC4gQXV0aG9yaXR5MUAwPgYDVQQDEzdIZWxsZW5pYyBBY2FkZW1p
                YyBhbmQgUmVzZWFyY2ggSW5zdGl0dXRpb25zIFJvb3RDQSAyMDExMB4XDTExMTIw
                NjEzNDk1MloXDTMxMTIwMTEzNDk1MlowgZUxCzAJBgNVBAYTAkdSMUQwQgYDVQQK
                EztIZWxsZW5pYyBBY2FkZW1pYyBhbmQgUmVzZWFyY2ggSW5zdGl0dXRpb25zIENl
                cnQuIEF1dGhvcml0eTFAMD4GA1UEAxM3SGVsbGVuaWMgQWNhZGVtaWMgYW5kIFJl
                c2VhcmNoIEluc3RpdHV0aW9ucyBSb290Q0EgMjAxMTCCASIwDQYJKoZIhvcNAQEB
                BQADggEPADCCAQoCggEBAKlTAOMupvaO+mDYLZU++CwqVE7NuYRhlFhPjz2L5EPz
                dYmNUeTDN9KKiE15HrcS3UN4SoqS5tdI1Q+kOilENbgH9mgdVc04UfCMJDGFr4PJ
                fel3r+0ae50X+bOdOFAPplp5kYCvN66m0zH7tSYJnTxa71HFK9+WXesyHgLacEns
                bgzImjeN9/E2YEsmLIKe0HjzDQ9jpFEw4fkrJxIH2Oq9GGKYsFk3fb7u8yBRQlqD
                75O6aRXxYp2fmTmCobd0LovUxQt7L/DICto9eQqakxylKHJzkUOap9FNhYS5qXSP
                FEDH3N6sQWRstBmbAmNtJGSPRLIl6s5ddAxjMlyNh+UCAwEAAaOBiTCBhjAPBgNV
                HRMBAf8EBTADAQH/MAsGA1UdDwQEAwIBBjAdBgNVHQ4EFgQUppFC/RNhSiOeCKQp
                5dgTBCPuQSUwRwYDVR0eBEAwPqA8MAWCAy5ncjAFggMuZXUwBoIELmVkdTAGggQu
                b3JnMAWBAy5ncjAFgQMuZXUwBoEELmVkdTAGgQQub3JnMA0GCSqGSIb3DQEBBQUA
                A4IBAQAf73lB4XtuP7KMhjdCSk4cNx6NZrokgclPEg8hwAOXhiVtXdMiKahsog2p
                6z0GW5k6x8zDmjR/qw7IThzh+uTczQ2+vyT+bOdrwg3IBp5OjWEopmr95fZi6hg8
                TqBTnbI6nOulnJEWtk2C4AwFSKls9cz4y51JtPACpf1wA+2KIaWuE4ZJwzNzvoc7
                dIsXRSZMFpGD/md9zU1jZ/rzAxKWeAaNsWftjj++n08C9bMJL/NMh98qy5V8Acys
                Nnq/onN694/BtZqhFLKPM58N7yLcZnuEvUUXBj08yrl3NI/K6s8/MT7jiOOASSXI
                l7WdmplNsDz4SgCbZN2fOUvRJ9e4
                -----END CERTIFICATE-----

                ### Hongkong Post

                === /C=HK/O=Hongkong Post/CN=Hongkong Post Root CA 1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1000 (0x3e8)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: May 15 05:13:14 2003 GMT
                            Not After : May 15 04:52:29 2023 GMT
                        Subject: C=HK, O=Hongkong Post, CN=Hongkong Post Root CA 1
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE, pathlen:3
                            X509v3 Key Usage: critical
                                Digital Signature, Non Repudiation, Certificate Sign, CRL Sign
                SHA1 Fingerprint=D6:DA:A8:20:8D:09:D2:15:4D:24:B5:2F:CB:34:6E:B2:58:B2:8A:58
                SHA256 Fingerprint=F9:E6:7D:33:6C:51:00:2A:C0:54:C6:32:02:2D:66:DD:A2:E7:E3:FF:F1:0A:D0:61:ED:31:D8:BB:B4:10:CF:B2
                -----BEGIN CERTIFICATE-----
                MIIDMDCCAhigAwIBAgICA+gwDQYJKoZIhvcNAQEFBQAwRzELMAkGA1UEBhMCSEsx
                FjAUBgNVBAoTDUhvbmdrb25nIFBvc3QxIDAeBgNVBAMTF0hvbmdrb25nIFBvc3Qg
                Um9vdCBDQSAxMB4XDTAzMDUxNTA1MTMxNFoXDTIzMDUxNTA0NTIyOVowRzELMAkG
                A1UEBhMCSEsxFjAUBgNVBAoTDUhvbmdrb25nIFBvc3QxIDAeBgNVBAMTF0hvbmdr
                b25nIFBvc3QgUm9vdCBDQSAxMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKC
                AQEArP84tulmAknjorThkPlAj3n54r15/gK97iSSHSL22oVyaf7XPwnU3ZG1ApzQ
                jVrhVcNQhrkpJsLj2aDxaQMoIIBFIi1WpztUlVYiWR8o3x8gPW2iNr4joLFutbEn
                PzlTCeqrauh0ssJlXI6/fMN4hM2eFvz1Lk8gKgifd/PFHsSaUmYeSF7jEAaPIpjh
                ZY4bXSNmO7ilMlHIhqqhqZ5/dpTCpmy3QfDVyAY45tQM4vM7TG1QjMSDJ8EThFk9
                nnV0ttgCXjqQesBCNnLsak3c78QA3xMYV18meMjWCnl3v/evt3a5pQuEF10Q6m/h
                q5URX208o1xNg1vysxmKgIsLhwIDAQABoyYwJDASBgNVHRMBAf8ECDAGAQH/AgED
                MA4GA1UdDwEB/wQEAwIBxjANBgkqhkiG9w0BAQUFAAOCAQEADkbVPK7ih9legYsC
                mEEIjEy82tvuJxuC52pF7BaLT4Wg87JwvVqWuspube5Gi27nKi6Wsxkz67SfqLI3
                7piol7Yutmcn1KZJ/RyTZXaeQi/cImyaT/JaFTmxcdcrUehtHJjA2Sr0oYJ71clB
                oiMBdDhViw+5LmeiIAQ32pwL0xch4I+XeTRvhEgCIDMb5jREn5Fw9IBehEPCKdJs
                EhTkYY2sEJCehFC78JZvRZ+K88psT/oROhUVRsPNH4NbLUES7VBnQRM9IauUiqpO
                fMGx+6fWtScvl6tu4B3i0RwsH0Ti/L6RoZz71ilTc4afU9hDDl3WY4JxHYB0yvbi
                AmvZWg==
                -----END CERTIFICATE-----
                === /C=HK/ST=Hong Kong/L=Hong Kong/O=Hongkong Post/CN=Hongkong Post Root CA 3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            08:16:5f:8a:4c:a5:ec:00:c9:93:40:df:c4:c6:ae:23:b8:1c:5a:a4
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jun  3 02:29:46 2017 GMT
                            Not After : Jun  3 02:29:46 2042 GMT
                        Subject: C=HK, ST=Hong Kong, L=Hong Kong, O=Hongkong Post, CN=Hongkong Post Root CA 3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Authority Key Identifier:
                                keyid:17:9D:CD:1E:8B:D6:39:2B:70:D3:5C:D4:A0:B8:1F:B0:00:FC:C5:61

                            X509v3 Subject Key Identifier:
                                17:9D:CD:1E:8B:D6:39:2B:70:D3:5C:D4:A0:B8:1F:B0:00:FC:C5:61
                SHA1 Fingerprint=58:A2:D0:EC:20:52:81:5B:C1:F3:F8:64:02:24:4E:C2:8E:02:4B:02
                SHA256 Fingerprint=5A:2F:C0:3F:0C:83:B0:90:BB:FA:40:60:4B:09:88:44:6C:76:36:18:3D:F9:84:6E:17:10:1A:44:7F:B8:EF:D6
                -----BEGIN CERTIFICATE-----
                MIIFzzCCA7egAwIBAgIUCBZfikyl7ADJk0DfxMauI7gcWqQwDQYJKoZIhvcNAQEL
                BQAwbzELMAkGA1UEBhMCSEsxEjAQBgNVBAgTCUhvbmcgS29uZzESMBAGA1UEBxMJ
                SG9uZyBLb25nMRYwFAYDVQQKEw1Ib25na29uZyBQb3N0MSAwHgYDVQQDExdIb25n
                a29uZyBQb3N0IFJvb3QgQ0EgMzAeFw0xNzA2MDMwMjI5NDZaFw00MjA2MDMwMjI5
                NDZaMG8xCzAJBgNVBAYTAkhLMRIwEAYDVQQIEwlIb25nIEtvbmcxEjAQBgNVBAcT
                CUhvbmcgS29uZzEWMBQGA1UEChMNSG9uZ2tvbmcgUG9zdDEgMB4GA1UEAxMXSG9u
                Z2tvbmcgUG9zdCBSb290IENBIDMwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIK
                AoICAQCziNfqzg8gTr7m1gNt7ln8wlffKWihgw4+aMdoWJwcYEuJQwy51BWy7sFO
                dem1p+/l6TWZ5Mwc50tfjTMwIDNT2aa71T4Tjukfh0mtUC1Qyhi+AViiE3CWu4mI
                VoBc+L0sPOFMV4i707mV78vH9toxdCim5lSJ9UExyuUmGs2C4HDaOym71QP1mbpV
                9WTRYA6ziUm4ii8F0oRFKHyPaFASePwLtVPLwpgchKOesL4jpNrcyCse2m5FHomY
                2vkALgbpDDtw1VAliJnLzXNg99X/NWfFobxeq81KuEXryGgeDQ0URhLj0mRiikKY
                vLTGCAj4/ahMZJx2Ab0vqWwzD9g/KLg8aQFChn5pwckGyuV6RmXpwtZQQS4/t+Tt
                bNe/JgERohYpSms0BpDsE9K2+2p20jzt8NYt3eEV7KObLyzJPivkaTv/ciWxNoZb
                x39ri1UbSsUgYT2uy1DhCDq+sI9jQVMwCFk8mB13umOResoQUGC/8Ne8lYePl8X+
                l2oBlKN8W4UdKjk60FSh0Tlxnf0h+bV78OLgAo9uliQlLKAeLKjEiafv7ZkGL7YK
                TE/bosw3Gq9HhS2KX8Q0NEwA/RiTZxPRN+ZItIsGxVd7GYYKecsAyVKvQv83j+Gj
                Hno9UKtjBucVtT+2RTeUN7F+8kjDf8V1/peNRY8apxpyKBpADwIDAQABo2MwYTAP
                BgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBBjAfBgNVHSMEGDAWgBQXnc0e
                i9Y5K3DTXNSguB+wAPzFYTAdBgNVHQ4EFgQUF53NHovWOStw01zUoLgfsAD8xWEw
                DQYJKoZIhvcNAQELBQADggIBAFbVe27mIgHSQpsY1Q7XZiNc4/6gx5LS6ZStS6LG
                7BJ8dNVI0lkUmcDrudHr9EgwW62nV3OZqdPlt9EuWSRY3GguLmLYauRwCy0gUCCk
                MpXRAJi70/33MvJJrsZ64Ee+bs7Lo3I6LWldy8joRTnU+kLBEUx3XZL7av9YROXr
                gZ6voJmtvqkBZss4HTzfQx/0TW60uhdG/H39h4F5ag0zD/ov+BS5gLNdTaqX4fnk
                GMX41TiMJjz98iji7lpJiCzfeT2OnpA8vUFKOt1b9pq0zj8lMH8yfaIDlNDceqFS
                3m6TjRgm/VWsvY+b0s+v54Ysyx8Jb6NvqYTUc79NoXQbTiNg8swOqn+knEwlqLJm
                Ozj/2ZQw9nKEvmhVEA/GcywWaZMH/rFF7buiVWqw2rVKAiUnhde3t4ZEFolsgCs+
                l6mc1X5VTMbeRRAc6uk7nwNT7u56AQIWeNTowr5GdogTPyK7SBIdUgC0An4hGh6c
                JfTzPV4e0hz5sy229zdcxsshTrD3mUcYhcErulWuBurQB7Lcq9CClnXO0lD+mefP
                L5/ndtFhKvshuzHQqp9HpLIiyhY6UFfEW0NnxWViA0kB60PZ2Pierc+xYw5F9KBa
                LJstxabArahH9CdMOA0uG0k7UvToiIMrVCjU8jVStDKDYmlkDJGcn5fqdBb9HxEG
                mpv0
                -----END CERTIFICATE-----

                ### IdenTrust

                === /C=US/O=IdenTrust/CN=IdenTrust Commercial Root CA 1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0a:01:42:80:00:00:01:45:23:c8:44:b5:00:00:00:02
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jan 16 18:12:23 2014 GMT
                            Not After : Jan 16 18:12:23 2034 GMT
                        Subject: C=US, O=IdenTrust, CN=IdenTrust Commercial Root CA 1
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                ED:44:19:C0:D3:F0:06:8B:EE:A4:7B:BE:42:E7:26:54:C8:8E:36:76
                SHA1 Fingerprint=DF:71:7E:AA:4A:D9:4E:C9:55:84:99:60:2D:48:DE:5F:BC:F0:3A:25
                SHA256 Fingerprint=5D:56:49:9B:E4:D2:E0:8B:CF:CA:D0:8A:3E:38:72:3D:50:50:3B:DE:70:69:48:E4:2F:55:60:30:19:E5:28:AE
                -----BEGIN CERTIFICATE-----
                MIIFYDCCA0igAwIBAgIQCgFCgAAAAUUjyES1AAAAAjANBgkqhkiG9w0BAQsFADBK
                MQswCQYDVQQGEwJVUzESMBAGA1UEChMJSWRlblRydXN0MScwJQYDVQQDEx5JZGVu
                VHJ1c3QgQ29tbWVyY2lhbCBSb290IENBIDEwHhcNMTQwMTE2MTgxMjIzWhcNMzQw
                MTE2MTgxMjIzWjBKMQswCQYDVQQGEwJVUzESMBAGA1UEChMJSWRlblRydXN0MScw
                JQYDVQQDEx5JZGVuVHJ1c3QgQ29tbWVyY2lhbCBSb290IENBIDEwggIiMA0GCSqG
                SIb3DQEBAQUAA4ICDwAwggIKAoICAQCnUBneP5k91DNG8W9RYYKyqU+PZ4ldhNlT
                3Qwo2dfw/66VQ3KZ+bVdfIrBQuExUHTRgQ18zZshq0PirK1ehm7zCYofWjK9ouuU
                +ehcCuz/mNKvcbO0U59Oh++SvL3sTzIwiEsXXlfEU8L2ApeN2WIrvyQfYo3fw7gp
                S0l4PJNgiCL8mdo2yMKi1CxUAGc1bnO/AljwpN3lsKImesrgNqUZFvX9t++uP0D1
                bVoE/c40yiTcdCMbXTMTEl3EASX2MN0CXZ/g1Ue9tOsbobtJSdifWwLziuQkkORi
                T0/Br4sOdBeo0XKIanoBScy0RnnGF7HamB4HWfp1IYVl3ZBWzvurpWCdxJ35UrCL
                vYf5jysjCiN2O/cz4ckA82n5S6LgTrx+kzmEB/dEcH7+B1rlsazRGMzyNeVJSQjK
                Vsk9+w8YfYs7wRPCTY/JTw436R+hDmrfYi7LNQZReSzIJTj0+kuniVyc0uMNOYZK
                dHzVWYfCP04MXFL0PfdSgvHqo6z9STQaKPNBiDoT7uje/5kdX7rL6B7yuVBgwDHT
                c+XvvqDtMwt0viAgxGds8AgDelWAf0ZOlqf0Hj7h9tgJ4TNkK2PXMl6f+cB7D3hv
                l7yTmvmcEpB4eoCHFddydJxVdHixuuFucAS6T6C6aMN7/zHwcz09lCqxC0EOoP5N
                iGVreTO01wIDAQABo0IwQDAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB
                /zAdBgNVHQ4EFgQU7UQZwNPwBovupHu+QucmVMiONnYwDQYJKoZIhvcNAQELBQAD
                ggIBAA2ukDL2pkt8RHYZYR4nKM1eVO8lvOMIkPkp165oCOGUAFjvLi5+U1KMtlwH
                6oi6mYtQlNeCgN9hCQCTrQ0U5s7B8jeUeLBfnLOic7iPBZM4zY0+sLj7wM+x8uwt
                LRvM7Kqas6pgghstO8OEPVeKlh6cdbjTMM1gCIOQ045U8U1mwF10A0Cj7oV+wh93
                nAbowacYXVKV7cndJZ5t+qntozo00Fl72u1Q8zW/7esUTTHHYPTa8Yec4kjixsU3
                +wYQ+nVZZjFHKdp2mhzpgq7vmrlR94gjmmmVYjzlVYA211QC//G5Xc7UI2/YRYRK
                W2XviQzdFKcgyxilJbQN+QHwotL0AMh0jqEqSI5l2xPE4iUXfeu+h1sXIFRRk0pT
                AwvsXcoz7WL9RccvW9xYoIA55vrX/hMUpu09lEpCdNTDd1lzzY9GvlU47/rokTLq
                l1gEIt44w8y8bckzOmoKaT+gyOpyj4xjhiO9bTyWnpXgSUyqorkqG5w2gXjtw+hG
                4iZZRHUe2XWJUc0QhJ1hYMtd+ZciTY6Y5uN/9lu7rs3KSoFrXgvzUeF0K+l+J6fZ
                mUlO+KWA2yUPHGNiiskzZ2s8EIPGrd6ozRaOjfAHN3Gf8qv8QfXBi+wAN10J5U6A
                7/qxXDgGpRtK4dw4LTzcqx+QGtVKnO7RcGzM7vRX+Bi6hG6H
                -----END CERTIFICATE-----
                === /C=US/O=IdenTrust/CN=IdenTrust Public Sector Root CA 1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0a:01:42:80:00:00:01:45:23:cf:46:7c:00:00:00:02
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jan 16 17:53:32 2014 GMT
                            Not After : Jan 16 17:53:32 2034 GMT
                        Subject: C=US, O=IdenTrust, CN=IdenTrust Public Sector Root CA 1
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                E3:71:E0:9E:D8:A7:42:D9:DB:71:91:6B:94:93:EB:C3:A3:D1:14:A3
                SHA1 Fingerprint=BA:29:41:60:77:98:3F:F4:F3:EF:F2:31:05:3B:2E:EA:6D:4D:45:FD
                SHA256 Fingerprint=30:D0:89:5A:9A:44:8A:26:20:91:63:55:22:D1:F5:20:10:B5:86:7A:CA:E1:2C:78:EF:95:8F:D4:F4:38:9F:2F
                -----BEGIN CERTIFICATE-----
                MIIFZjCCA06gAwIBAgIQCgFCgAAAAUUjz0Z8AAAAAjANBgkqhkiG9w0BAQsFADBN
                MQswCQYDVQQGEwJVUzESMBAGA1UEChMJSWRlblRydXN0MSowKAYDVQQDEyFJZGVu
                VHJ1c3QgUHVibGljIFNlY3RvciBSb290IENBIDEwHhcNMTQwMTE2MTc1MzMyWhcN
                MzQwMTE2MTc1MzMyWjBNMQswCQYDVQQGEwJVUzESMBAGA1UEChMJSWRlblRydXN0
                MSowKAYDVQQDEyFJZGVuVHJ1c3QgUHVibGljIFNlY3RvciBSb290IENBIDEwggIi
                MA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQC2IpT8pEiv6EdrCvsnduTyP4o7
                ekosMSqMjbCpwzFrqHd2hCa2rIFCDQjrVVi7evi8ZX3yoG2LqEfpYnYeEe4IFNGy
                RBb06tD6Hi9e28tzQa68ALBKK0CyrOE7S8ItneShm+waOh7wCLPQ5CQ1B5+ctMlS
                bdsHyo+1W/CD80/HLaXIrcuVIKQxKFdYWuSNG5qrng0M8gozOSI5Cpcu81N3uURF
                /YTLNiCBWS2ab21ISGHKTN9T0a9SvESfqy9rg3LvdYDaBjMbXcjaY8ZNzaxmMc3R
                3j6HEDbhuaR672BQssvKplbgN6+rNBM5Jeg5ZuSYeqoSmJxZZoY+rfGwyj4GD3vw
                EUs3oERte8uojHH01bWRNszwFcYr3lEXsZdMUD2xlVl8BX0tIdUAvwFnol57plzy
                9yLxkA2T26pEUWbMfXYD62qoKjgZl3YNa4ph+bz27nb9cCvdKTz4Ch5bQhyLVi9V
                GxyhLrXHFub4qjySjmm2AcG1hp2JDws4lFTo6tyePSW8Uybt1as5qsVATFSrsrTZ
                2fjXctscvG29ZV/viDUqZi/u9rNl8DONfJhBaUYPQxxp+pu10GFqzcpL2UyQRqsV
                WaFHVCkugyhfHMKiq3IXAAaOReyL4jM9f9oZRORicsPfIsbyVtTdX5Vy7W1f90gD
                W/3FKqD2cyOEEBsB5wIDAQABo0IwQDAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/
                BAUwAwEB/zAdBgNVHQ4EFgQU43HgntinQtnbcZFrlJPrw6PRFKMwDQYJKoZIhvcN
                AQELBQADggIBAEf63QqwEZE4rU1d9+UOl1QZgkiHVIyqZJnYWv6IAcVYpZmxI1Qj
                t2odIFflAWJBF9MJ23XLblSQdf4an4EKwt3X9wnQW3IV5B4Jaj0z8yGa5hV+rVHV
                DRDtfULAj+7AmgjVQdZcDiFpboBhDhXAuM/FSRJSzL46zNQuOAXeNf0fb7iAaJg9
                TaDKQGXSc3z1i9kKlT/YPyNtGtEqJBnZhbMX73huqVjRI9PHE+1yJX9dsXNw0H8G
                lwmEKYBhHfpe/3OsoOOJuBxxFcbeMX8S3OFtm6/n6J91eEyrRjuazr8FGF1NFTwW
                mhlQBJqymm9li1JfPFgEKCXAZmExfrngdbkaqIHWchezxQMxNRF4eKLg6TCMf4Df
                WN88uieW4oA0beOY02QnrEh+KHdcxiVhJfiFDGX6xDIvpZgF5PgLZxYWxoK4Mhn5
                +bl53B/N66+rDt0b20XkeucC4pVd/GnwU2lhlXV5C15V5jgclKlZM57IcXR5f1GJ
                tshquDDIajjDbp7hNxbqBWJMWxJH7ae0s1hWx0nzfxJoCTFx8G34Tkf71oXuxVhA
                GaQdp/lLQzfcaFpPz+vCZHTetBXZ9FRUGi8c15dxVJCO2SCdUyt/q4/i6jC8UDfv
                8Ue1fXwsBOxonbRJRBD0ckscZOf85muQ3Wl9af0AVqW3rLatt8o+Ae+c
                -----END CERTIFICATE-----

                ### Internet Security Research Group

                === /C=US/O=Internet Security Research Group/CN=ISRG Root X1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            82:10:cf:b0:d2:40:e3:59:44:63:e0:bb:63:82:8b:00
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jun  4 11:04:38 2015 GMT
                            Not After : Jun  4 11:04:38 2035 GMT
                        Subject: C=US, O=Internet Security Research Group, CN=ISRG Root X1
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                79:B4:59:E6:7B:B6:E5:E4:01:73:80:08:88:C8:1A:58:F6:E9:9B:6E
                SHA1 Fingerprint=CA:BD:2A:79:A1:07:6A:31:F2:1D:25:36:35:CB:03:9D:43:29:A5:E8
                SHA256 Fingerprint=96:BC:EC:06:26:49:76:F3:74:60:77:9A:CF:28:C5:A7:CF:E8:A3:C0:AA:E1:1A:8F:FC:EE:05:C0:BD:DF:08:C6
                -----BEGIN CERTIFICATE-----
                MIIFazCCA1OgAwIBAgIRAIIQz7DSQONZRGPgu2OCiwAwDQYJKoZIhvcNAQELBQAw
                TzELMAkGA1UEBhMCVVMxKTAnBgNVBAoTIEludGVybmV0IFNlY3VyaXR5IFJlc2Vh
                cmNoIEdyb3VwMRUwEwYDVQQDEwxJU1JHIFJvb3QgWDEwHhcNMTUwNjA0MTEwNDM4
                WhcNMzUwNjA0MTEwNDM4WjBPMQswCQYDVQQGEwJVUzEpMCcGA1UEChMgSW50ZXJu
                ZXQgU2VjdXJpdHkgUmVzZWFyY2ggR3JvdXAxFTATBgNVBAMTDElTUkcgUm9vdCBY
                MTCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAK3oJHP0FDfzm54rVygc
                h77ct984kIxuPOZXoHj3dcKi/vVqbvYATyjb3miGbESTtrFj/RQSa78f0uoxmyF+
                0TM8ukj13Xnfs7j/EvEhmkvBioZxaUpmZmyPfjxwv60pIgbz5MDmgK7iS4+3mX6U
                A5/TR5d8mUgjU+g4rk8Kb4Mu0UlXjIB0ttov0DiNewNwIRt18jA8+o+u3dpjq+sW
                T8KOEUt+zwvo/7V3LvSye0rgTBIlDHCNAymg4VMk7BPZ7hm/ELNKjD+Jo2FR3qyH
                B5T0Y3HsLuJvW5iB4YlcNHlsdu87kGJ55tukmi8mxdAQ4Q7e2RCOFvu396j3x+UC
                B5iPNgiV5+I3lg02dZ77DnKxHZu8A/lJBdiB3QW0KtZB6awBdpUKD9jf1b0SHzUv
                KBds0pjBqAlkd25HN7rOrFleaJ1/ctaJxQZBKT5ZPt0m9STJEadao0xAH0ahmbWn
                OlFuhjuefXKnEgV4We0+UXgVCwOPjdAvBbI+e0ocS3MFEvzG6uBQE3xDk3SzynTn
                jh8BCNAw1FtxNrQHusEwMFxIt4I7mKZ9YIqioymCzLq9gwQbooMDQaHWBfEbwrbw
                qHyGO0aoSCqI3Haadr8faqU9GY/rOPNk3sgrDQoo//fb4hVC1CLQJ13hef4Y53CI
                rU7m2Ys6xt0nUW7/vGT1M0NPAgMBAAGjQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNV
                HRMBAf8EBTADAQH/MB0GA1UdDgQWBBR5tFnme7bl5AFzgAiIyBpY9umbbjANBgkq
                hkiG9w0BAQsFAAOCAgEAVR9YqbyyqFDQDLHYGmkgJykIrGF1XIpu+ILlaS/V9lZL
                ubhzEFnTIZd+50xx+7LSYK05qAvqFyFWhfFQDlnrzuBZ6brJFe+GnY+EgPbk6ZGQ
                3BebYhtF8GaV0nxvwuo77x/Py9auJ/GpsMiu/X1+mvoiBOv/2X/qkSsisRcOj/KK
                NFtY2PwByVS5uCbMiogziUwthDyC3+6WVwW6LLv3xLfHTjuCvjHIInNzktHCgKQ5
                ORAzI4JMPJ+GslWYHb4phowim57iaztXOoJwTdwJx4nLCgdNbOhdjsnvzqvHu7Ur
                TkXWStAmzOVyyghqpZXjFaH3pO3JLF+l+/+sKAIuvtd7u+Nxe5AW0wdeRlN8NwdC
                jNPElpzVmbUq4JUagEiuTDkHzsxHpFKVK7q4+63SM1N95R1NbdWhscdCb+ZAJzVc
                oyi3B43njTOQ5yOf+1CceWxG1bQVs5ZufpsMljq4Ui0/1lvh+wjChP4kqKOJ2qxq
                4RgqsahDYVvTH9w7jXbyLeiNdd8XM2w9U/t7y0Ff/9yi0GE44Za4rF2LN9d11TPA
                mRGunUHBcnWEvgJBQl9nJEiU0Zsnvgc/ubhPgXRR4Xq37Z0j4r7g1SgEEzwxA57d
                emyPxgcYxn/eR44/KJ4EBs+lVDR3veyJm+kXQ99b21/+jh5Xos1AnX5iItreGCc=
                -----END CERTIFICATE-----

                ### IZENPE S.A.

                === /C=ES/O=IZENPE S.A./CN=Izenpe.com
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            b0:b7:5a:16:48:5f:bf:e1:cb:f5:8b:d7:19:e6:7d
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Dec 13 13:08:28 2007 GMT
                            Not After : Dec 13 08:27:25 2037 GMT
                        Subject: C=ES, O=IZENPE S.A., CN=Izenpe.com
                        X509v3 extensions:
                            X509v3 Subject Alternative Name:
                                email:info@izenpe.com, DirName:/O=IZENPE S.A. - CIF A01337260-RMerc.Vitoria-Gasteiz T1055 F62 S8/street=Avda del Mediterraneo Etorbidea 14 - 01010 Vitoria-Gasteiz
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                1D:1C:65:0E:A8:F2:25:7B:B4:91:CF:E4:B1:B1:E6:BD:55:74:6C:05
                SHA1 Fingerprint=2F:78:3D:25:52:18:A7:4A:65:39:71:B5:2C:A2:9C:45:15:6F:E9:19
                SHA256 Fingerprint=25:30:CC:8E:98:32:15:02:BA:D9:6F:9B:1F:BA:1B:09:9E:2D:29:9E:0F:45:48:BB:91:4F:36:3B:C0:D4:53:1F
                -----BEGIN CERTIFICATE-----
                MIIF8TCCA9mgAwIBAgIQALC3WhZIX7/hy/WL1xnmfTANBgkqhkiG9w0BAQsFADA4
                MQswCQYDVQQGEwJFUzEUMBIGA1UECgwLSVpFTlBFIFMuQS4xEzARBgNVBAMMCkl6
                ZW5wZS5jb20wHhcNMDcxMjEzMTMwODI4WhcNMzcxMjEzMDgyNzI1WjA4MQswCQYD
                VQQGEwJFUzEUMBIGA1UECgwLSVpFTlBFIFMuQS4xEzARBgNVBAMMCkl6ZW5wZS5j
                b20wggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDJ03rKDx6sp4boFmVq
                scIbRTJxldn+EFvMr+eleQGPicPK8lVx93e+d5TzcqQsRNiekpsUOqHnJJAKClaO
                xdgmlOHZSOEtPtoKct2jmRXagaKH9HtuJneJWK3W6wyyQXpzbm3benhB6QiIEn6H
                LmYRY2xU+zydcsC8Lv/Ct90NduM61/e0aL6i9eOBbsFGb12N4E3GVFWJGjMxCrFX
                uaOKmMPsOzTFlUFpfnXCPCDFYbpRR6AgkJOhkEvzTnyFRVSa0QUmQbC1TR0zvsQD
                yCV8wXDbO/QJLVQnSKwv4cSsPsjLkkxTOTcj7NMB+eAJRE1NZMDhDVqHIrytG6P+
                JrUV86f8hBnp7KGItERphIPzidF0BqnMC9bC3ieFUCbKF7jJeodWLBoBHmy+E60Q
                rLUk9TiRodZL2vG70t5HtfG8gfZZa88ZU+mNFctKy6lvROUbQc/hhqfK0GqfvEyN
                BjNaooXlkDWgYlwWTvDjovoDGrQscbNYLN57C9saD+veIR8GdwYDsMnvmfzAuU8L
                hij+0rnq49qlw0dpEuDb8PYZi+17cNcC1u2HGCgsBCRMd+RIihrGO5rUD8r6ddIB
                QFqNeb+Lz0vPqhbBleStTIo+F5HUsWLlguWABKQDfo2/2n+iD5dPDNMN+9fR5XJ+
                HMh3/1uaD7euBUbl8agW7EekFwIDAQABo4H2MIHzMIGwBgNVHREEgagwgaWBD2lu
                Zm9AaXplbnBlLmNvbaSBkTCBjjFHMEUGA1UECgw+SVpFTlBFIFMuQS4gLSBDSUYg
                QTAxMzM3MjYwLVJNZXJjLlZpdG9yaWEtR2FzdGVpeiBUMTA1NSBGNjIgUzgxQzBB
                BgNVBAkMOkF2ZGEgZGVsIE1lZGl0ZXJyYW5lbyBFdG9yYmlkZWEgMTQgLSAwMTAx
                MCBWaXRvcmlhLUdhc3RlaXowDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
                AQYwHQYDVR0OBBYEFB0cZQ6o8iV7tJHP5LGx5r1VdGwFMA0GCSqGSIb3DQEBCwUA
                A4ICAQB4pgwWSp9MiDrAyw6lFn2fuUhfGI8NYjb2zRlrrKvV9pF9rnHzP7MOeIWb
                laQnIUdCSnxIOvVFfLMMjlF4rJUT3sb9fbgakEyrkgPH7UIBzg/YsfqikuFgba56
                awmqxinuaElnMIAkejEWOVt+8Rwu3WwJrfIxwYJOubv5vr8qhT/AQKM6WfxZSzwo
                JNu0FXWuDYi6LnPAvViH5ULy617uHjAimcs30cQhbIHsvm0m5hzkQiCeR7Csg1lw
                LDXWrzY0tM07+DKo7+N4ifuNRSzanLh+QBxh5z6ikixL8s36mLYp//Pye6kfLqCT
                VyvehQP5aTfLnnhqBbTFMXiJ7HqnheG5ezzevh55hM6fcA5ZwjUukCox2eRFekGk
                LhObNA5me0mrZJfQRsN5nXJQY6aYWwa9SG3YOYNw6DXwBdGqvOPbyALqfP2C2sJb
                UjWumDqtujWTI6cfSN01RpiyEGjkpTHCClguGYEQyVB1/OpaFs4R1+7vUIgtYf8/
                QnMFlEPVjjxOAToZpR9GTnfQXeWBIiGH/pR9hNiTrdZoQ0iy2+tzJOeRf1SktoA+
                naM8THLCV8Sg1Mw4J87VBp6iSNnpn86CcDaTmjvfliHjWbcM2pE38P1ZWrOZyGls
                QyYBNWNgVYkDOnXYukrZVP/u3oDYLdE41V4tC5h9Pmzb/CaIxw==
                -----END CERTIFICATE-----

                ### Japan Certification Services, Inc.

                === /C=JP/O=Japan Certification Services, Inc./CN=SecureSign RootCA11
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1 (0x1)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Apr  8 04:56:47 2009 GMT
                            Not After : Apr  8 04:56:47 2029 GMT
                        Subject: C=JP, O=Japan Certification Services, Inc., CN=SecureSign RootCA11
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                5B:F8:4D:4F:B2:A5:86:D4:3A:D2:F1:63:9A:A0:BE:09:F6:57:B7:DE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=3B:C4:9F:48:F8:F3:73:A0:9C:1E:BD:F8:5B:B1:C3:65:C7:D8:11:B3
                SHA256 Fingerprint=BF:0F:EE:FB:9E:3A:58:1A:D5:F9:E9:DB:75:89:98:57:43:D2:61:08:5C:4D:31:4F:6F:5D:72:59:AA:42:16:12
                -----BEGIN CERTIFICATE-----
                MIIDbTCCAlWgAwIBAgIBATANBgkqhkiG9w0BAQUFADBYMQswCQYDVQQGEwJKUDEr
                MCkGA1UEChMiSmFwYW4gQ2VydGlmaWNhdGlvbiBTZXJ2aWNlcywgSW5jLjEcMBoG
                A1UEAxMTU2VjdXJlU2lnbiBSb290Q0ExMTAeFw0wOTA0MDgwNDU2NDdaFw0yOTA0
                MDgwNDU2NDdaMFgxCzAJBgNVBAYTAkpQMSswKQYDVQQKEyJKYXBhbiBDZXJ0aWZp
                Y2F0aW9uIFNlcnZpY2VzLCBJbmMuMRwwGgYDVQQDExNTZWN1cmVTaWduIFJvb3RD
                QTExMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA/XeqpRyQBTvLTJsz
                i1oURaTnkBbR31fSIRCkF/3frNYfp+TbfPfs37gD2pRY/V1yfIw/XwFndBWW4wI8
                h9uuywGOwvNmxoVF9ALGOrVisq/6nL+k5tSAMJjzDbaTj6nU2DbysPyKyiyhFTOV
                MdrAG/LuYpmGYz+/3ZMqg6h2uRMft85OQoWPIucuGvKVCbIFtUROd6EgvanyTgp9
                UK31BQ1FT0Zx/Sg+U/sE2C3XZR1KG/rPO7AxmjVuyIsG0wCR8pQIZUyxNAYAeoni
                8McDWc/V1uinMrPmmECGxc0nEovMe863ETxiYAcjPitAbpSACW22s293bzUIUPsC
                h8U+iQIDAQABo0IwQDAdBgNVHQ4EFgQUW/hNT7KlhtQ60vFjmqC+CfZXt94wDgYD
                VR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEFBQADggEB
                AKChOBZmLqdWHyGcBvod7bkixTgm2E5P7KN/ed5GIaGHd48HCJqypMWvDzKYC3xm
                KbabfSVSSUOrTC4rbnpwrxYO4wJs+0LmGJ1F2FXI6Dvd5+H0LgscNFxsWEr7jIhQ
                X5Ucv+2rIrVls4W6ng+4reV6G4pQOh29Dbx7VFALuUKvVaAYga1lme++5Jy/xIWr
                QbJUb9wlze144o4MjQlJ3WN7WmmWAiGovVJZ6X01y8hSyn+B/tlr0/cR7SXf+Of5
                pPpyl4RTDaXQMhhRdlkUbA/r7F+AjHVDg8OFmP9Mni0N5HeDk061lgeLKBObjBmN
                QSdJQO7e5iNEOdyhIta6A/I=
                -----END CERTIFICATE-----

                ### Krajowa Izba Rozliczeniowa S.A.

                === /C=PL/O=Krajowa Izba Rozliczeniowa S.A./CN=SZAFIR ROOT CA2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            3e:8a:5d:07:ec:55:d2:32:d5:b7:e3:b6:5f:01:eb:2d:dc:e4:d6:e4
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct 19 07:43:30 2015 GMT
                            Not After : Oct 19 07:43:30 2035 GMT
                        Subject: C=PL, O=Krajowa Izba Rozliczeniowa S.A., CN=SZAFIR ROOT CA2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                2E:16:A9:4A:18:B5:CB:CC:F5:6F:50:F3:23:5F:F8:5D:E7:AC:F0:C8
                SHA1 Fingerprint=E2:52:FA:95:3F:ED:DB:24:60:BD:6E:28:F3:9C:CC:CF:5E:B3:3F:DE
                SHA256 Fingerprint=A1:33:9D:33:28:1A:0B:56:E5:57:D3:D3:2B:1C:E7:F9:36:7E:B0:94:BD:5F:A7:2A:7E:50:04:C8:DE:D7:CA:FE
                -----BEGIN CERTIFICATE-----
                MIIDcjCCAlqgAwIBAgIUPopdB+xV0jLVt+O2XwHrLdzk1uQwDQYJKoZIhvcNAQEL
                BQAwUTELMAkGA1UEBhMCUEwxKDAmBgNVBAoMH0tyYWpvd2EgSXpiYSBSb3psaWN6
                ZW5pb3dhIFMuQS4xGDAWBgNVBAMMD1NaQUZJUiBST09UIENBMjAeFw0xNTEwMTkw
                NzQzMzBaFw0zNTEwMTkwNzQzMzBaMFExCzAJBgNVBAYTAlBMMSgwJgYDVQQKDB9L
                cmFqb3dhIEl6YmEgUm96bGljemVuaW93YSBTLkEuMRgwFgYDVQQDDA9TWkFGSVIg
                Uk9PVCBDQTIwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC3vD5QqEvN
                QLXOYeeWyrSh2gwisPq1e3YAd4wLz32ohswmUeQgPYUM1ljj5/QqGJ3a0a4m7utT
                3PSQ1hNKDJA8w/Ta0o4NkjrcsbH/ON7Dui1fgLkCvUqdGw+0w8LBZwPd3BucPbOw
                3gAeqDRHu5rr/gsUvTaE2g0gv/pby6kWIK05YO4vdbbnl5z5Pv1+TW9NL++IDWr6
                3fE9biCloBK0TXC5ztdyO4mTp4CEHCdJckm1/zuVnsHMyAHs6A6KCpbns6aH5db5
                BSsNl0BwPLqsdVqc1U2dAgrSS5tmS0YHF2Wtn2yIANwiieDhZNRnvDF5YTy7ykHN
                XGoAyDw4jlivAgMBAAGjQjBAMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQD
                AgEGMB0GA1UdDgQWBBQuFqlKGLXLzPVvUPMjX/hd56zwyDANBgkqhkiG9w0BAQsF
                AAOCAQEAtXP4A9xZWx126aMqe5Aosk3AM0+qmrHUuOQn/6mWmc5G4G18TKI4pAZw
                8PRBEew/R40/cof5O/2kbytTAOD/OblqBw7rHRz2onKQy4I9EYKL0rufKq8h5mOG
                nXkZ7/e7DDWQw4rtTw/1zBLZpD67oPwglV9PJi8RI4NOdQcPv5vRtB3pEAT+ymCP
                oky4rc/hkA/NrgrHXXu3UNLUYfrVFdvXn4dRVOul4+vJhaAlIDf7js4MNIThPIGy
                d05DpYhfhmehPea0XGG2Ptv+tyjFogeutcrKjSoS75ftwjCkySp6+/NNIxuZMzSg
                LvWpCz/UXeHPhJ/iGcJfitYgHuNztw==
                -----END CERTIFICATE-----

                ### Microsec Ltd.

                === /C=HU/L=Budapest/O=Microsec Ltd./2.5.4.97=VATHU-23584497/CN=e-Szigno Root CA 2017
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            01:54:48:ef:21:fd:97:59:0d:f5:04:0a
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: Aug 22 12:07:06 2017 GMT
                            Not After : Aug 22 12:07:06 2042 GMT
                        Subject: C=HU, L=Budapest, O=Microsec Ltd./2.5.4.97=VATHU-23584497, CN=e-Szigno Root CA 2017
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                87:11:15:08:D1:AA:C1:78:0C:B1:AF:CE:C6:C9:90:EF:BF:30:04:C0
                            X509v3 Authority Key Identifier:
                                keyid:87:11:15:08:D1:AA:C1:78:0C:B1:AF:CE:C6:C9:90:EF:BF:30:04:C0

                SHA1 Fingerprint=89:D4:83:03:4F:9E:9A:48:80:5F:72:37:D4:A9:A6:EF:CB:7C:1F:D1
                SHA256 Fingerprint=BE:B0:0B:30:83:9B:9B:C3:2C:32:E4:44:79:05:95:06:41:F2:64:21:B1:5E:D0:89:19:8B:51:8A:E2:EA:1B:99
                -----BEGIN CERTIFICATE-----
                MIICQDCCAeWgAwIBAgIMAVRI7yH9l1kN9QQKMAoGCCqGSM49BAMCMHExCzAJBgNV
                BAYTAkhVMREwDwYDVQQHDAhCdWRhcGVzdDEWMBQGA1UECgwNTWljcm9zZWMgTHRk
                LjEXMBUGA1UEYQwOVkFUSFUtMjM1ODQ0OTcxHjAcBgNVBAMMFWUtU3ppZ25vIFJv
                b3QgQ0EgMjAxNzAeFw0xNzA4MjIxMjA3MDZaFw00MjA4MjIxMjA3MDZaMHExCzAJ
                BgNVBAYTAkhVMREwDwYDVQQHDAhCdWRhcGVzdDEWMBQGA1UECgwNTWljcm9zZWMg
                THRkLjEXMBUGA1UEYQwOVkFUSFUtMjM1ODQ0OTcxHjAcBgNVBAMMFWUtU3ppZ25v
                IFJvb3QgQ0EgMjAxNzBZMBMGByqGSM49AgEGCCqGSM49AwEHA0IABJbcPYrYsHtv
                xie+RJCxs1YVe45DJH0ahFnuY2iyxl6H0BVIHqiQrb1TotreOpCmYF9oMrWGQd+H
                Wyx7xf58etqjYzBhMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMB0G
                A1UdDgQWBBSHERUI0arBeAyxr87GyZDvvzAEwDAfBgNVHSMEGDAWgBSHERUI0arB
                eAyxr87GyZDvvzAEwDAKBggqhkjOPQQDAgNJADBGAiEAtVfd14pVCzbhhkT61Nlo
                jbjcI4qKDdQvfepz7L9NbKgCIQDLpbQS+ue16M9+k/zzNY9vTlp8tLxOsvxyqltZ
                +efcMQ==
                -----END CERTIFICATE-----
                === /C=HU/L=Budapest/O=Microsec Ltd./CN=Microsec e-Szigno Root CA 2009/emailAddress=info@e-szigno.hu
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            c2:7e:43:04:4e:47:3f:19
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jun 16 11:30:18 2009 GMT
                            Not After : Dec 30 11:30:18 2029 GMT
                        Subject: C=HU, L=Budapest, O=Microsec Ltd., CN=Microsec e-Szigno Root CA 2009/emailAddress=info@e-szigno.hu
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                CB:0F:C6:DF:42:43:CC:3D:CB:B5:48:23:A1:1A:7A:A6:2A:BB:34:68
                            X509v3 Authority Key Identifier:
                                keyid:CB:0F:C6:DF:42:43:CC:3D:CB:B5:48:23:A1:1A:7A:A6:2A:BB:34:68

                            X509v3 Subject Alternative Name:
                                email:info@e-szigno.hu
                SHA1 Fingerprint=89:DF:74:FE:5C:F4:0F:4A:80:F9:E3:37:7D:54:DA:91:E1:01:31:8E
                SHA256 Fingerprint=3C:5F:81:FE:A5:FA:B8:2C:64:BF:A2:EA:EC:AF:CD:E8:E0:77:FC:86:20:A7:CA:E5:37:16:3D:F3:6E:DB:F3:78
                -----BEGIN CERTIFICATE-----
                MIIECjCCAvKgAwIBAgIJAMJ+QwRORz8ZMA0GCSqGSIb3DQEBCwUAMIGCMQswCQYD
                VQQGEwJIVTERMA8GA1UEBwwIQnVkYXBlc3QxFjAUBgNVBAoMDU1pY3Jvc2VjIEx0
                ZC4xJzAlBgNVBAMMHk1pY3Jvc2VjIGUtU3ppZ25vIFJvb3QgQ0EgMjAwOTEfMB0G
                CSqGSIb3DQEJARYQaW5mb0BlLXN6aWduby5odTAeFw0wOTA2MTYxMTMwMThaFw0y
                OTEyMzAxMTMwMThaMIGCMQswCQYDVQQGEwJIVTERMA8GA1UEBwwIQnVkYXBlc3Qx
                FjAUBgNVBAoMDU1pY3Jvc2VjIEx0ZC4xJzAlBgNVBAMMHk1pY3Jvc2VjIGUtU3pp
                Z25vIFJvb3QgQ0EgMjAwOTEfMB0GCSqGSIb3DQEJARYQaW5mb0BlLXN6aWduby5o
                dTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAOn4j/NjrdqG2KfgQvvP
                kd6mJviZpWNwrZuuyjNAfW2WbqEORO7hE52UQlKavXWFdCyoDh2Tthi3jCyoz/tc
                cbna7P7ofo/kLx2yqHWH2Leh5TvPmUpG0IMZfcChEhyVbUr02MelTTMuhTlAdX4U
                fIASmFDHQWe4oIBhVKZsTh/gnQ4H6cm6M+f+wFUoLAKApxn1ntxVUwOXewdI/5n7
                N4okxFnMUBBjjqqpGrCEGob5X7uxUG6k0QrM1XF+H6cbfPVTbiJfyyvm1HxdrtbC
                xkzlBQHZ7Vf8wSN5/PrIJIOV87VqUQHQd9bpEqH5GoP7ghu5sJf0dgYzQ0mg/wu1
                +rUCAwEAAaOBgDB+MA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMB0G
                A1UdDgQWBBTLD8bfQkPMPcu1SCOhGnqmKrs0aDAfBgNVHSMEGDAWgBTLD8bfQkPM
                Pcu1SCOhGnqmKrs0aDAbBgNVHREEFDASgRBpbmZvQGUtc3ppZ25vLmh1MA0GCSqG
                SIb3DQEBCwUAA4IBAQDJ0Q5eLtXMs3w+y/w9/w0olZMEyL/azXm4Q5DwpL7v8u8h
                mLzU1F0G9u5C7DBsoKqpyvGvivo/C3NqPuouQH4frlRheesuCDfXI/OMn74dseGk
                ddug4lQUsbocKaQY9hK6ohQU4zE1yED/t+AFdlfBHFny+L/k7SViXITwfn4fs775
                tyERzAMBVnCnEJIeGzSBHq2cGsMEPO0CYdYeBvNfOofyK/FFh+U9rNHHV4S9a67c
                2Pm2G2JwCz02yULyMtd6YebS2z3PyKnJm9zbWETXbzivf3jTo60adbocwTZ8jx5t
                HMN1Rq41Bab2XD0h7lbwyYIiLXpUq3DDfSJlgnCW
                -----END CERTIFICATE-----

                ### Microsoft Corporation

                === /C=US/O=Microsoft Corporation/CN=Microsoft ECC Root Certificate Authority 2017
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            66:f2:3d:af:87:de:8b:b1:4a:ea:0c:57:31:01:c2:ec
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Dec 18 23:06:45 2019 GMT
                            Not After : Jul 18 23:16:04 2042 GMT
                        Subject: C=US, O=Microsoft Corporation, CN=Microsoft ECC Root Certificate Authority 2017
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                C8:CB:99:72:70:52:0C:F8:E6:BE:B2:04:57:29:2A:CF:42:10:ED:35
                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=99:9A:64:C3:7F:F4:7D:9F:AB:95:F1:47:69:89:14:60:EE:C4:C3:C5
                SHA256 Fingerprint=35:8D:F3:9D:76:4A:F9:E1:B7:66:E9:C9:72:DF:35:2E:E1:5C:FA:C2:27:AF:6A:D1:D7:0E:8E:4A:6E:DC:BA:02
                -----BEGIN CERTIFICATE-----
                MIICWTCCAd+gAwIBAgIQZvI9r4fei7FK6gxXMQHC7DAKBggqhkjOPQQDAzBlMQsw
                CQYDVQQGEwJVUzEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMTYwNAYD
                VQQDEy1NaWNyb3NvZnQgRUNDIFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9yaXR5IDIw
                MTcwHhcNMTkxMjE4MjMwNjQ1WhcNNDIwNzE4MjMxNjA0WjBlMQswCQYDVQQGEwJV
                UzEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMTYwNAYDVQQDEy1NaWNy
                b3NvZnQgRUNDIFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9yaXR5IDIwMTcwdjAQBgcq
                hkjOPQIBBgUrgQQAIgNiAATUvD0CQnVBEyPNgASGAlEvaqiBYgtlzPbKnR5vSmZR
                ogPZnZH6thaxjG7efM3beaYvzrvOcS/lpaso7GMEZpn4+vKTEAXhgShC48Zo9OYb
                hGBKia/teQ87zvH2RPUBeMCjVDBSMA4GA1UdDwEB/wQEAwIBhjAPBgNVHRMBAf8E
                BTADAQH/MB0GA1UdDgQWBBTIy5lycFIM+Oa+sgRXKSrPQhDtNTAQBgkrBgEEAYI3
                FQEEAwIBADAKBggqhkjOPQQDAwNoADBlAjBY8k3qDPlfXu5gKcs68tvWMoQZP3zV
                L8KxzJOuULsJMsbG7X7JNpQS5GiFBqIb0C8CMQCZ6Ra0DvpWSNSkMBaReNtUjGUB
                iudQZsIxtzm6uBoiB078a1QWIP8rtedMDE2mT3M=
                -----END CERTIFICATE-----
                === /C=US/O=Microsoft Corporation/CN=Microsoft RSA Root Certificate Authority 2017
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            1e:d3:97:09:5f:d8:b4:b3:47:70:1e:aa:be:7f:45:b3
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Dec 18 22:51:22 2019 GMT
                            Not After : Jul 18 23:00:23 2042 GMT
                        Subject: C=US, O=Microsoft Corporation, CN=Microsoft RSA Root Certificate Authority 2017
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                09:CB:59:7F:86:B2:70:8F:1A:C3:39:E3:C0:D9:E9:BF:BB:4D:B2:23
                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=73:A5:E6:4A:3B:FF:83:16:FF:0E:DC:CC:61:8A:90:6E:4E:AE:4D:74
                SHA256 Fingerprint=C7:41:F7:0F:4B:2A:8D:88:BF:2E:71:C1:41:22:EF:53:EF:10:EB:A0:CF:A5:E6:4C:FA:20:F4:18:85:30:73:E0
                -----BEGIN CERTIFICATE-----
                MIIFqDCCA5CgAwIBAgIQHtOXCV/YtLNHcB6qvn9FszANBgkqhkiG9w0BAQwFADBl
                MQswCQYDVQQGEwJVUzEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMTYw
                NAYDVQQDEy1NaWNyb3NvZnQgUlNBIFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9yaXR5
                IDIwMTcwHhcNMTkxMjE4MjI1MTIyWhcNNDIwNzE4MjMwMDIzWjBlMQswCQYDVQQG
                EwJVUzEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMTYwNAYDVQQDEy1N
                aWNyb3NvZnQgUlNBIFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9yaXR5IDIwMTcwggIi
                MA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDKW76UM4wplZEWCpW9R2LBifOZ
                Nt9GkMml7Xhqb0eRaPgnZ1AzHaGm++DlQ6OEAlcBXZxIQIJTELy/xztokLaCLeX0
                ZdDMbRnMlfl7rEqUrQ7eS0MdhweSE5CAg2Q1OQT85elss7YfUJQ4ZVBcF0a5toW1
                HLUX6NZFndiyJrDKxHBKrmCk3bPZ7Pw71VdyvD/IybLeS2v4I2wDwAW9lcfNcztm
                gGTjGqwu+UcF8ga2m3P1eDNbx6H7JyqhtJqRjJHTOoI+dkC0zVJhUXAoP8XFWvLJ
                jEm7FFtNyP9nTUwSlq31/niol4fX/V4ggNyhSyL71Imtus5Hl0dVe49FyGcohJUc
                aDDv70ngNXtk55iwlNpNhTs+VcQor1fznhPbRiefHqJeRIOkpcrVE7NLP8TjwuaG
                YaRSMLl6IE9vDzhTyzMMEyuP1pq9KsgtsRx9S1HKR9FIJ3Jdh+vVReZIZZ2vUpC6
                W6IYZVcSn2i51BVrlMRpIpj0M+Dt+VGOQVDJNE92kKz8OMHY4Xu54+OU4UZpyw4K
                UGsTuqwPN1q3ErWQgR5WrlcihtnJ0tHXUeOrO8ZV/R4O03QK0dqq6mm4lyiPSMQH
                +FJDOvTKVTUssKZqwJz58oHhEmrARdlns87/I6KJClTUFLkqqNfs+avNJVgyeY+Q
                W5g5xAgGwax/Dj0ApQIDAQABo1QwUjAOBgNVHQ8BAf8EBAMCAYYwDwYDVR0TAQH/
                BAUwAwEB/zAdBgNVHQ4EFgQUCctZf4aycI8awznjwNnpv7tNsiMwEAYJKwYBBAGC
                NxUBBAMCAQAwDQYJKoZIhvcNAQEMBQADggIBAKyvPl3CEZaJjqPnktaXFbgToqZC
                LgLNFgVZJ8og6Lq46BrsTaiXVq5lQ7GPAJtSzVXNUzltYkyLDVt8LkS/gxCP81OC
                gMNPOsduET/m4xaRhPtthH80dK2Jp86519efhGSSvpWhrQlTM93uCupKUY5vVau6
                tZRGrox/2KJQJWVggEbbMwSubLWYdFQl3JPk+ONVFT24bcMKpBLBaYVu32TxU5nh
                SnUgnZUP5NbcA/FZGOhHibJXWpS2qdgXKxdJ5XbLwVaZOjex/2kskZGT4d9Mozd2
                TaGf+G0eHdP67Pv0RR0Tbc/3WeUiJ3IrhvNXuzDtJE3cfVa7o7P4NHmJweDyAmH3
                pvwPuxwXC65B2Xy9J6P9LjrRk5Sxcx0ki69bIImtt2dmefU6xqaWM/5TkshGsRGR
                xpl/j8nWZjEgQRCHLQzWwa80mMpkg/sTV9HB8Dx6jKXB/ZUhoHHBk2dxEuqPiApp
                GWSZI1b7rCoucL5mxAyE7+WL85MB+GqQk2dLsmijtWKP6T+MejteD+eMuMZ87zf9
                dOLITzNy4ZQ5bb0Sr74MTnB8G2+NszKTc0QWbej09+CVgI+WXTik9KveCjCHk9hN
                AHFiRSdLOkKEW39lt2c0Ui2cFmuqqNh7o0JMcccMyj6D5KbvtwEwXlGjefVwaaZB
                RA+GsCyRxj3qrg+E
                -----END CERTIFICATE-----

                ### NAVER BUSINESS PLATFORM Corp.

                === /C=KR/O=NAVER BUSINESS PLATFORM Corp./CN=NAVER Global Root Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            01:94:30:1e:a2:0b:dd:f5:c5:33:2a:b1:43:44:71:f8:d6:50:4d:0d
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Aug 18 08:58:42 2017 GMT
                            Not After : Aug 18 23:59:59 2037 GMT
                        Subject: C=KR, O=NAVER BUSINESS PLATFORM Corp., CN=NAVER Global Root Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                D2:9F:88:DF:A1:CD:2C:BD:EC:F5:3B:01:01:93:33:27:B2:EB:60:4B
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=8F:6B:F2:A9:27:4A:DA:14:A0:C4:F4:8E:61:27:F9:C0:1E:78:5D:D1
                SHA256 Fingerprint=88:F4:38:DC:F8:FF:D1:FA:8F:42:91:15:FF:E5:F8:2A:E1:E0:6E:0C:70:C3:75:FA:AD:71:7B:34:A4:9E:72:65
                -----BEGIN CERTIFICATE-----
                MIIFojCCA4qgAwIBAgIUAZQwHqIL3fXFMyqxQ0Rx+NZQTQ0wDQYJKoZIhvcNAQEM
                BQAwaTELMAkGA1UEBhMCS1IxJjAkBgNVBAoMHU5BVkVSIEJVU0lORVNTIFBMQVRG
                T1JNIENvcnAuMTIwMAYDVQQDDClOQVZFUiBHbG9iYWwgUm9vdCBDZXJ0aWZpY2F0
                aW9uIEF1dGhvcml0eTAeFw0xNzA4MTgwODU4NDJaFw0zNzA4MTgyMzU5NTlaMGkx
                CzAJBgNVBAYTAktSMSYwJAYDVQQKDB1OQVZFUiBCVVNJTkVTUyBQTEFURk9STSBD
                b3JwLjEyMDAGA1UEAwwpTkFWRVIgR2xvYmFsIFJvb3QgQ2VydGlmaWNhdGlvbiBB
                dXRob3JpdHkwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQC21PGTXLVA
                iQqrDZBbUGOukJR0F0Vy1ntlWilLp1agS7gvQnXp2XskWjFlqxcX0TM62RHcQDaH
                38dq6SZeWYp34+hInDEW+j6RscrJo+KfziFTowI2MMtSAuXaMl3Dxeb57hHHi8lE
                HoSTGEq0n+USZGnQJoViAbbJAh2+g1G7XNr4rRVqmfeSVPc0W+m/6imBEtRTkZaz
                kVrd/pBzKPswRrXKCAfHcXLJZtM0l/aM9BhK4dA9WkW2aacp+yPOiNgSnABIqKYP
                szuSjXEOdMWLyEz59JuOuDxp7W87UC9Y7cSw0BwbagzivESq2M0UXZR4Yb8Obtoq
                vC8MC3GmsxY/nOb5zJ9TNeIDoKAYv7vxvvTWjIcNQvcGufFt7QSUqP620wbGQGHf
                nZ3zVHbOUzoBppJB7ASjjw2i1QnK1sua8e9DXcCrpUHPXFNwcMmIpi3Ua2FzUCaG
                YQ5fG8Ir4ozVu53BA0K6lNpfqbDKzE0K70dpAy8i+/Eozr9dUGWokG2zdLAIx6yo
                0es+nPxdGoMuK8u180SdOqcXYZaicdNwlhVNt0xz7hlcxVs+Qf6sdWA7G2POAN3a
                CJBitOUt7kinaxeZVL6HSuOpXgRM6xBtVNbv8ejyYhbLgGvtPe31HzClrkvJE+2K
                AQHJuFFYwGY6sWZLxNUxAmLpdIQM201GLQIDAQABo0IwQDAdBgNVHQ4EFgQU0p+I
                36HNLL3s9TsBAZMzJ7LrYEswDgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMB
                Af8wDQYJKoZIhvcNAQEMBQADggIBADLKgLOdPVQG3dLSLvCkASELZ0jKbY7gyKoN
                qo0hV4/GPnrK21HUUrPUloSlWGB/5QuOH/XcChWB5Tu2tyIvCZwTFrFsDDUIbatj
                cu3cvuzHV+YwIHHW1xDBE1UBjCpD5EHxzzp6U5LOogMFDTjfArsQLtk70pt6wKGm
                +LUx5vR1yblTmXVHIloUFcd4G7ad6Qz4G3bxhYTeodoS76TiEJd6eN4MUZeoIUCL
                hr0N8F5OSza7OyAfikJW4Qsav3vQIkMsRIz75Sq0bBwcupTgE34h5prCy8VCZLQe
                lHsIJchxzIdFV4XTnyliIoNRlwAYl3dqmJLJfGBs32x9SuRwTMKeuB330DTHD8z7
                p/8Dvq1wkNoL3chtl1+afwkyQf3NosxabUzyqkn+Zvjp2DXrDige7kgvOtB5CTh8
                piKCk5XQA76+AqAF3SAi428diDRgxuYKuQl1C/AH6GmWNcf7I4GOODm4RStDeKLR
                LBT/DShycpWbXgnbiUSYqqFJu3FS8r/2/yehNq+4tneI3TqkbZs0kNwUXTC/t+sX
                5Ie3cdCh13cV1ELX8vMxmV2b3RZtP+oGI/hGoiLtk/bdmuYqh7GYVPEi92tF4+KO
                dh2ajcQGjTa3FPOdVGm3jjzVpG2Tgbet9r1ke8LJaDmgkpzNNIaRkPpkUZ3+/uul
                9XXeifdy
                -----END CERTIFICATE-----

                ### NetLock Kft.

                === /C=HU/L=Budapest/O=NetLock Kft./OU=Tan\xC3\xBAs\xC3\xADtv\xC3\xA1nykiad\xC3\xB3k (Certification Services)/CN=NetLock Arany (Class Gold) F\xC5\x91tan\xC3\xBAs\xC3\xADtv\xC3\xA1ny
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 80544274841616 (0x49412ce40010)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Dec 11 15:08:21 2008 GMT
                            Not After : Dec  6 15:08:21 2028 GMT
                        Subject: C=HU, L=Budapest, O=NetLock Kft., OU=Tan\xC3\xBAs\xC3\xADtv\xC3\xA1nykiad\xC3\xB3k (Certification Services), CN=NetLock Arany (Class Gold) F\xC5\x91tan\xC3\xBAs\xC3\xADtv\xC3\xA1ny
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE, pathlen:4
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                CC:FA:67:93:F0:B6:B8:D0:A5:C0:1E:F3:53:FD:8C:53:DF:83:D7:96
                SHA1 Fingerprint=06:08:3F:59:3F:15:A1:04:A0:69:A4:6B:A9:03:D0:06:B7:97:09:91
                SHA256 Fingerprint=6C:61:DA:C3:A2:DE:F0:31:50:6B:E0:36:D2:A6:FE:40:19:94:FB:D1:3D:F9:C8:D4:66:59:92:74:C4:46:EC:98
                -----BEGIN CERTIFICATE-----
                MIIEFTCCAv2gAwIBAgIGSUEs5AAQMA0GCSqGSIb3DQEBCwUAMIGnMQswCQYDVQQG
                EwJIVTERMA8GA1UEBwwIQnVkYXBlc3QxFTATBgNVBAoMDE5ldExvY2sgS2Z0LjE3
                MDUGA1UECwwuVGFuw7pzw610dsOhbnlraWFkw7NrIChDZXJ0aWZpY2F0aW9uIFNl
                cnZpY2VzKTE1MDMGA1UEAwwsTmV0TG9jayBBcmFueSAoQ2xhc3MgR29sZCkgRsWR
                dGFuw7pzw610dsOhbnkwHhcNMDgxMjExMTUwODIxWhcNMjgxMjA2MTUwODIxWjCB
                pzELMAkGA1UEBhMCSFUxETAPBgNVBAcMCEJ1ZGFwZXN0MRUwEwYDVQQKDAxOZXRM
                b2NrIEtmdC4xNzA1BgNVBAsMLlRhbsO6c8OtdHbDoW55a2lhZMOzayAoQ2VydGlm
                aWNhdGlvbiBTZXJ2aWNlcykxNTAzBgNVBAMMLE5ldExvY2sgQXJhbnkgKENsYXNz
                IEdvbGQpIEbFkXRhbsO6c8OtdHbDoW55MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8A
                MIIBCgKCAQEAxCRec75LbRTDofTjl5Bu0jBFHjzuZ9lk4BqKf8owyoPjIMHj9DrT
                lF8afFttvzBPhCf2nx9JvMaZCpDyD/V/Q4Q3Y1GLeqVw/HpYzY6b7cNGbIRwXdrz
                AZAj/E4wqX7hJ2Pn7WQ8oLjJM2P+FpD/sLj916jAwJRDC7bVWaaeVtAkH3B5r9s5
                VA1lddkVQZQBr17s9o3x/61k/iCa11zr/qYfCGSji3ZVrR47KGAuhyXoqq8fxmRG
                ILdwfzzeSNuWU7c5d+Qa4scWhHaXWy+7GRWF+GmF9ZmnqfI0p6m2pgP8b4Y9VHx2
                BJtr+UBdADTHLpl1neWIA6pN+APSQnbAGwIDAKiLo0UwQzASBgNVHRMBAf8ECDAG
                AQH/AgEEMA4GA1UdDwEB/wQEAwIBBjAdBgNVHQ4EFgQUzPpnk/C2uNClwB7zU/2M
                U9+D15YwDQYJKoZIhvcNAQELBQADggEBAKt/7hwWqZw8UQCgwBEIBaeZ5m8BiFRh
                bvG5GK1Krf6BQCOUL/t1fC8oS2IkgYIL9WHxHG64YTjrgfpioTtaYtOUZcTh5m2C
                +C8lcLIhJsFyUR+MLMOEkMNaj7rP9KdlpeuY0fsFskZ1FSNqb4VjMIDw1Z4fKRzC
                bLBQWV2QWzuoDTDPv31/zvGdg73JRm4gpvlhUbohL3u+pRVjodSVh/GeufOJ8z2F
                uLjbvrW5KfnaNwUASZQDhETnv0Mxz3WLJdH0pmT1kvarBes96aULNmLazAZfNou2
                XjG4Kvte9nHfRCaexOYNkbQudZWAUWpLMKawYqGT8ZvYzsRjdT9ZR7E=
                -----END CERTIFICATE-----

                ### Network Solutions L.L.C.

                === /C=US/O=Network Solutions L.L.C./CN=Network Solutions Certificate Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            57:cb:33:6f:c2:5c:16:e6:47:16:17:e3:90:31:68:e0
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec  1 00:00:00 2006 GMT
                            Not After : Dec 31 23:59:59 2029 GMT
                        Subject: C=US, O=Network Solutions L.L.C., CN=Network Solutions Certificate Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                21:30:C9:FB:00:D7:4E:98:DA:87:AA:2A:D0:A7:2E:B1:40:31:A7:4C
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.netsolssl.com/NetworkSolutionsCertificateAuthority.crl

                SHA1 Fingerprint=74:F8:A3:C3:EF:E7:B3:90:06:4B:83:90:3C:21:64:60:20:E5:DF:CE
                SHA256 Fingerprint=15:F0:BA:00:A3:AC:7A:F3:AC:88:4C:07:2B:10:11:A0:77:BD:77:C0:97:F4:01:64:B2:F8:59:8A:BD:83:86:0C
                -----BEGIN CERTIFICATE-----
                MIID5jCCAs6gAwIBAgIQV8szb8JcFuZHFhfjkDFo4DANBgkqhkiG9w0BAQUFADBi
                MQswCQYDVQQGEwJVUzEhMB8GA1UEChMYTmV0d29yayBTb2x1dGlvbnMgTC5MLkMu
                MTAwLgYDVQQDEydOZXR3b3JrIFNvbHV0aW9ucyBDZXJ0aWZpY2F0ZSBBdXRob3Jp
                dHkwHhcNMDYxMjAxMDAwMDAwWhcNMjkxMjMxMjM1OTU5WjBiMQswCQYDVQQGEwJV
                UzEhMB8GA1UEChMYTmV0d29yayBTb2x1dGlvbnMgTC5MLkMuMTAwLgYDVQQDEydO
                ZXR3b3JrIFNvbHV0aW9ucyBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkwggEiMA0GCSqG
                SIb3DQEBAQUAA4IBDwAwggEKAoIBAQDkvH6SMG3G2I4rC7xGzuAnlt7e+foS0zwz
                c7MEL7xxjOWftiJgPl9dzgn/ggwbmlFQGiaJ3dVhXRncEg8tCqJDXRfQNJIg6nPP
                OCwGJgl6cvf6UDL4wpPTaaIjzkGxzOTVHzbRijr4jGPiFFlp7Q3Tf2vouAPlT2rl
                mGNpSAW+Lv8ztumXWWn4Zxmuk2GWRBXTcrA/vGp97Eh/jcOrqnErU2lBUzS1sLnF
                BgrEsEX1QV1uiUV7PTsmjHTC5dLRfbIR1PtYMiKagMnc/Qzpf14Dl847ABSHJ3A4
                qY5usyd2mFHgBeMhqxrVhSI8KbWaFsWAqPS7azCPL0YCorEMIuDTAgMBAAGjgZcw
                gZQwHQYDVR0OBBYEFCEwyfsA106Y2oeqKtCnLrFAMadMMA4GA1UdDwEB/wQEAwIB
                BjAPBgNVHRMBAf8EBTADAQH/MFIGA1UdHwRLMEkwR6BFoEOGQWh0dHA6Ly9jcmwu
                bmV0c29sc3NsLmNvbS9OZXR3b3JrU29sdXRpb25zQ2VydGlmaWNhdGVBdXRob3Jp
                dHkuY3JsMA0GCSqGSIb3DQEBBQUAA4IBAQC7rkvnt1frf6ott3NHhWrB5KUd5Oc8
                6fRZZXe1eltajSU24HqXLjjAV2CDmAaDn7l2em5Q4LqILPxFzBiwmZVRDuwduIj/
                h1AcgsLj4DKAv6ALR8jDMe+ZZzKATxcheQxpXN5eNK4CtSbqUN9/GGUsyfJj4akH
                /nxxH2szJGoeBfcFaMBqEssuXmHLrijTfsK0ZpEmXzwuJF/LWA/rKOyvEZbz3Htv
                wKeI8lN3s2Berq4o2jUsbzRF0ybh3uxbTydrFny9RAQYgrOJeRcQcT16ohZO9QHN
                pGxlaKFJdlxDydi8NmdspZS11My5vWo1ViHe2MPr+8ukYEywVaCge1ey
                -----END CERTIFICATE-----

                ### QuoVadis Limited

                === /C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 1 G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            78:58:5f:2e:ad:2c:19:4b:e3:37:07:35:34:13:28:b5:96:d4:65:93
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jan 12 17:27:44 2012 GMT
                            Not After : Jan 12 17:27:44 2042 GMT
                        Subject: C=BM, O=QuoVadis Limited, CN=QuoVadis Root CA 1 G3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                A3:97:D6:F3:5E:A2:10:E1:AB:45:9F:3C:17:64:3C:EE:01:70:9C:CC
                SHA1 Fingerprint=1B:8E:EA:57:96:29:1A:C9:39:EA:B8:0A:81:1A:73:73:C0:93:79:67
                SHA256 Fingerprint=8A:86:6F:D1:B2:76:B5:7E:57:8E:92:1C:65:82:8A:2B:ED:58:E9:F2:F2:88:05:41:34:B7:F1:F4:BF:C9:CC:74
                -----BEGIN CERTIFICATE-----
                MIIFYDCCA0igAwIBAgIUeFhfLq0sGUvjNwc1NBMotZbUZZMwDQYJKoZIhvcNAQEL
                BQAwSDELMAkGA1UEBhMCQk0xGTAXBgNVBAoTEFF1b1ZhZGlzIExpbWl0ZWQxHjAc
                BgNVBAMTFVF1b1ZhZGlzIFJvb3QgQ0EgMSBHMzAeFw0xMjAxMTIxNzI3NDRaFw00
                MjAxMTIxNzI3NDRaMEgxCzAJBgNVBAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBM
                aW1pdGVkMR4wHAYDVQQDExVRdW9WYWRpcyBSb290IENBIDEgRzMwggIiMA0GCSqG
                SIb3DQEBAQUAA4ICDwAwggIKAoICAQCgvlAQjunybEC0BJyFuTHK3C3kEakEPBtV
                wedYMB0ktMPvhd6MLOHBPd+C5k+tR4ds7FtJwUrVu4/sh6x/gpqG7D0DmVIB0jWe
                rNrwU8lmPNSsAgHaJNM7qAJGr6Qc4/hzWHa39g6QDbXwz8z6+cZM5cOGMAqNF341
                68Xfuw6cwI2H44g4hWf6Pser4BOcBRiYz5P1sZK0/CPTz9XEJ0ngnjybCKOLXSoh
                4Pw5qlPafX7PGglTvF0FBM+hSo+LdoINofjSxxR3W5A2B4GbPgb6Ul5jxaYA/qXp
                UhtStZI5cgMJYr2wYBZupt0lwgNm3fME0UDiTouG9G/lg6AnhF4EwfWQvTA9xO+o
                abw4m6SkltFi2mnAAZauy8RRNOoMqv8hjlmPSlzkYZqn0ukqeI1RPToV7qJZjqlc
                3sX5kCLliEVx3ZGZbHqfPT2YfF72vhZooF6uCyP8Wg+qInYtyaEQHeTTRCOQiJ/G
                KubX9ZqzWB4vMIkIG1SitZgj7Ah3HJVdYdHLiZxfokqRmu8hqkkWCKi9YSgxyXSt
                hfbZxbGL0eUQMk1fiyA6PEkfM4VZDdvLCXVDaXP7a3F98N/ETH3Goy7IlXnLc6KO
                Tk0k+17kBL5yG6YnLUlamXrXXAkgt3+UuU/xDRxeiEIbEbfnkduebPRq34wGmAOt
                zCjvpUfzUwIDAQABo0IwQDAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIB
                BjAdBgNVHQ4EFgQUo5fW816iEOGrRZ88F2Q87gFwnMwwDQYJKoZIhvcNAQELBQAD
                ggIBABj6W3X8PnrHX3fHyt/PX8MSxEBd1DKquGrX1RUVRpgjpeaQWxiZTOOtQqOC
                MTaIzen7xASWSIsBx40Bz1szBpZGZnQdT+3Btrm0DWHMY37XLneMlhwqI2hrhVd2
                cDMT/uFPpiN3GPoajOi9ZcnPP/TJF9zrx7zABC4tRi9pZsMbj/7sPtPKlL92CiUN
                qXsCHKnQO18LwIE6PWThv6ctTr1NxNgpxiIY0MWscgKCP6o6ojoilzHdCGPDdRS5
                YCgtW2jgFqlmgiNR9etT2DGbe+m3nUvriBbP+V04ikkwj+3x6xn0dxoxGE1nVGwv
                b2X52z3sIexe9PSLymBlVNFxZPT5pqOBMzYzcfCkeF9OrYMh3jRJjehZrJ3ydlo2
                8hP0r+AJx2EqbPfgna67hkooby7utHnNkDPDs3b69fBsnQGQ+p6Q9pxyz0fawx/k
                NSBT8lTR32GDpgLiJTjehTItXnOQUl1CxM49S+H5GYQd1aJQzEH7QRTDvdbJWqNj
                ZgKAvQU6O0ec7AAmTPWIUb+oI38YB7AL7YsmoWTTYUrrXJ/es69nA7Mf3W1daWhp
                q1467HxpvMc7hU6eFbm0FU/DlXpY18ls6Wy58yljXrQs8C097Vpl4KlbQMJImYFt
                nh8GKjwStIsPm6Ik8KaN1nrgS7ZklmOVhMJKzRwuJIczYOXD
                -----END CERTIFICATE-----
                === /C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1289 (0x509)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov 24 18:27:00 2006 GMT
                            Not After : Nov 24 18:23:33 2031 GMT
                        Subject: C=BM, O=QuoVadis Limited, CN=QuoVadis Root CA 2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage:
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                1A:84:62:BC:48:4C:33:25:04:D4:EE:D0:F6:03:C4:19:46:D1:94:6B
                            X509v3 Authority Key Identifier:
                                keyid:1A:84:62:BC:48:4C:33:25:04:D4:EE:D0:F6:03:C4:19:46:D1:94:6B
                                DirName:/C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 2
                                serial:05:09

                SHA1 Fingerprint=CA:3A:FB:CF:12:40:36:4B:44:B2:16:20:88:80:48:39:19:93:7C:F7
                SHA256 Fingerprint=85:A0:DD:7D:D7:20:AD:B7:FF:05:F8:3D:54:2B:20:9D:C7:FF:45:28:F7:D6:77:B1:83:89:FE:A5:E5:C4:9E:86
                -----BEGIN CERTIFICATE-----
                MIIFtzCCA5+gAwIBAgICBQkwDQYJKoZIhvcNAQEFBQAwRTELMAkGA1UEBhMCQk0x
                GTAXBgNVBAoTEFF1b1ZhZGlzIExpbWl0ZWQxGzAZBgNVBAMTElF1b1ZhZGlzIFJv
                b3QgQ0EgMjAeFw0wNjExMjQxODI3MDBaFw0zMTExMjQxODIzMzNaMEUxCzAJBgNV
                BAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBMaW1pdGVkMRswGQYDVQQDExJRdW9W
                YWRpcyBSb290IENBIDIwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQCa
                GMpLlA0ALa8DKYrwD4HIrkwZhR0In6spRIXzL4GtMh6QRr+jhiYaHv5+HBg6XJxg
                Fyo6dIMzMH1hVBHL7avg5tKifvVrbxi3Cgst/ek+7wrGsxDp3MJGF/hd/aTa/55J
                WpzmM+Yklvc/ulsrHHo1wtZn/qtmUIttKGAr79dgw8eTvI02kfN/+NsRE8Scd3bB
                rrcCaoF6qUWD4gXmuVbBlDePSHFjIuwXZQeVikvfj8ZaCuWw419eaxGrDPmF60Tp
                +ARz8un+XJiM9XOva7R+zdRcAitMOeGylZUtQofX1bOQQ7dsE/He3fbE+Ik/0XX1
                ksOR1YqI0JDs3G3eicJlcZaLDQP9nL9bFqyS2+r+eXyt66/3FsvbzSUr5R/7mp/i
                Ucw6UwxI5g69ybR2BlLmEROFcmMDBOAENisgGQLodKcftslWZvB1JdxnwQ5hYIiz
                PtGo/KPaHbDRsSNU30R2be1B2MGyIrZTHN81Hdyhdyox5C315eXbyOD/5YDXC2Og
                /zOhD7osFRXql7PSorW+8oyWHhqPHWykYTe5hnMz15eWniN9gqRMgeKh0bpnX5UH
                oycR7hYQe7xFSkyyBNKr79X9DFHOUGoIMfmR2gyPZFwDwzqLID9ujWc9Otb+fVuI
                yV77zGHcizN300QyNQliBJIWENieJ0f7OyHj+OsdWwIDAQABo4GwMIGtMA8GA1Ud
                EwEB/wQFMAMBAf8wCwYDVR0PBAQDAgEGMB0GA1UdDgQWBBQahGK8SEwzJQTU7tD2
                A8QZRtGUazBuBgNVHSMEZzBlgBQahGK8SEwzJQTU7tD2A8QZRtGUa6FJpEcwRTEL
                MAkGA1UEBhMCQk0xGTAXBgNVBAoTEFF1b1ZhZGlzIExpbWl0ZWQxGzAZBgNVBAMT
                ElF1b1ZhZGlzIFJvb3QgQ0EgMoICBQkwDQYJKoZIhvcNAQEFBQADggIBAD4KFk2f
                BluornFdLwUvZ+YTRYPENvbzwCYMDbVHZF34tHLJRqUDGCdViXh9duqWNIAXINzn
                g/iN/Ae42l9NLmeyhP3ZRPx3UIHmfLTJDQtyU/h2BwdBR5YM++CCJpNVjP4iH2Bl
                fF/nJrP3MpCYUNQ3cVX2kiF495V5+vgtJodmVjB3pjd4M1IQWK4/YY7yarHvGH5K
                WWPKjaJW1acvvFYfzznB4vsKqBUsfU16Y8Zsl0Q80m/DShcK+JDSV6IZUaUtl0Ha
                B0+pUNqQjZRG4T7wlP0QADj1O+hA4bRuVhogzG9Yje0uRY/W6ZM/57Es3zrWIozc
                hLsib9D45MY56QSIPMO661V6bYCZJPVsAfv4l7CUW+v90m/xd2gNNWQjrLhVoQPR
                TUIZ3Ph1WVaj+ahJefivDrkRoHy3au000LYmYjgahwz46P0u05B/B5EqHdZ+XIWD
                mbA4CD/pXvk1B+TJYm5Xf6dQlfe6yJvmjqIBxdZmv3lh8zwc4bmCXF2gw+nYSL0Z
                ohEUGW6yhhtoPkg3Goi3XZZenMfvJ2II4pEZXNLxId26F0KCl3GBUzGpn/Z9Yr9y
                4aOTHcyKJloJONDO1w2AFrR4pTqHTI2KpdVGl/IsELm8VCLAAVBpQ570su9t+Oza
                8eOx79+Rj1QqCyXBJhnEUhAFZdWCEOrCMc0u
                -----END CERTIFICATE-----
                === /C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 2 G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            44:57:34:24:5b:81:89:9b:35:f2:ce:b8:2b:3b:5b:a7:26:f0:75:28
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jan 12 18:59:32 2012 GMT
                            Not After : Jan 12 18:59:32 2042 GMT
                        Subject: C=BM, O=QuoVadis Limited, CN=QuoVadis Root CA 2 G3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                ED:E7:6F:76:5A:BF:60:EC:49:5B:C6:A5:77:BB:72:16:71:9B:C4:3D
                SHA1 Fingerprint=09:3C:61:F3:8B:8B:DC:7D:55:DF:75:38:02:05:00:E1:25:F5:C8:36
                SHA256 Fingerprint=8F:E4:FB:0A:F9:3A:4D:0D:67:DB:0B:EB:B2:3E:37:C7:1B:F3:25:DC:BC:DD:24:0E:A0:4D:AF:58:B4:7E:18:40
                -----BEGIN CERTIFICATE-----
                MIIFYDCCA0igAwIBAgIURFc0JFuBiZs18s64KztbpybwdSgwDQYJKoZIhvcNAQEL
                BQAwSDELMAkGA1UEBhMCQk0xGTAXBgNVBAoTEFF1b1ZhZGlzIExpbWl0ZWQxHjAc
                BgNVBAMTFVF1b1ZhZGlzIFJvb3QgQ0EgMiBHMzAeFw0xMjAxMTIxODU5MzJaFw00
                MjAxMTIxODU5MzJaMEgxCzAJBgNVBAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBM
                aW1pdGVkMR4wHAYDVQQDExVRdW9WYWRpcyBSb290IENBIDIgRzMwggIiMA0GCSqG
                SIb3DQEBAQUAA4ICDwAwggIKAoICAQChriWyARjcV4g/Ruv5r+LrI3HimtFhZiFf
                qq8nUeVuGxbULX1QsFN3vXg6YOJkApt8hpvWGo6t/x8Vf9WVHhLL5hSEBMHfNrMW
                n4rjyduYNM7YMxcoRvynyfDStNVNCXJJ+fKH46nafaF9a7I6JaltUkSs+L5u+9ym
                c5GQYaYDFCDy54ejiK2toIz/pgslUiXnFgHVy7g1gQyjO/Dh4fxaXc6AcW34Sas+
                O7q414AB+6XrW7PFXmAqMaCvN+ggOp+oMiwMzAkd056OXbxMmO7FGmh77FOm6RQ1
                o9/NgJ8MSPsc9PG/Srj61YxxSscfrf5BmrODXfKEVu+lV0POKa2Mq1W/xPtbAd0j
                IaFYAI7D0GoT7RPjEiuA3GfmlbLNHiJuKvhB1PLKFAeNilUSxmn1uIZoL1NesNKq
                IcGY5jDjZ1XHm26sGahVpkUG0CM62+tlXSoREfA7T8pt9DTEceT/AFr2XK4jYIVz
                8eQQsSWu1ZK7E8EM4DnatDlXtas1qnIhO4M15zHfeiFuuDIIfR0ykRVKYnLP43eh
                vNURG3YBZwjgQQvD6xVu+KQZ2aKrr+InUlYrAoosFCT5v0ICvybIxo/gbjh9Uy3l
                7ZizlWNof/k19N+IxWA1ksB8aRxhlRbQ694Lrz4EEEVlWFA4r0jyWbYW8jwNkALG
                cC4BrTwV1wIDAQABo0IwQDAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIB
                BjAdBgNVHQ4EFgQU7edvdlq/YOxJW8ald7tyFnGbxD0wDQYJKoZIhvcNAQELBQAD
                ggIBAJHfgD9DCX5xwvfrs4iP4VGyvD11+ShdyLyZm3tdquXK4Qr36LLTn91nMX66
                AarHakE7kNQIXLJgapDwyM4DYvmL7ftuKtwGTTwpD4kWilhMSA/ohGHqPHKmd+RC
                roijQ1h5fq7KpVMNqT1wvSAZYaRsOPxDMuHBR//47PERIjKWnML2W2mWeyAMQ0Ga
                W/ZZGYjeVYg3UQt4XAoeo0L9x52ID8DyeAIkVJOviYeIyUqAHerQbj5hLja7NQ4n
                lv1mNDthcnPxFlxHBlRJAHpYErAK74X9sbgzdWqTHBLmYF5vHX/JHyPLhGGfHoJE
                +V+tYlUkmlKY7VHnoX6XOuYvHxHaU4AshZ6rNRDbIl9qxV6XU/IyAgkwo1jwDQHV
                csaxfGl7w/U2Rcxhbl5MlMVerugOXou/983g7aEOGzPuVBj+D77vfoRrQ+NwmNtd
                dbINWQeFFSM51vHfqSYP1kjHs6Yi9TM3WpVHn3u6GBVv/9YUZINJ0gpnIdsPNWNg
                KCLjsZWDzYWm3S8P52dSbrsvhXz1SnPnxT7AvSESBT/8twNJAlvIJebiVDj1eYeM
                HVOyToV7BjjHLPj4sHKNJeV3UvQDHEimUF+IIDBu8oJDqz2XhOdT+yHBTw8imoa4
                WSr2Rz0ZiC3oheGe7IUIarFsNMkd7EgrO3jtZsSOeWmD3n+M
                -----END CERTIFICATE-----
                === /C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1478 (0x5c6)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov 24 19:11:23 2006 GMT
                            Not After : Nov 24 19:06:44 2031 GMT
                        Subject: C=BM, O=QuoVadis Limited, CN=QuoVadis Root CA 3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Certificate Policies:
                                Policy: 1.3.6.1.4.1.8024.0.3
                                  User Notice:
                                    Explicit Text: Any use of this Certificate constitutes acceptance of the QuoVadis Root CA 3 Certificate Policy / Certification Practice Statement.
                                  CPS: http://www.quovadisglobal.com/cps

                            X509v3 Key Usage:
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                F2:C0:13:E0:82:43:3E:FB:EE:2F:67:32:96:35:5C:DB:B8:CB:02:D0
                            X509v3 Authority Key Identifier:
                                keyid:F2:C0:13:E0:82:43:3E:FB:EE:2F:67:32:96:35:5C:DB:B8:CB:02:D0
                                DirName:/C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 3
                                serial:05:C6

                SHA1 Fingerprint=1F:49:14:F7:D8:74:95:1D:DD:AE:02:C0:BE:FD:3A:2D:82:75:51:85
                SHA256 Fingerprint=18:F1:FC:7F:20:5D:F8:AD:DD:EB:7F:E0:07:DD:57:E3:AF:37:5A:9C:4D:8D:73:54:6B:F4:F1:FE:D1:E1:8D:35
                -----BEGIN CERTIFICATE-----
                MIIGnTCCBIWgAwIBAgICBcYwDQYJKoZIhvcNAQEFBQAwRTELMAkGA1UEBhMCQk0x
                GTAXBgNVBAoTEFF1b1ZhZGlzIExpbWl0ZWQxGzAZBgNVBAMTElF1b1ZhZGlzIFJv
                b3QgQ0EgMzAeFw0wNjExMjQxOTExMjNaFw0zMTExMjQxOTA2NDRaMEUxCzAJBgNV
                BAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBMaW1pdGVkMRswGQYDVQQDExJRdW9W
                YWRpcyBSb290IENBIDMwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDM
                V0IWVJzmmNPTTe7+7cefQzlKZbPoFog02w1ZkXTPkrgEQK0CSzGrvI2RaNggDhoB
                4hp7Thdd4oq3P5kazethq8Jlph+3t723j/z9cI8LoGe+AaJZz3HmDyl2/7FWeUUr
                H556VOijKTVopAFPD6QuN+8bv+OPEKhyq1hX51SGyMnzW9os2l2ObjyjPtr7guXd
                8lyyBTNvijbO0BNO/79KDDRMpsMhvVAEVeuxu537RR5kFd5VAYwCdrXLoT9Cabwv
                vWhDFlaJKjdhkf2mrk7AyxRllDdLkgbvBNDInIjbC3uBr7E9KsRlOni27tyAsdLT
                mZw67mtaa7ONt9XOnMK+pUsvFrGeaDsGb659n/je7Mwpp5ijJUMv7/FfJuGITfhe
                btfZFG4ZM2mnO4SJk8RTVROhUXhA+LjJou57ulJCg54U7QVSWllWp5f8nT8KKdjc
                T5EOE7zelaTfi5m+rJsziO+1ga8bxiJTyPbH7pcUsMV8eFLI8M5ud2CEpukqdiDt
                WAEXMJPpGovgc2PZapKUSU60rUqFxKMiMPwJ7Wgic6aIDFUhWMXhOp8q3crhkODZ
                c6tsgLjoC2SToJyMGf+z0gzskSaHirOi4XCPLArlzW1oUevaPwV/izLmE1xr/l9A
                4iLItLRkT9a6fUg+qGkM17uGcclzuD87nSVL2v9A6wIDAQABo4IBlTCCAZEwDwYD
                VR0TAQH/BAUwAwEB/zCB4QYDVR0gBIHZMIHWMIHTBgkrBgEEAb5YAAMwgcUwgZMG
                CCsGAQUFBwICMIGGGoGDQW55IHVzZSBvZiB0aGlzIENlcnRpZmljYXRlIGNvbnN0
                aXR1dGVzIGFjY2VwdGFuY2Ugb2YgdGhlIFF1b1ZhZGlzIFJvb3QgQ0EgMyBDZXJ0
                aWZpY2F0ZSBQb2xpY3kgLyBDZXJ0aWZpY2F0aW9uIFByYWN0aWNlIFN0YXRlbWVu
                dC4wLQYIKwYBBQUHAgEWIWh0dHA6Ly93d3cucXVvdmFkaXNnbG9iYWwuY29tL2Nw
                czALBgNVHQ8EBAMCAQYwHQYDVR0OBBYEFPLAE+CCQz777i9nMpY1XNu4ywLQMG4G
                A1UdIwRnMGWAFPLAE+CCQz777i9nMpY1XNu4ywLQoUmkRzBFMQswCQYDVQQGEwJC
                TTEZMBcGA1UEChMQUXVvVmFkaXMgTGltaXRlZDEbMBkGA1UEAxMSUXVvVmFkaXMg
                Um9vdCBDQSAzggIFxjANBgkqhkiG9w0BAQUFAAOCAgEAT62gLEz6wPJv92ZVqyM0
                7ucp2sNbtrCD2dDQ4iH782CnO11gUyeim/YIIirnv6By5ZwkajGxkHon24QRiSem
                d1o417+shvzuXYO8BsbRd2sPbSQvS3pspweWyuOEn62Iix2rFo1bZhfZFvSLgNLd
                +LJ2w/w4E6oM3kJpK27zPOuAJ9v1pkQNn1pVWQvVDVJIxa6f8i+AxeoyUDUSly7B
                4f/xI4hROJ/yZlZ25w9Rl6VSDE1JUZU2Pb+iSwwQHYaZTKrzchGT5Or2m9qoXadN
                t54CrnMAyNojA+j56hl0YgCUyyIgvpSnWbWCar6ZeXqp8kokUvd0/bpO5qgdAm6x
                DYBEwa7TIzdfu4V8K5Iu6H6li92Z4b8nby1dqnuH/grdS/yO9SbkbnBCbjPsMZ57
                k8HkyWkaPcBrTiJt7qtYTcbQQcEr6k8Sh17rRdhs9ZgC06DYVYoGmRmioHfRMJ6s
                zHXug/WwYjnPbFfiTNKRCw51KBuav/0aQ/HKd/s7j2G4aSgWQgRecCocIdiP4b0j
                Wy10QJLZYxkNc91pvGJHvOB0K7Lrfb5BG7XARsWhIstfTsEokt4YutUqKLsRixeT
                mJlglFwjz1onl14LBQaTNx47aTbrqZ5hHY8y2o4M1nQ+ewkk2gF3R8Q7zTSMmfXK
                4SVhM7JZG+Ju1zdXtg2pEto=
                -----END CERTIFICATE-----
                === /C=BM/O=QuoVadis Limited/CN=QuoVadis Root CA 3 G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            2e:f5:9b:02:28:a7:db:7a:ff:d5:a3:a9:ee:bd:03:a0:cf:12:6a:1d
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jan 12 20:26:32 2012 GMT
                            Not After : Jan 12 20:26:32 2042 GMT
                        Subject: C=BM, O=QuoVadis Limited, CN=QuoVadis Root CA 3 G3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                C6:17:D0:BC:A8:EA:02:43:F2:1B:06:99:5D:2B:90:20:B9:D7:9C:E4
                SHA1 Fingerprint=48:12:BD:92:3C:A8:C4:39:06:E7:30:6D:27:96:E6:A4:CF:22:2E:7D
                SHA256 Fingerprint=88:EF:81:DE:20:2E:B0:18:45:2E:43:F8:64:72:5C:EA:5F:BD:1F:C2:D9:D2:05:73:07:09:C5:D8:B8:69:0F:46
                -----BEGIN CERTIFICATE-----
                MIIFYDCCA0igAwIBAgIULvWbAiin23r/1aOp7r0DoM8Sah0wDQYJKoZIhvcNAQEL
                BQAwSDELMAkGA1UEBhMCQk0xGTAXBgNVBAoTEFF1b1ZhZGlzIExpbWl0ZWQxHjAc
                BgNVBAMTFVF1b1ZhZGlzIFJvb3QgQ0EgMyBHMzAeFw0xMjAxMTIyMDI2MzJaFw00
                MjAxMTIyMDI2MzJaMEgxCzAJBgNVBAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBM
                aW1pdGVkMR4wHAYDVQQDExVRdW9WYWRpcyBSb290IENBIDMgRzMwggIiMA0GCSqG
                SIb3DQEBAQUAA4ICDwAwggIKAoICAQCzyw4QZ47qFJenMioKVjZ/aEzHs286IxSR
                /xl/pcqs7rN2nXrpixurazHb+gtTTK/FpRp5PIpM/6zfJd5O2YIyC0TeytuMrKNu
                FoM7pmRLMon7FhY4futD4tN0SsJiCnMK3UmzV9KwCoWdcTzeo8vAMvMBOSBDGzXR
                U7Ox7sWTaYI+FrUoRqHe6okJ7UO4BUaKhvVZR74bbwEhELn9qdIoyhA5CcoTNs+c
                ra1AdHkrAj80//ogaX3T7mH1urPnMNA3I4ZyYUUpSFlob3emLoG+B01vr87ERROR
                FHAGjx+f+IdpsQ7vw4kZ6+ocYfx6bIrc1gMLnia6Et3UVDmrJqMz6nWB2i3ND0/k
                A9HvFZcba5DFApCTZgIhsUfei5pKgLlVj7WiL8DWM2fafsSntARE60f75li59wzw
                eyuxwHApw0BiLTtIadwjPEjrewl5qW3aqDCYz4ByA4imW0aucnl8CAMhZa634Ryl
                sSqiMd5mBPfAdOhx3v89WcyWJhKLhZVXGqtrdQtEPREoPHtht+KPZ0/l7DxMYIBp
                VzgeAVuNVejH38DMdyM0SXV89pgR6y3e7UEuFAUCf+D+IOs15xGsIs5XPd7JMG0Q
                A4XN8f+MFrXBsj6IbGB/kE+V9/YtrQE5BwT6dYB9v0lQ7e/JxHwc64B+27bQ3RP+
                ydOc17KXqQIDAQABo0IwQDAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIB
                BjAdBgNVHQ4EFgQUxhfQvKjqAkPyGwaZXSuQILnXnOQwDQYJKoZIhvcNAQELBQAD
                ggIBADRh2Va1EodVTd2jNTFGu6QHcrxfYWLopfsLN7E8trP6KZ1/AvWkyaiTt3px
                KGmPc+FSkNrVvjrlt3ZqVoAh313m6Tqe5T72omnHKgqwGEfcIHB9UqM+WXzBusnI
                FUBhynLWcKzSt/Ac5IYp8M7vaGPQtSCKFWGafoaYtMnCdvvMujAWzKNhxnQT5Wvv
                oxXqA/4Ti2Tk08HS6IT7SdEQTXlm66r99I0xHnAUrdzeZxNMgRVhvLfZkXdxGYFg
                u/BYpbWcC/ePIlUnwEsBbTuZDdQdm2NnL9DuDcpmvJRPpq3t/O5jrFc/ZSXPsoaP
                0Aj/uHYUbt7lJ+yreLVTubY/6CD50qi+YUbKh4yE8/nxoGibIh6BJpsQBJFxwAYf
                3KDTuVan45gtf4Od34wrnDKOMpTwATwiKp9Dwi7DmDkHOHv8XgBCH/MyJnmDhPbl
                8MFREsALHgQjDFSlTC9JxUrRtm5gDWv8a4uFJGS3iQ6rJUdbPM9+Sb3H6QrG2vd+
                DhcI00iX0HGS8A85PjRqHH3Y8iKuu2n0M7SmSFXRDw4m6Oy2Cy2nhTXN/VnIn9HN
                PlopNLk9hM6xZdRZkZFWdSHBd575euFgndOtBBj0fOtek49TSiIp+EgrPk2GrFt/
                ywaZWWDYWGWVjUTR939+J399roD1B0y2PpxxVJkES/1Y+Zj0
                -----END CERTIFICATE-----
                === /C=BM/O=QuoVadis Limited/OU=Root Certification Authority/CN=QuoVadis Root Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 985026699 (0x3ab6508b)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Mar 19 18:33:33 2001 GMT
                            Not After : Mar 17 18:33:33 2021 GMT
                        Subject: C=BM, O=QuoVadis Limited, OU=Root Certification Authority, CN=QuoVadis Root Certification Authority
                        X509v3 extensions:
                            Authority Information Access:
                                OCSP - URI:https://ocsp.quovadisoffshore.com

                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Certificate Policies:
                                Policy: 1.3.6.1.4.1.8024.0.1
                                  User Notice:
                                    Explicit Text: Reliance on the QuoVadis Root Certificate by any party assumes acceptance of the then applicable standard terms and conditions of use, certification practices, and the QuoVadis Certificate Policy.
                                  CPS: http://www.quovadis.bm

                            X509v3 Subject Key Identifier:
                                8B:4B:6D:ED:D3:29:B9:06:19:EC:39:39:A9:F0:97:84:6A:CB:EF:DF
                            X509v3 Authority Key Identifier:
                                keyid:8B:4B:6D:ED:D3:29:B9:06:19:EC:39:39:A9:F0:97:84:6A:CB:EF:DF
                                DirName:/C=BM/O=QuoVadis Limited/OU=Root Certification Authority/CN=QuoVadis Root Certification Authority
                                serial:3A:B6:50:8B

                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=DE:3F:40:BD:50:93:D3:9B:6C:60:F6:DA:BC:07:62:01:00:89:76:C9
                SHA256 Fingerprint=A4:5E:DE:3B:BB:F0:9C:8A:E1:5C:72:EF:C0:72:68:D6:93:A2:1C:99:6F:D5:1E:67:CA:07:94:60:FD:6D:88:73
                -----BEGIN CERTIFICATE-----
                MIIF0DCCBLigAwIBAgIEOrZQizANBgkqhkiG9w0BAQUFADB/MQswCQYDVQQGEwJC
                TTEZMBcGA1UEChMQUXVvVmFkaXMgTGltaXRlZDElMCMGA1UECxMcUm9vdCBDZXJ0
                aWZpY2F0aW9uIEF1dGhvcml0eTEuMCwGA1UEAxMlUXVvVmFkaXMgUm9vdCBDZXJ0
                aWZpY2F0aW9uIEF1dGhvcml0eTAeFw0wMTAzMTkxODMzMzNaFw0yMTAzMTcxODMz
                MzNaMH8xCzAJBgNVBAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBMaW1pdGVkMSUw
                IwYDVQQLExxSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MS4wLAYDVQQDEyVR
                dW9WYWRpcyBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MIIBIjANBgkqhkiG
                9w0BAQEFAAOCAQ8AMIIBCgKCAQEAv2G1lVO6V/z68mcLOhrfEYBklbTRvM16z/Yp
                li4kVEAkOPcahdxYTMukJ0KX0J+DisPkBgNbAKVRHnAEdOLB1Dqr1607BxgFjv2D
                rOpm2RgbaIr1VxqYuvXtdj182d6UajtLF8HVj71lODqV0D1VNk7feVcxKh7YWWVJ
                WCCYfqtffp/p1k3sg3Spx2zY7ilKhSoGFPlU5tPaZQeLYzcS19Dsw3sgQUSj7cug
                F+FxZc4dZjH3dgEZyH0DWLaVSR2mEiboxgx24ONmy+pdpibu5cxfvWenAScOospU
                xbF6lR1xHkopigPcakXBpBlebzbNw6Kwt/5cOOJSvPhEQ+aQuwIDAQABo4ICUjCC
                Ak4wPQYIKwYBBQUHAQEEMTAvMC0GCCsGAQUFBzABhiFodHRwczovL29jc3AucXVv
                dmFkaXNvZmZzaG9yZS5jb20wDwYDVR0TAQH/BAUwAwEB/zCCARoGA1UdIASCAREw
                ggENMIIBCQYJKwYBBAG+WAABMIH7MIHUBggrBgEFBQcCAjCBxxqBxFJlbGlhbmNl
                IG9uIHRoZSBRdW9WYWRpcyBSb290IENlcnRpZmljYXRlIGJ5IGFueSBwYXJ0eSBh
                c3N1bWVzIGFjY2VwdGFuY2Ugb2YgdGhlIHRoZW4gYXBwbGljYWJsZSBzdGFuZGFy
                ZCB0ZXJtcyBhbmQgY29uZGl0aW9ucyBvZiB1c2UsIGNlcnRpZmljYXRpb24gcHJh
                Y3RpY2VzLCBhbmQgdGhlIFF1b1ZhZGlzIENlcnRpZmljYXRlIFBvbGljeS4wIgYI
                KwYBBQUHAgEWFmh0dHA6Ly93d3cucXVvdmFkaXMuYm0wHQYDVR0OBBYEFItLbe3T
                KbkGGew5Oanwl4Rqy+/fMIGuBgNVHSMEgaYwgaOAFItLbe3TKbkGGew5Oanwl4Rq
                y+/foYGEpIGBMH8xCzAJBgNVBAYTAkJNMRkwFwYDVQQKExBRdW9WYWRpcyBMaW1p
                dGVkMSUwIwYDVQQLExxSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MS4wLAYD
                VQQDEyVRdW9WYWRpcyBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5ggQ6tlCL
                MA4GA1UdDwEB/wQEAwIBBjANBgkqhkiG9w0BAQUFAAOCAQEAitQUtf70mpKnGdSk
                fnIYj9lofFIk3WdvOXrEql494liwTXCYhGHoG+NpGA7O+0dQoE7/8CQfvbLO9Sf8
                7C9TqnN7Az10buYWnuulLsS/VidQK2K6vkscPFVcQR0kvoIgR13VRH56FmjffU1R
                cHhXHTMe/QKZnAzNCgVPx7uOpHX6Sm2xgI4JVrmcGmD+XcHXetwReNDWXcG31a0y
                mQM6isxUJTkxgXsTIlG6Rmyhu576BGxJJnSP0nPrzDCi5upZIof4l/UO/erMkqQW
                xFIY6iHOsfHmhIHluqmGKPJDWl0Snawe2ajlCmqnf6CHKc/yiU3U7MXi5nrQNiOK
                SnQ2+Q==
                -----END CERTIFICATE-----

                ### SECOM Trust Systems CO.,LTD.

                === /C=JP/O=SECOM Trust Systems CO.,LTD./OU=Security Communication RootCA2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: May 29 05:00:39 2009 GMT
                            Not After : May 29 05:00:39 2029 GMT
                        Subject: C=JP, O=SECOM Trust Systems CO.,LTD., OU=Security Communication RootCA2
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                0A:85:A9:77:65:05:98:7C:40:81:F8:0F:97:2C:38:F1:0A:EC:3C:CF
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=5F:3B:8C:F2:F8:10:B3:7D:78:B4:CE:EC:19:19:C3:73:34:B9:C7:74
                SHA256 Fingerprint=51:3B:2C:EC:B8:10:D4:CD:E5:DD:85:39:1A:DF:C6:C2:DD:60:D8:7B:B7:36:D2:B5:21:48:4A:A4:7A:0E:BE:F6
                -----BEGIN CERTIFICATE-----
                MIIDdzCCAl+gAwIBAgIBADANBgkqhkiG9w0BAQsFADBdMQswCQYDVQQGEwJKUDEl
                MCMGA1UEChMcU0VDT00gVHJ1c3QgU3lzdGVtcyBDTy4sTFRELjEnMCUGA1UECxMe
                U2VjdXJpdHkgQ29tbXVuaWNhdGlvbiBSb290Q0EyMB4XDTA5MDUyOTA1MDAzOVoX
                DTI5MDUyOTA1MDAzOVowXTELMAkGA1UEBhMCSlAxJTAjBgNVBAoTHFNFQ09NIFRy
                dXN0IFN5c3RlbXMgQ08uLExURC4xJzAlBgNVBAsTHlNlY3VyaXR5IENvbW11bmlj
                YXRpb24gUm9vdENBMjCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANAV
                OVKxUrO6xVmCxF1SrjpDZYBLx/KWvNs2l9amZIyoXvDjChz335c9S672XewhtUGr
                zbl+dp+++T42NKA7wfYxEUV0kz1XgMX5iZnK5atq1LXaQZAQwdbWQonCv/Q4EpVM
                VAX3NuRFg3sUZdbcDE3R3n4MqzvEFb46VqZab3ZpUql6ucjrappdUtAtCms1FgkQ
                hNBqyjoGADdH5H5XTz+L62e4iKrFvlNVspHEfbmwhRkGeC7bYRr6hfVKkaHnFtWO
                ojnflLhwHyg/i/xAXmODPIMqGplrz95Zajv8bxbXH/1KEOtOghY6rCcMU/Gt1SSw
                awNQwS08Ft1ENCcadfsCAwEAAaNCMEAwHQYDVR0OBBYEFAqFqXdlBZh8QIH4D5cs
                OPEK7DzPMA4GA1UdDwEB/wQEAwIBBjAPBgNVHRMBAf8EBTADAQH/MA0GCSqGSIb3
                DQEBCwUAA4IBAQBMOqNErLlFsceTfsgLCkLfZOoc7llsCLqJX2rKSpWeeo8HxdpF
                coJxDjrSzG+ntKEju/Ykn8sX/oymzsLS28yN/HH8AynBbF0zX2S2ZTuJbxh2ePXc
                okgfGT+Ok+vx+hfuzU7jBBJV1uXk3fs+BXziHV7Gp7yXT2g69ekuCkO2r1dcYmh8
                t/2jioSgrGK+KwmHNPBqAbubKVY8/gA3zyNs8U6qtnRGEmyR7jTV7JqR50S+kDFy
                1UkC9gLl9B/rfNmWVan/7Ir5mUf/NVoCqgTLiluHcSmRvaS0eg29mvVXIwAHIRc/
                SjnRBUkLp7Y3gaVdjKozXoEofKd9J+sAro03
                -----END CERTIFICATE-----

                ### SECOM Trust.net

                === /C=JP/O=SECOM Trust.net/OU=Security Communication RootCA1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Sep 30 04:20:49 2003 GMT
                            Not After : Sep 30 04:20:49 2023 GMT
                        Subject: C=JP, O=SECOM Trust.net, OU=Security Communication RootCA1
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                A0:73:49:99:68:DC:85:5B:65:E3:9B:28:2F:57:9F:BD:33:BC:07:48
                            X509v3 Key Usage:
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=36:B1:2B:49:F9:81:9E:D7:4C:9E:BC:38:0F:C6:56:8F:5D:AC:B2:F7
                SHA256 Fingerprint=E7:5E:72:ED:9F:56:0E:EC:6E:B4:80:00:73:A4:3F:C3:AD:19:19:5A:39:22:82:01:78:95:97:4A:99:02:6B:6C
                -----BEGIN CERTIFICATE-----
                MIIDWjCCAkKgAwIBAgIBADANBgkqhkiG9w0BAQUFADBQMQswCQYDVQQGEwJKUDEY
                MBYGA1UEChMPU0VDT00gVHJ1c3QubmV0MScwJQYDVQQLEx5TZWN1cml0eSBDb21t
                dW5pY2F0aW9uIFJvb3RDQTEwHhcNMDMwOTMwMDQyMDQ5WhcNMjMwOTMwMDQyMDQ5
                WjBQMQswCQYDVQQGEwJKUDEYMBYGA1UEChMPU0VDT00gVHJ1c3QubmV0MScwJQYD
                VQQLEx5TZWN1cml0eSBDb21tdW5pY2F0aW9uIFJvb3RDQTEwggEiMA0GCSqGSIb3
                DQEBAQUAA4IBDwAwggEKAoIBAQCzs/5/022x7xZ8V6UMbXaKL0u/ZPtM7orw8yl8
                9f/uKuDp6bpbZCKamm8sOiZpUQWZJtzVHGpxxpp9Hp3dfGzGjGdnSj74cbAZJ6kJ
                DKaVv0uMDPpVmDvY6CKhS3E4eayXkmmziX7qIWgGmBSWh9JhNrxtJ1aeV+7AwFb9
                Ms+k2Y7CI9eNqPPYJayX5HA49LY6tJ07lyZDo6G8SVlyTCMwhwFY9k6+HGhWZq/N
                QV3Is00qVUarH9oe4kA92819uZKAnDfdDJZkndwi92SL32HeFZRSFaB9UslLqCHJ
                xrHty8OVYNEP8Ktw+N/LTX7s1vqr2b1/VPKl6Xn62dZ2JChzAgMBAAGjPzA9MB0G
                A1UdDgQWBBSgc0mZaNyFW2XjmygvV5+9M7wHSDALBgNVHQ8EBAMCAQYwDwYDVR0T
                AQH/BAUwAwEB/zANBgkqhkiG9w0BAQUFAAOCAQEAaECpqLvkT115swW1F7NgE+vG
                kl3g0dNq/vu+m22/xwVtWSDEHPC32oRYAmP6SBbvT6UL90qY8j+eG61Ha2POCEfr
                Uj94nK9NrvjVT8+amCoQQTlSxN3Zmw7vkwGusi7KaEIkQmywszo+zenaSMQVy+n5
                Bw+SUEmK3TGXX8npN6o7WWWXlDLJs58+OmJYxUmtYg5xpTKqL8aJdkNAExNnPaJU
                JRDL8Try2frbSVa7pv6nQTXD4IhhyYjH3zYQIphZ6rBK+1YWc26sTfcioU+tHXot
                RSflMMFe8toTyyVCUZVHA4xsIcx0Qu1T/zOLjw9XARYvz6buyXAiFL39vmwLAw==
                -----END CERTIFICATE-----

                ### SecureTrust Corporation

                === /C=US/O=SecureTrust Corporation/CN=Secure Global CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            07:56:22:a4:e8:d4:8a:89:4d:f4:13:c8:f0:f8:ea:a5
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov  7 19:42:28 2006 GMT
                            Not After : Dec 31 19:52:06 2029 GMT
                        Subject: C=US, O=SecureTrust Corporation, CN=Secure Global CA
                        X509v3 extensions:
                            1.3.6.1.4.1.311.20.2:
                                ...C.A
                            X509v3 Key Usage:
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                AF:44:04:C2:41:7E:48:83:DB:4E:39:02:EC:EC:84:7A:E6:CE:C9:A4
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.securetrust.com/SGCA.crl

                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=3A:44:73:5A:E5:81:90:1F:24:86:61:46:1E:3B:9C:C4:5F:F5:3A:1B
                SHA256 Fingerprint=42:00:F5:04:3A:C8:59:0E:BB:52:7D:20:9E:D1:50:30:29:FB:CB:D4:1C:A1:B5:06:EC:27:F1:5A:DE:7D:AC:69
                -----BEGIN CERTIFICATE-----
                MIIDvDCCAqSgAwIBAgIQB1YipOjUiolN9BPI8PjqpTANBgkqhkiG9w0BAQUFADBK
                MQswCQYDVQQGEwJVUzEgMB4GA1UEChMXU2VjdXJlVHJ1c3QgQ29ycG9yYXRpb24x
                GTAXBgNVBAMTEFNlY3VyZSBHbG9iYWwgQ0EwHhcNMDYxMTA3MTk0MjI4WhcNMjkx
                MjMxMTk1MjA2WjBKMQswCQYDVQQGEwJVUzEgMB4GA1UEChMXU2VjdXJlVHJ1c3Qg
                Q29ycG9yYXRpb24xGTAXBgNVBAMTEFNlY3VyZSBHbG9iYWwgQ0EwggEiMA0GCSqG
                SIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvNS7YrGxVaQZx5RNoJLNP2MwhR/jxYDiJ
                iQPpvepeRlMJ3Fz1Wuj3RSoC6zFh1ykzTM7HfAo3fg+6MpjhHZevj8fcyTiW89sa
                /FHtaMbQbqR8JNGuQsiWUGMu4P51/pinX0kuleM5M2SOHqRfkNJnPLLZ/kG5VacJ
                jnIFHovdRIWCQtBJwB1g8NEXLJXr9qXBkqPFwqcIYA1gBBCWeZ4WNOaptvolRTnI
                HmX5k/Wq8VLcmZg9pYYaDDUz+kulBAYVHDGA76oYa8J719rO+TMg1fW9ajMtgQT7
                sFzUnKPiXB3jqUJ1XnvUd+85VLrJChgbEplJL4hL/VBi0XPnj3pDAgMBAAGjgZ0w
                gZowEwYJKwYBBAGCNxQCBAYeBABDAEEwCwYDVR0PBAQDAgGGMA8GA1UdEwEB/wQF
                MAMBAf8wHQYDVR0OBBYEFK9EBMJBfkiD2045AuzshHrmzsmkMDQGA1UdHwQtMCsw
                KaAnoCWGI2h0dHA6Ly9jcmwuc2VjdXJldHJ1c3QuY29tL1NHQ0EuY3JsMBAGCSsG
                AQQBgjcVAQQDAgEAMA0GCSqGSIb3DQEBBQUAA4IBAQBjGghAfaReUw132HquHw0L
                URYD7xh8yOOvaliTFGCRsoTciE6+OYo68+aCiV0BN7OrJKQVDpI1WkpEXk5X+nXO
                H0jOZvQ8QCaSmGwb7iRGDBezUqXbpZGRzzfTb+cnCDpOGR86p1hcF895P4vkp9Mm
                I50mD1hp/Ed+stCNi5O/KU9DaXR2Z0vPB4zmAve14bRDtUstFJ/53CYNv6ZHdAbY
                iNE6KTCEztI5gGIbqMdXSbxqVVFnFUq+NQfk1XWYN3kwFNspnWzFacxHVaIw98xc
                f8LDmBxrThaA63p4ZUWiABqvDA1VZDRIuJK58bRQKfJPIx/abKwfROHdI3hRW8cW
                -----END CERTIFICATE-----
                === /C=US/O=SecureTrust Corporation/CN=SecureTrust CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0c:f0:8e:5c:08:16:a5:ad:42:7f:f0:eb:27:18:59:d0
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov  7 19:31:18 2006 GMT
                            Not After : Dec 31 19:40:55 2029 GMT
                        Subject: C=US, O=SecureTrust Corporation, CN=SecureTrust CA
                        X509v3 extensions:
                            1.3.6.1.4.1.311.20.2:
                                ...C.A
                            X509v3 Key Usage:
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                42:32:B6:16:FA:04:FD:FE:5D:4B:7A:C3:FD:F7:4C:40:1D:5A:43:AF
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.securetrust.com/STCA.crl

                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=87:82:C6:C3:04:35:3B:CF:D2:96:92:D2:59:3E:7D:44:D9:34:FF:11
                SHA256 Fingerprint=F1:C1:B5:0A:E5:A2:0D:D8:03:0E:C9:F6:BC:24:82:3D:D3:67:B5:25:57:59:B4:E7:1B:61:FC:E9:F7:37:5D:73
                -----BEGIN CERTIFICATE-----
                MIIDuDCCAqCgAwIBAgIQDPCOXAgWpa1Cf/DrJxhZ0DANBgkqhkiG9w0BAQUFADBI
                MQswCQYDVQQGEwJVUzEgMB4GA1UEChMXU2VjdXJlVHJ1c3QgQ29ycG9yYXRpb24x
                FzAVBgNVBAMTDlNlY3VyZVRydXN0IENBMB4XDTA2MTEwNzE5MzExOFoXDTI5MTIz
                MTE5NDA1NVowSDELMAkGA1UEBhMCVVMxIDAeBgNVBAoTF1NlY3VyZVRydXN0IENv
                cnBvcmF0aW9uMRcwFQYDVQQDEw5TZWN1cmVUcnVzdCBDQTCCASIwDQYJKoZIhvcN
                AQEBBQADggEPADCCAQoCggEBAKukgeWVzfX2FI7CT8rU4niVWJxB4Q2ZQCQXOZEz
                Zum+4YOvYlyJ0fwkW2Gz4BERQRwdbvC4u/jep4G6pkjGnx29vo6pQT64lO0pGtSO
                0gMdA+9tDWccV9cGrcrI9f4Or2YlSASWC12juhbDCE/RRvgUXPLIXgGZbf2IzIao
                wW8xQmxSPmjL8xk037uHGFaAJsTQ3MBv396gwpEWoGQRS0S8Hvbn+mPeZqx2pHGj
                7DaUaHp3pLHnDi+BeuK1cobvomuL8A/b01k/unK8RCSc43Oz969XL0Imnal0ugBS
                8kvNU3xHCzaFDmapCJcWNFfBZveA4+1wVMeT4C4oFVmHursCAwEAAaOBnTCBmjAT
                BgkrBgEEAYI3FAIEBh4EAEMAQTALBgNVHQ8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB
                /zAdBgNVHQ4EFgQUQjK2FvoE/f5dS3rD/fdMQB1aQ68wNAYDVR0fBC0wKzApoCeg
                JYYjaHR0cDovL2NybC5zZWN1cmV0cnVzdC5jb20vU1RDQS5jcmwwEAYJKwYBBAGC
                NxUBBAMCAQAwDQYJKoZIhvcNAQEFBQADggEBADDtT0rhWDpSclu1pqNlGKa7UTt3
                6Z3q059c4EVlew3KW+JwULKUBRSuSceNQQcSc5R+DCMh/bwQf2AQWnL1mA6s7Ll/
                3XpvXdMc9P+IBWlCqQVxyLesJugutIxq/3HcuLHfmbx8IVQr5Fiiu1cprp6poxkm
                D5kuCLDv/WnPmRoJjeOnnyvJNjR7JLN4TJUXpAYmHrZkUjZfYGfZnMUFdAvnZyPS
                CPyI6a6Lf+Ew9Dd+/cYy2i2eRDAwbO4H3tI0/NL/QPZL9GZGBlSm8jIKYyYwa5vR
                3ItHuuG51WLQoqD0ZwV4KWMabwTW+MZMo5qxN7SN5ShLHZ4swrhovO0C7jE=
                -----END CERTIFICATE-----

                ### Sonera

                === /C=FI/O=Sonera/CN=Sonera Class2 CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 29 (0x1d)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Apr  6 07:29:40 2001 GMT
                            Not After : Apr  6 07:29:40 2021 GMT
                        Subject: C=FI, O=Sonera, CN=Sonera Class2 CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                4A:A0:AA:58:84:D3:5E:3C
                            X509v3 Key Usage:
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=37:F7:6D:E6:07:7C:90:C5:B1:3E:93:1A:B7:41:10:B4:F2:E4:9A:27
                SHA256 Fingerprint=79:08:B4:03:14:C1:38:10:0B:51:8D:07:35:80:7F:FB:FC:F8:51:8A:00:95:33:71:05:BA:38:6B:15:3D:D9:27
                -----BEGIN CERTIFICATE-----
                MIIDIDCCAgigAwIBAgIBHTANBgkqhkiG9w0BAQUFADA5MQswCQYDVQQGEwJGSTEP
                MA0GA1UEChMGU29uZXJhMRkwFwYDVQQDExBTb25lcmEgQ2xhc3MyIENBMB4XDTAx
                MDQwNjA3Mjk0MFoXDTIxMDQwNjA3Mjk0MFowOTELMAkGA1UEBhMCRkkxDzANBgNV
                BAoTBlNvbmVyYTEZMBcGA1UEAxMQU29uZXJhIENsYXNzMiBDQTCCASIwDQYJKoZI
                hvcNAQEBBQADggEPADCCAQoCggEBAJAXSjWdyvANlsdE+hY3/Ei9vX+ALTU74W+o
                Z6m/AxxNjG8yR9VBaKQTBME1DJqEQ/xcHf+Js+gXGM2RX/uJ4+q/Tl18GybTdXnt
                5oTjV+WtKcT0OijnpXuENmmz/V52vaMtmdOQTiMofRhj8VQ7Jp12W5dCsv+u8E7s
                3TmVToMGf+dJQMjFAbJUWmYdPfz56TwKnoG4cPABi+QjVHzIrviQHgCWctRUz2Ej
                vOr7nQKV0ba5cTppCD8PtOFCx4j1P5iop7oc4HFx71hXgVB6XGt0Rg6DA5jDjqhu
                8nYybieDwnPz3BjotJPqdURrBGAgcVeHnfO+oJAjPYok4doh28MCAwEAAaMzMDEw
                DwYDVR0TAQH/BAUwAwEB/zARBgNVHQ4ECgQISqCqWITTXjwwCwYDVR0PBAQDAgEG
                MA0GCSqGSIb3DQEBBQUAA4IBAQBazof5FnIVV0sd2ZvnoiYw7JNn39Yt0jSv9zil
                zqsWuasvfDXLrNAPtEwr/IDva4yRXzZ299uzGxnq9LIR/WFxRL8oszodv7ND6J+/
                3DEIcbCdjdY0RzKQxmUk96BKfARzjzlvF4xytb1LyHr4e4PDKE6cCepnP7JnBBvD
                FNr450kkkdAdavphOe9r5yF1BgfYErQhIHBCcYHaPJo2vqZbDWpsmh+Re/n570K6
                Tk6ezAyNlNzZRZxe7EJQY670XcSxEtzKO6gunRRaBXW37Ndj4ro1tgQIkejanZz2
                ZrUYrAqmVCY0M9IbwdR/GjqOC6oybtv8TyWf2TLHllpwrN9M
                -----END CERTIFICATE-----

                ### SSL Corporation

                === /C=US/ST=Texas/L=Houston/O=SSL Corporation/CN=SSL.com EV Root Certification Authority ECC
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 3182246526754555285 (0x2c299c5b16ed0595)
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: Feb 12 18:15:23 2016 GMT
                            Not After : Feb 12 18:15:23 2041 GMT
                        Subject: C=US, ST=Texas, L=Houston, O=SSL Corporation, CN=SSL.com EV Root Certification Authority ECC
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                5B:CA:5E:E5:DE:D2:81:AA:CD:A8:2D:64:51:B6:D9:72:9B:97:E6:4F
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:5B:CA:5E:E5:DE:D2:81:AA:CD:A8:2D:64:51:B6:D9:72:9B:97:E6:4F

                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=4C:DD:51:A3:D1:F5:20:32:14:B0:C6:C5:32:23:03:91:C7:46:42:6D
                SHA256 Fingerprint=22:A2:C1:F7:BD:ED:70:4C:C1:E7:01:B5:F4:08:C3:10:88:0F:E9:56:B5:DE:2A:4A:44:F9:9C:87:3A:25:A7:C8
                -----BEGIN CERTIFICATE-----
                MIIClDCCAhqgAwIBAgIILCmcWxbtBZUwCgYIKoZIzj0EAwIwfzELMAkGA1UEBhMC
                VVMxDjAMBgNVBAgMBVRleGFzMRAwDgYDVQQHDAdIb3VzdG9uMRgwFgYDVQQKDA9T
                U0wgQ29ycG9yYXRpb24xNDAyBgNVBAMMK1NTTC5jb20gRVYgUm9vdCBDZXJ0aWZp
                Y2F0aW9uIEF1dGhvcml0eSBFQ0MwHhcNMTYwMjEyMTgxNTIzWhcNNDEwMjEyMTgx
                NTIzWjB/MQswCQYDVQQGEwJVUzEOMAwGA1UECAwFVGV4YXMxEDAOBgNVBAcMB0hv
                dXN0b24xGDAWBgNVBAoMD1NTTCBDb3Jwb3JhdGlvbjE0MDIGA1UEAwwrU1NMLmNv
                bSBFViBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5IEVDQzB2MBAGByqGSM49
                AgEGBSuBBAAiA2IABKoSR5CYG/vvw0AHgyBO8TCCogbR8pKGYfL2IWjKAMTH6kMA
                VIbc/R/fALhBYlzccBYy3h+Z1MzFB8gIH2EWB1E9fVwHU+M1OIzfzZ/ZLg1Kthku
                WnBaBu2+8KGwytAJKaNjMGEwHQYDVR0OBBYEFFvKXuXe0oGqzagtZFG22XKbl+ZP
                MA8GA1UdEwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAUW8pe5d7SgarNqC1kUbbZcpuX
                5k8wDgYDVR0PAQH/BAQDAgGGMAoGCCqGSM49BAMCA2gAMGUCMQCK5kCJN+vp1RPZ
                ytRrJPOwPYdGWBrssd9v+1a6cGvHOMzosYxPD/fxZ3YOg9AeUY8CMD32IygmTMZg
                h5Mmm7I1HrrW9zzRHM76JTymGoEVW/MSD2zuZYrJh6j5B+BimoxcSg==
                -----END CERTIFICATE-----
                === /C=US/ST=Texas/L=Houston/O=SSL Corporation/CN=SSL.com EV Root Certification Authority RSA R2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 6248227494352943350 (0x56b629cd34bc78f6)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: May 31 18:14:37 2017 GMT
                            Not After : May 30 18:14:37 2042 GMT
                        Subject: C=US, ST=Texas, L=Houston, O=SSL Corporation, CN=SSL.com EV Root Certification Authority RSA R2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:F9:60:BB:D4:E3:D5:34:F6:B8:F5:06:80:25:A7:73:DB:46:69:A8:9E

                            X509v3 Subject Key Identifier:
                                F9:60:BB:D4:E3:D5:34:F6:B8:F5:06:80:25:A7:73:DB:46:69:A8:9E
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=74:3A:F0:52:9B:D0:32:A0:F4:4A:83:CD:D4:BA:A9:7B:7C:2E:C4:9A
                SHA256 Fingerprint=2E:7B:F1:6C:C2:24:85:A7:BB:E2:AA:86:96:75:07:61:B0:AE:39:BE:3B:2F:E9:D0:CC:6D:4E:F7:34:91:42:5C
                -----BEGIN CERTIFICATE-----
                MIIF6zCCA9OgAwIBAgIIVrYpzTS8ePYwDQYJKoZIhvcNAQELBQAwgYIxCzAJBgNV
                BAYTAlVTMQ4wDAYDVQQIDAVUZXhhczEQMA4GA1UEBwwHSG91c3RvbjEYMBYGA1UE
                CgwPU1NMIENvcnBvcmF0aW9uMTcwNQYDVQQDDC5TU0wuY29tIEVWIFJvb3QgQ2Vy
                dGlmaWNhdGlvbiBBdXRob3JpdHkgUlNBIFIyMB4XDTE3MDUzMTE4MTQzN1oXDTQy
                MDUzMDE4MTQzN1owgYIxCzAJBgNVBAYTAlVTMQ4wDAYDVQQIDAVUZXhhczEQMA4G
                A1UEBwwHSG91c3RvbjEYMBYGA1UECgwPU1NMIENvcnBvcmF0aW9uMTcwNQYDVQQD
                DC5TU0wuY29tIEVWIFJvb3QgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkgUlNBIFIy
                MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAjzZlQOHWTcDXtOlG2mvq
                M0fNTPl9fb69LT3w23jhhqXZuglXaO1XPqDQCEGD5yhBJB/jchXQARr7XnAjssuf
                OePPxU7Gkm0mxnu7s9onnQqG6YE3Bf7wcXHswxzpY6IXFJ3vG2fThVUCAtZJycxa
                4bH3bzKfydQ7iEGonL3Lq9ttewkfokxykNorCPzPPFTOZw+oz12WGQvE43LrrdF9
                HSfvkusQv1vrO6/PgN3B0pYEW3p+pKk8OHakYo6gOV7qd89dAFmPZiw+B6KjBSYR
                aZfqhbcPlgtLyEDhULouisv3D5oi53+aNxPN8k0TayHRwMwi8qFG9kRpnMphNQcA
                b9ZhCBHqurj26bNg5U257J8UZslXWNvNh2n4ioYSA0e/ZhN2rHd9NCSFg83XqpyQ
                Gp8hLH94t2S42Oim9HizVcuE0jLEeK6jj2HdzghTreyI/BXkmg3mnxp3zkyPuBQV
                PWKchjgGAGYS5Fl2WlPAApiiECtoRHuOec4zSnaqW4EWG7WK2NAAe15itAnWhmMO
                pgWVSbooi4iTsjQc2KRVbrcc0N6ZVTsj9CLg+SlmJuwgUHfbSguPvuUCYHBBXtSu
                UDkiFCbLsjtzdFVHB3mBOagwE0TlBIqulhMlQg+5U8Sb/M3kHN48+qvWBkofZ6aY
                MBzdLNvcGJVXZsb/XItW9XcCAwEAAaNjMGEwDwYDVR0TAQH/BAUwAwEB/zAfBgNV
                HSMEGDAWgBT5YLvU49U09rj1BoAlp3PbRmmonjAdBgNVHQ4EFgQU+WC71OPVNPa4
                9QaAJadz20ZpqJ4wDgYDVR0PAQH/BAQDAgGGMA0GCSqGSIb3DQEBCwUAA4ICAQBW
                s47LCp1Jjr+kxJG7ZhcFUZh1++VQLHqe8RT6q9OKPv+RKY9ji9i0qVQBDb6Thi/5
                Sm3HXvVX+cpVHBK+Rw82xd9qt9t1wkclf7nxY/hoLVUE0fKNsKTPvDxeH3jnpaAg
                cLAExbf3cqfeIg29MyVGjGSSJuM+LmOW2puMPfgYCdcDzH2GguDKBAdRUNf/ktUM
                79qGn5nX67evaOI5JpS6aLe/g9Pqemc9YmeuJeVy6OLk7K4S9ksrPJ/psEDzOFSz
                /bdoyNrGj1E8svuR3Bznm53htw1yj+KkxKl4+esUrMZDBcJlOSgYAsOCsp0FvmXt
                ll9ldDz7CTUue5wT/RsPXcdtgTpWD8w74a8CLyKsRspGPKAcTNZEtF4uXBVmCeEm
                Kf7GUmG6sXP/wwyc5WxqlD8UykAWlYTzWamsX0xhk23RO8yilQwipmdnRC652dKK
                QbNmC1r7fSOl8hqw/96bg5Qu0T/fkreRrwU7ZcegbLHNYhLDkBvjJc40vG93drEQ
                w/cFGsDWr3RiSBd3kmmQYRzelYB0VI8YHMPzA9C/pEN1hlMYegouCRw2n5H9gooi
                S9EOUCXdywMMF8mDAAhONU2Ki+3wApRmLER/y5UnlhetCTCstnEXbosX9hwJ1C07
                mKVx01QT2WDz9UtmT/rx7iASjbSsV7FFY6GsdqnC+w==
                -----END CERTIFICATE-----
                === /C=US/ST=Texas/L=Houston/O=SSL Corporation/CN=SSL.com Root Certification Authority ECC
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 8495723813297216424 (0x75e6dfcbc1685ba8)
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: Feb 12 18:14:03 2016 GMT
                            Not After : Feb 12 18:14:03 2041 GMT
                        Subject: C=US, ST=Texas, L=Houston, O=SSL Corporation, CN=SSL.com Root Certification Authority ECC
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                82:D1:85:73:30:E7:35:04:D3:8E:02:92:FB:E5:A4:D1:C4:21:E8:CD
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:82:D1:85:73:30:E7:35:04:D3:8E:02:92:FB:E5:A4:D1:C4:21:E8:CD

                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=C3:19:7C:39:24:E6:54:AF:1B:C4:AB:20:95:7A:E2:C3:0E:13:02:6A
                SHA256 Fingerprint=34:17:BB:06:CC:60:07:DA:1B:96:1C:92:0B:8A:B4:CE:3F:AD:82:0E:4A:A3:0B:9A:CB:C4:A7:4E:BD:CE:BC:65
                -----BEGIN CERTIFICATE-----
                MIICjTCCAhSgAwIBAgIIdebfy8FoW6gwCgYIKoZIzj0EAwIwfDELMAkGA1UEBhMC
                VVMxDjAMBgNVBAgMBVRleGFzMRAwDgYDVQQHDAdIb3VzdG9uMRgwFgYDVQQKDA9T
                U0wgQ29ycG9yYXRpb24xMTAvBgNVBAMMKFNTTC5jb20gUm9vdCBDZXJ0aWZpY2F0
                aW9uIEF1dGhvcml0eSBFQ0MwHhcNMTYwMjEyMTgxNDAzWhcNNDEwMjEyMTgxNDAz
                WjB8MQswCQYDVQQGEwJVUzEOMAwGA1UECAwFVGV4YXMxEDAOBgNVBAcMB0hvdXN0
                b24xGDAWBgNVBAoMD1NTTCBDb3Jwb3JhdGlvbjExMC8GA1UEAwwoU1NMLmNvbSBS
                b290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5IEVDQzB2MBAGByqGSM49AgEGBSuB
                BAAiA2IABEVuqVDEpiM2nl8ojRfLliJkP9x6jh3MCLOicSS6jkm5BBtHllirLZXI
                7Z4INcgn64mMU1jrYor+8FsPazFSY0E7ic3s7LaNGdM0B9y7xgZ/wkWV7Mt/qCPg
                CemB+vNH06NjMGEwHQYDVR0OBBYEFILRhXMw5zUE044CkvvlpNHEIejNMA8GA1Ud
                EwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAUgtGFczDnNQTTjgKS++Wk0cQh6M0wDgYD
                VR0PAQH/BAQDAgGGMAoGCCqGSM49BAMCA2cAMGQCMG/n61kRpGDPYbCWe+0F+S8T
                kdzt5fxQaxFGRrMcIQBiu77D5+jNB5n5DQtdcj7EqgIwH7y6C+IwJPt8bYBVCpk+
                gA0z5Wajs6O7pdWLjwkspl1+4vAHCGht0nxpbl/f5Wpl
                -----END CERTIFICATE-----
                === /C=US/ST=Texas/L=Houston/O=SSL Corporation/CN=SSL.com Root Certification Authority RSA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 8875640296558310041 (0x7b2c9bd316803299)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb 12 17:39:39 2016 GMT
                            Not After : Feb 12 17:39:39 2041 GMT
                        Subject: C=US, ST=Texas, L=Houston, O=SSL Corporation, CN=SSL.com Root Certification Authority RSA
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                DD:04:09:07:A2:F5:7A:7D:52:53:12:92:95:EE:38:80:25:0D:A6:59
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:DD:04:09:07:A2:F5:7A:7D:52:53:12:92:95:EE:38:80:25:0D:A6:59

                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=B7:AB:33:08:D1:EA:44:77:BA:14:80:12:5A:6F:BD:A9:36:49:0C:BB
                SHA256 Fingerprint=85:66:6A:56:2E:E0:BE:5C:E9:25:C1:D8:89:0A:6F:76:A8:7E:C1:6D:4D:7D:5F:29:EA:74:19:CF:20:12:3B:69
                -----BEGIN CERTIFICATE-----
                MIIF3TCCA8WgAwIBAgIIeyyb0xaAMpkwDQYJKoZIhvcNAQELBQAwfDELMAkGA1UE
                BhMCVVMxDjAMBgNVBAgMBVRleGFzMRAwDgYDVQQHDAdIb3VzdG9uMRgwFgYDVQQK
                DA9TU0wgQ29ycG9yYXRpb24xMTAvBgNVBAMMKFNTTC5jb20gUm9vdCBDZXJ0aWZp
                Y2F0aW9uIEF1dGhvcml0eSBSU0EwHhcNMTYwMjEyMTczOTM5WhcNNDEwMjEyMTcz
                OTM5WjB8MQswCQYDVQQGEwJVUzEOMAwGA1UECAwFVGV4YXMxEDAOBgNVBAcMB0hv
                dXN0b24xGDAWBgNVBAoMD1NTTCBDb3Jwb3JhdGlvbjExMC8GA1UEAwwoU1NMLmNv
                bSBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5IFJTQTCCAiIwDQYJKoZIhvcN
                AQEBBQADggIPADCCAgoCggIBAPkP3aMrfcvQKv7sZ4Wm5y4bunfh4/WvpOz6Sl2R
                xFdHaxh3a3by/ZPkPQ/CFp4LZsNWlJ4Xg4XOVu/yFv0AYvUiCVToZRdOQbngT0aX
                qhvIuG5iXmmxX9sqAn78bMrzQdjt0Oj8P2FI7bADFB0QDksZ4LtO7IZl/zbzXmcC
                C52GVWH9ejjt/uIZALdvoVBidXQ8oPrIJZK0bnoix/geoeOy3ZExqysdBP+lSgQ3
                6YWkMyv94tZVNHwZpEpox7Ko07fKoZOI68GXvIz5HdkihCR0xwQ9aqkpk8zruFvh
                /l8lqjRYyMEjVJ0bmBHDOJx+PYZspQ9AhnwC9FwCTyjLrnGfDzrIM/4RJTXq/LrF
                YD3ZfBjVsqnTdXgDciLKOsMf7yzlLqn6niy2UUb9rwPW6mBo6oUWNmuF6R7As93E
                JNyAKoFBbZQ+yODJgUEAnl6/f8UImKIYLEJAs/lvOCdLToD0PYFH4Ih86hzOtXVc
                US4cK38acijnALXRdMbX5J+tB5O2UzU1/Dfkw/ZdFr4hc96SCvigY2q8lpJqPvi8
                ZVWb3vUNiSYE/CUapiVpy8JtynziWV+XrOvvLsi81xtZPCvM8hnIk2snYxnP/Okm
                +Mpxm3+T/jRnhE6Z6/yzeAkzcLpmpnbtG3PrGqUNxCITIJRWCk4sbE6x/c+cCbqi
                M+2HAgMBAAGjYzBhMB0GA1UdDgQWBBTdBAkHovV6fVJTEpKV7jiAJQ2mWTAPBgNV
                HRMBAf8EBTADAQH/MB8GA1UdIwQYMBaAFN0ECQei9Xp9UlMSkpXuOIAlDaZZMA4G
                A1UdDwEB/wQEAwIBhjANBgkqhkiG9w0BAQsFAAOCAgEAIBgRlCn7Jp0cHh5wYfGV
                cpNxJK1ok1iOMq8bs3AD/CUrdIWQPXhq9LmLpZc7tRiRux6n+UBbkflVma8eEdBc
                Hadm47GUBwwyOabqG7B52B2ccETjit3E+ZUfijhDPwGFpUenPUayvOUiaPd7nNgs
                PgohyC0zrL/FgZkxdMF1ccW+sfAjRfSda/wZY52jvATGGAslu1OJD7OAUN5F7kR/
                q5R4ZJjT9ijdh9hwZXT7DrkT66cPYakylszeu+1jTBi7qUD3oFRuIIhxdRjqerQ0
                cuAjJ3dctpDqhiVAq+8zD8ufgr6iIPv2tS0a5sKFsXQP+8hlAqRSAUfdSSLBv9jr
                a6x+3uxjMxW3IwiPxg+NQVrdjsW5j+VFP3jbutIbQLH+cU0/4IGiul607BXgk90I
                H37hVZkLId6Tngr75qNJvTYw/ud3sqB1l7UtgYgXZSD32pAAn8lSzDLKNXz1PQ/Y
                K9f1JmzJBjSWFupwWRoyeXkLtoh/D1JIPb9s2KJELtFOt3JY04kTlf5Eq/jXixtu
                nLwsoFvVagCvXzfh1foQC5ichucmj87w7G6KVwuA406ywKBjYZC6VWg3dGq2ktuf
                oYYitmUnDuy2n0Jg5GfCtdpBC8TTi2EbvPofkSvXRAdeuims2cXp71NIWuuA8ShY
                Ic2wBlX7Jz9TkHCpBB5XJ7k=
                -----END CERTIFICATE-----

                ### Staat der Nederlanden

                === /C=NL/O=Staat der Nederlanden/CN=Staat der Nederlanden EV Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 10000013 (0x98968d)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Dec  8 11:19:29 2010 GMT
                            Not After : Dec  8 11:10:28 2022 GMT
                        Subject: C=NL, O=Staat der Nederlanden, CN=Staat der Nederlanden EV Root CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                FE:AB:00:90:98:9E:24:FC:A9:CC:1A:8A:FB:27:B8:BF:30:6E:A8:3B
                SHA1 Fingerprint=76:E2:7E:C1:4F:DB:82:C1:C0:A6:75:B5:05:BE:3D:29:B4:ED:DB:BB
                SHA256 Fingerprint=4D:24:91:41:4C:FE:95:67:46:EC:4C:EF:A6:CF:6F:72:E2:8A:13:29:43:2F:9D:8A:90:7A:C4:CB:5D:AD:C1:5A
                -----BEGIN CERTIFICATE-----
                MIIFcDCCA1igAwIBAgIEAJiWjTANBgkqhkiG9w0BAQsFADBYMQswCQYDVQQGEwJO
                TDEeMBwGA1UECgwVU3RhYXQgZGVyIE5lZGVybGFuZGVuMSkwJwYDVQQDDCBTdGFh
                dCBkZXIgTmVkZXJsYW5kZW4gRVYgUm9vdCBDQTAeFw0xMDEyMDgxMTE5MjlaFw0y
                MjEyMDgxMTEwMjhaMFgxCzAJBgNVBAYTAk5MMR4wHAYDVQQKDBVTdGFhdCBkZXIg
                TmVkZXJsYW5kZW4xKTAnBgNVBAMMIFN0YWF0IGRlciBOZWRlcmxhbmRlbiBFViBS
                b290IENBMIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA48d+ifkkSzrS
                M4M1LGns3Amk41GoJSt5uAg94JG6hIXGhaTK5skuU6TJJB79VWZxXSzFYGgEt9nC
                UiY4iKTWO0Cmws0/zZiTs1QUWJZV1VD+hq2kY39ch/aO5ieSZxeSAgMs3NZmdO3d
                Z//BYY1jTw+bbRcwJu+r0h8QoPnFfxZpgQNH7R5ojXKhTbImxrpsX23Wr9GxE46p
                rfNeaXUmGD5BKyF/7otdBwadQ8QpCiv8Kj6GyzyDOvnJDdrFmeK8eEEzduG/L13l
                pJhQDBXd4Pqcfzho0LKmeqfRMb1+ilgnQ7O6M5HTp5gVXJrm0w912fxBmJc+qiXb
                j5IusHsMX/FjqTf5m3VpTCgmJdrV8hJwRVXj33NeN/UhbJCONVrJ0yPr08C+eKxC
                KFhmpUZtcALXEPlLVPxdhkqHz3/KRawRWrUgUY0viEeXOcDPusBCAUCZSCELa6fS
                /ZbV0b5GnUngC6agIk440ME8MLxwjyx1zNDFjFE7PZQIZCZhfbnDZY8UnCHQqv0X
                cgOPvZuM5l5Tnrmd74K74bzickFbIZTTRTeU0d8JOV3nI6qaHcptqAqGhYqCvkIH
                1vI4gnPah1vlPNOePqc7nvQDs/nxfRN0Av+7oeX6AHkcpmZBiFxgV6YuCcS6/ZrP
                px9Aw7vMWgpVSzs4dlG4Y4uElBbmVvMCAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB
                /zAOBgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYEFP6rAJCYniT8qcwaivsnuL8wbqg7
                MA0GCSqGSIb3DQEBCwUAA4ICAQDPdyxuVr5Os7aEAJSrR8kN0nbHhp8dB9O2tLsI
                eK9p0gtJ3jPFrK3CiAJ9Brc1AsFgyb/E6JTe1NOpEyVa/m6irn0F3H3zbPB+po3u
                2dfOWBfoqSmuc0iH55vKbimhZF8ZE/euBhD/UcabTVUlT5OZEAFTdfETzsemQUHS
                v4ilf0X8rLiltTMMgsT7B/Zq5SWEXwbKwYY5EdtYzXc7LMJMD16a4/CrPmEbUCTC
                wPTxGfARKbalGAKb12NMcIxHowNDXLldRqANb/9Zjr7dn3LDWyvfjFvO5QxGbJKy
                CqNMVEIYFRIYvdr8unRu/8G2oGTYqV9Vrp9canaW2HNnh/tNf1zuacpzEPuKqf2e
                vTY4SUmH9A4U8OmHuD+nT3pajnnUk+S7aFKErGzp85hwVXIy+TSrK0m1zSBi5Dp6
                Z2Orltxtrpfs/J92VoguZs9btsmksNcFuuEnL5O7Jiqik7Ab846+HUCjuTaPPoIa
                Gl6I6lD4WeKDRikL40Rc4ZW2aZCaFG+XroHPaO+Zmr615+F/+PoTRxZMzG0IQOeL
                eG9QgkRQP2YGiqtDhFZKDyAthg710tvSeopLzaXoTvFeJiUBWSOgftL2fiFX1ye8
                FVdMpEbB4IMeDExNH08GGeL5qPQ6gqGyeUN51q1veieQA6TqJIc/2b3Z6fJfUEkc
                7uzXLg==
                -----END CERTIFICATE-----
                === /C=NL/O=Staat der Nederlanden/CN=Staat der Nederlanden Root CA - G3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 10003001 (0x98a239)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Nov 14 11:28:42 2013 GMT
                            Not After : Nov 13 23:00:00 2028 GMT
                        Subject: C=NL, O=Staat der Nederlanden, CN=Staat der Nederlanden Root CA - G3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                54:AD:FA:C7:92:57:AE:CA:35:9C:2E:12:FB:E4:BA:5D:20:DC:94:57
                SHA1 Fingerprint=D8:EB:6B:41:51:92:59:E0:F3:E7:85:00:C0:3D:B6:88:97:C9:EE:FC
                SHA256 Fingerprint=3C:4F:B0:B9:5A:B8:B3:00:32:F4:32:B8:6F:53:5F:E1:72:C1:85:D0:FD:39:86:58:37:CF:36:18:7F:A6:F4:28
                -----BEGIN CERTIFICATE-----
                MIIFdDCCA1ygAwIBAgIEAJiiOTANBgkqhkiG9w0BAQsFADBaMQswCQYDVQQGEwJO
                TDEeMBwGA1UECgwVU3RhYXQgZGVyIE5lZGVybGFuZGVuMSswKQYDVQQDDCJTdGFh
                dCBkZXIgTmVkZXJsYW5kZW4gUm9vdCBDQSAtIEczMB4XDTEzMTExNDExMjg0MloX
                DTI4MTExMzIzMDAwMFowWjELMAkGA1UEBhMCTkwxHjAcBgNVBAoMFVN0YWF0IGRl
                ciBOZWRlcmxhbmRlbjErMCkGA1UEAwwiU3RhYXQgZGVyIE5lZGVybGFuZGVuIFJv
                b3QgQ0EgLSBHMzCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAL4yolQP
                cPssXFnrbMSkUeiFKrPMSjTysF/zDsccPVMeiAho2G89rcKezIJnByeHaHE6n3WW
                IkYFsO2tx1ueKt6c/DrGlaf1F2cY5y9JCAxcz+bMNO14+1Cx3Gsy8KL+tjzk7FqX
                xz8ecAgwoNzFs21v0IJyEavSgWhZghe3eJJg+szeP4TrjTgzkApyI/o1zCZxMdFy
                KJLZWyNtZrVtB0LrpjPOktvA9mxjeM3KTj215VKb8b475lRgsGYeCasH/lSJEULR
                9yS6YHgamPfJEf0WwTUaVHXvQ9Plrk7O53vDxk5hUUurmkVLoR9BvUhTFXFkC4az
                5S6+zqQbwSmEorXLCCN2QyIkHxcE1G6cxvx/K2Ya7Irl1s9N9WMJtxU51nus6+N8
                6U78dULI7ViVDAZCopz35HCz33JvWjdAidiFpNfxC95DGdRKWCyMijmev4SH8RY7
                Ngzp07TKbBlBUgmhHbBqv4LvcFEhMtwFdozL92TkA1CvjJFnq8Xy7ljY3r735zHP
                bMk7ccHViLVlvMDoFxcHErVc0qsgk7TmgoNwNsXNo42ti+yjwUOH5kPiNL6VizXt
                BznaqB16nzaeErAMZRKQFWDZJkBE41ZgpRDUajz9QdwOWke275dhdU/Z/seyHdTt
                XUmzqWrLZoQT1Vyg3N9udwbRcXXIV2+vD3dbAgMBAAGjQjBAMA8GA1UdEwEB/wQF
                MAMBAf8wDgYDVR0PAQH/BAQDAgEGMB0GA1UdDgQWBBRUrfrHkleuyjWcLhL75Lpd
                INyUVzANBgkqhkiG9w0BAQsFAAOCAgEAMJmdBTLIXg47mAE6iqTnB/d6+Oea31BD
                U5cqPco8R5gu4RV78ZLzYdqQJRZlwJ9UXQ4DO1t3ApyEtg2YXzTdO2PCwyiBwpwp
                LiniyMMB8jPqKqrMCQj3ZWfGzd/TtiunvczRDnBfuCPRy5FOCvTIeuXZYzbB1N/8
                Ipf3YF3qKS9Ysr1YvY2WTxB1v0h7PVGHoTx0IsL8B3+A3MSs/mrBcDCw6Y5p4ixp
                gZQJut3+TcCDjJRYwEYgr5wfAvg1VUkvRtTA8KCWAg8zxXHzniN9lLf9OtMJgwYh
                /WA9rjLA0u6NpvDntIJ8CsxwyXmA+P5M9zWEGYox+wrZ13+b8KKaa8MFSu1BYBQw
                0aoRQm7TIwIEC8Zl3d1Sd9qBa7Ko+gE4uZbqKmxnl4mUnrzhVNXkanjvSr0rmj1A
                fsbAddJu+2gw7OyLnflJNZoaLNmzlTnVHpL3prllL+U9bTpITAjc5CgSKL59NVzq
                4BZ+Extq1z7XnvwtdbLBFNUjA9tbbws+eC8N3jONFrdI54OagQ97wUNNVQQXOEpR
                1VmiiXTTn74eS9fGbbeIJG9gkaSChVtWQbzQRKtqE77RLFi3EjNYsjdj3BP1lB0/
                QFH1T/U67cjF68IeHRaVesd+QnGTbksVtzDfqu1XhUisHWrdOWnk4Xl4vs4Fv6EM
                94B7IWcnMFk=
                -----END CERTIFICATE-----

                ### Starfield Technologies, Inc.

                === /C=US/O=Starfield Technologies, Inc./OU=Starfield Class 2 Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jun 29 17:39:16 2004 GMT
                            Not After : Jun 29 17:39:16 2034 GMT
                        Subject: C=US, O=Starfield Technologies, Inc., OU=Starfield Class 2 Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                BF:5F:B7:D1:CE:DD:1F:86:F4:5B:55:AC:DC:D7:10:C2:0E:A9:88:E7
                            X509v3 Authority Key Identifier:
                                keyid:BF:5F:B7:D1:CE:DD:1F:86:F4:5B:55:AC:DC:D7:10:C2:0E:A9:88:E7
                                DirName:/C=US/O=Starfield Technologies, Inc./OU=Starfield Class 2 Certification Authority
                                serial:00

                            X509v3 Basic Constraints:
                                CA:TRUE
                SHA1 Fingerprint=AD:7E:1C:28:B0:64:EF:8F:60:03:40:20:14:C3:D0:E3:37:0E:B5:8A
                SHA256 Fingerprint=14:65:FA:20:53:97:B8:76:FA:A6:F0:A9:95:8E:55:90:E4:0F:CC:7F:AA:4F:B7:C2:C8:67:75:21:FB:5F:B6:58
                -----BEGIN CERTIFICATE-----
                MIIEDzCCAvegAwIBAgIBADANBgkqhkiG9w0BAQUFADBoMQswCQYDVQQGEwJVUzEl
                MCMGA1UEChMcU3RhcmZpZWxkIFRlY2hub2xvZ2llcywgSW5jLjEyMDAGA1UECxMp
                U3RhcmZpZWxkIENsYXNzIDIgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMDQw
                NjI5MTczOTE2WhcNMzQwNjI5MTczOTE2WjBoMQswCQYDVQQGEwJVUzElMCMGA1UE
                ChMcU3RhcmZpZWxkIFRlY2hub2xvZ2llcywgSW5jLjEyMDAGA1UECxMpU3RhcmZp
                ZWxkIENsYXNzIDIgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwggEgMA0GCSqGSIb3
                DQEBAQUAA4IBDQAwggEIAoIBAQC3Msj+6XGmBIWtDBFk385N78gDGIc/oav7PKaf
                8MOh2tTYbitTkPskpD6E8J7oX+zlJ0T1KKY/e97gKvDIr1MvnsoFAZMej2YcOadN
                +lq2cwQlZut3f+dZxkqZJRRU6ybH838Z1TBwj6+wRir/resp7defqgSHo9T5iaU0
                X9tDkYI22WY8sbi5gv2cOj4QyDvvBmVmepsZGD3/cVE8MC5fvj13c7JdBmzDI1aa
                K4UmkhynArPkPw2vCHmCuDY96pzTNbO8acr1zJ3o/WSNF4Azbl5KXZnJHoe0nRrA
                1W4TNSNe35tfPe/W93bC6j67eA0cQmdrBNj41tpvi/JEoAGrAgEDo4HFMIHCMB0G
                A1UdDgQWBBS/X7fRzt0fhvRbVazc1xDCDqmI5zCBkgYDVR0jBIGKMIGHgBS/X7fR
                zt0fhvRbVazc1xDCDqmI56FspGowaDELMAkGA1UEBhMCVVMxJTAjBgNVBAoTHFN0
                YXJmaWVsZCBUZWNobm9sb2dpZXMsIEluYy4xMjAwBgNVBAsTKVN0YXJmaWVsZCBD
                bGFzcyAyIENlcnRpZmljYXRpb24gQXV0aG9yaXR5ggEAMAwGA1UdEwQFMAMBAf8w
                DQYJKoZIhvcNAQEFBQADggEBAAWdP4id0ckaVaGsafPzWdqbAYcaT1epoXkJKtv3
                L7IezMdeatiDh6GX70k1PncGQVhiv45YuApnP+yz3SFmH8lU+nLMPUxA2IGvd56D
                eruix/U0F47ZEUD0/CwqTRV/p2JdLiXTAAsgGh1o+Re49L2L7ShZ3U0WixeDyLJl
                xy16paq8U4Zt3VekyvggQQto8PT7dL5WXXp59fkdheMtlb71cZBDzI0fmgAKhynp
                VSJYACPq4xJDKVtHCN2MQWplBqjlIapBtJUhlbl90TSrE9atvNziPTnNvT51cKEY
                WQPJIrSPnNVeKtelttQKbfi3QBFGmh95DmK/D5fs4C8fF5Q=
                -----END CERTIFICATE-----
                === /C=US/ST=Arizona/L=Scottsdale/O=Starfield Technologies, Inc./CN=Starfield Root Certificate Authority - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Sep  1 00:00:00 2009 GMT
                            Not After : Dec 31 23:59:59 2037 GMT
                        Subject: C=US, ST=Arizona, L=Scottsdale, O=Starfield Technologies, Inc., CN=Starfield Root Certificate Authority - G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                7C:0C:32:1F:A7:D9:30:7F:C4:7D:68:A3:62:A8:A1:CE:AB:07:5B:27
                SHA1 Fingerprint=B5:1C:06:7C:EE:2B:0C:3D:F8:55:AB:2D:92:F4:FE:39:D4:E7:0F:0E
                SHA256 Fingerprint=2C:E1:CB:0B:F9:D2:F9:E1:02:99:3F:BE:21:51:52:C3:B2:DD:0C:AB:DE:1C:68:E5:31:9B:83:91:54:DB:B7:F5
                -----BEGIN CERTIFICATE-----
                MIID3TCCAsWgAwIBAgIBADANBgkqhkiG9w0BAQsFADCBjzELMAkGA1UEBhMCVVMx
                EDAOBgNVBAgTB0FyaXpvbmExEzARBgNVBAcTClNjb3R0c2RhbGUxJTAjBgNVBAoT
                HFN0YXJmaWVsZCBUZWNobm9sb2dpZXMsIEluYy4xMjAwBgNVBAMTKVN0YXJmaWVs
                ZCBSb290IENlcnRpZmljYXRlIEF1dGhvcml0eSAtIEcyMB4XDTA5MDkwMTAwMDAw
                MFoXDTM3MTIzMTIzNTk1OVowgY8xCzAJBgNVBAYTAlVTMRAwDgYDVQQIEwdBcml6
                b25hMRMwEQYDVQQHEwpTY290dHNkYWxlMSUwIwYDVQQKExxTdGFyZmllbGQgVGVj
                aG5vbG9naWVzLCBJbmMuMTIwMAYDVQQDEylTdGFyZmllbGQgUm9vdCBDZXJ0aWZp
                Y2F0ZSBBdXRob3JpdHkgLSBHMjCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoC
                ggEBAL3twQP89o/8ArFvW59I2Z154qK3A2FWGMNHttfKPTUuiUP3oWmb3ooa/RMg
                nLRJdzIpVv257IzdIvpy3Cdhl+72WoTsbhm5iSzchFvVdPtrX8WJpRBSiUZV9Lh1
                HOZ/5FSuS/hVclcCGfgXcVnrHigHdMWdSL5stPSksPNkN3mSwOxGXn/hbVNMYq/N
                Hwtjuzqd+/x5AJhhdM8mgkBj87JyahkNmcrUDnXMN/uLicFZ8WJ/X7NfZTD4p7dN
                dloedl40wOiWVpmKs/B/pM293DIxfJHP4F8R+GuqSVzRmZTRouNjWwl2tVZi4Ut0
                HZbUJtQIBFnQmA4O5t78w+wfkPECAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAO
                BgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYEFHwMMh+n2TB/xH1oo2Kooc6rB1snMA0G
                CSqGSIb3DQEBCwUAA4IBAQARWfolTwNvlJk7mh+ChTnUdgWUXuEok21iXQnCoKjU
                sHU48TRqneSfioYmUeYs0cYtbpUgSpIB7LiKZ3sx4mcujJUDJi5DnUox9g61DLu3
                4jd/IroAow57UvtruzvE03lRTs2Q9GcHGcg8RnoNAX3FWOdt5oUwF5okxBDgBPfg
                8n/Uqgr/Qh037ZTlZFkSIHc40zI+OIF1lnP6aI+xy84fxez6nH7PfrHxBy22/L/K
                pL/QlwVKvOoYKAKQvVR4CSFx09F9HdkWsKlhPdAKACL8x3vLCWRFCztAgfd9fDL1
                mMpYjn0q7pBZc2T5NnReJaH1ZgUufzkVqSr7UIuOhWn0
                -----END CERTIFICATE-----
                === /C=US/ST=Arizona/L=Scottsdale/O=Starfield Technologies, Inc./CN=Starfield Services Root Certificate Authority - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Sep  1 00:00:00 2009 GMT
                            Not After : Dec 31 23:59:59 2037 GMT
                        Subject: C=US, ST=Arizona, L=Scottsdale, O=Starfield Technologies, Inc., CN=Starfield Services Root Certificate Authority - G2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                9C:5F:00:DF:AA:01:D7:30:2B:38:88:A2:B8:6D:4A:9C:F2:11:91:83
                SHA1 Fingerprint=92:5A:8F:8D:2C:6D:04:E0:66:5F:59:6A:FF:22:D8:63:E8:25:6F:3F
                SHA256 Fingerprint=56:8D:69:05:A2:C8:87:08:A4:B3:02:51:90:ED:CF:ED:B1:97:4A:60:6A:13:C6:E5:29:0F:CB:2A:E6:3E:DA:B5
                -----BEGIN CERTIFICATE-----
                MIID7zCCAtegAwIBAgIBADANBgkqhkiG9w0BAQsFADCBmDELMAkGA1UEBhMCVVMx
                EDAOBgNVBAgTB0FyaXpvbmExEzARBgNVBAcTClNjb3R0c2RhbGUxJTAjBgNVBAoT
                HFN0YXJmaWVsZCBUZWNobm9sb2dpZXMsIEluYy4xOzA5BgNVBAMTMlN0YXJmaWVs
                ZCBTZXJ2aWNlcyBSb290IENlcnRpZmljYXRlIEF1dGhvcml0eSAtIEcyMB4XDTA5
                MDkwMTAwMDAwMFoXDTM3MTIzMTIzNTk1OVowgZgxCzAJBgNVBAYTAlVTMRAwDgYD
                VQQIEwdBcml6b25hMRMwEQYDVQQHEwpTY290dHNkYWxlMSUwIwYDVQQKExxTdGFy
                ZmllbGQgVGVjaG5vbG9naWVzLCBJbmMuMTswOQYDVQQDEzJTdGFyZmllbGQgU2Vy
                dmljZXMgUm9vdCBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkgLSBHMjCCASIwDQYJKoZI
                hvcNAQEBBQADggEPADCCAQoCggEBANUMOsQq+U7i9b4Zl1+OiFOxHz/Lz58gE20p
                OsgPfTz3a3Y4Y9k2YKibXlwAgLIvWX/2h/klQ4bnaRtSmpDhcePYLQ1Ob/bISdm2
                8xpWriu2dBTrz/sm4xq6HZYuajtYlIlHVv8loJNwU4PahHQUw2eeBGg6345AWh1K
                Ts9DkTvnVtYAcMtS7nt9rjrnvDH5RfbCYM8TWQIrgMw0R9+53pBlbQLPLJGmpufe
                hRhJfGZOozptqbXuNC66DQO4M99H67FrjSXZm86B0UVGMpZwh94CDklDhbZsc7tk
                6mFBrMnUVN+HL8cisibMn1lUaJ/8viovxFUcdUBgF4UCVTmLfwUCAwEAAaNCMEAw
                DwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAQYwHQYDVR0OBBYEFJxfAN+q
                AdcwKziIorhtSpzyEZGDMA0GCSqGSIb3DQEBCwUAA4IBAQBLNqaEd2ndOxmfZyMI
                bw5hyf2E3F/YNoHN2BtBLZ9g3ccaaNnRbobhiCPPE95Dz+I0swSdHynVv/heyNXB
                ve6SbzJ08pGCL72CQnqtKrcgfU28elUSwhXqvfdqlS5sdJ/PHLTyxQGjhdByPq1z
                qwubdQxtRbeOlKyWN7Wg0I8VRw7j6IPdj/3vQQF3zCepYoUz8jcI73HPdwbeyBkd
                iEDPfUYd/x7H4c7/I9vG+o1VTqkC50cRRj70/b17KSa7qWFiNyi2LSr2EIZkyXCn
                0q23KXB56jzaYyWf/Wi3MOxw+3WKt21gZ7IeyLnp2KhvAotnDU0mV3HaIPzBSlCN
                sSi6
                -----END CERTIFICATE-----

                ### SwissSign AG

                === /C=CH/O=SwissSign AG/CN=SwissSign Gold CA - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            bb:40:1c:43:f5:5e:4f:b0
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Oct 25 08:30:35 2006 GMT
                            Not After : Oct 25 08:30:35 2036 GMT
                        Subject: C=CH, O=SwissSign AG, CN=SwissSign Gold CA - G2
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                5B:25:7B:96:A4:65:51:7E:B8:39:F3:C0:78:66:5E:E8:3A:E7:F0:EE
                            X509v3 Authority Key Identifier:
                                keyid:5B:25:7B:96:A4:65:51:7E:B8:39:F3:C0:78:66:5E:E8:3A:E7:F0:EE

                            X509v3 Certificate Policies:
                                Policy: 2.16.756.1.89.1.2.1.1
                                  CPS: http://repository.swisssign.com/

                SHA1 Fingerprint=D8:C5:38:8A:B7:30:1B:1B:6E:D4:7A:E6:45:25:3A:6F:9F:1A:27:61
                SHA256 Fingerprint=62:DD:0B:E9:B9:F5:0A:16:3E:A0:F8:E7:5C:05:3B:1E:CA:57:EA:55:C8:68:8F:64:7C:68:81:F2:C8:35:7B:95
                -----BEGIN CERTIFICATE-----
                MIIFujCCA6KgAwIBAgIJALtAHEP1Xk+wMA0GCSqGSIb3DQEBBQUAMEUxCzAJBgNV
                BAYTAkNIMRUwEwYDVQQKEwxTd2lzc1NpZ24gQUcxHzAdBgNVBAMTFlN3aXNzU2ln
                biBHb2xkIENBIC0gRzIwHhcNMDYxMDI1MDgzMDM1WhcNMzYxMDI1MDgzMDM1WjBF
                MQswCQYDVQQGEwJDSDEVMBMGA1UEChMMU3dpc3NTaWduIEFHMR8wHQYDVQQDExZT
                d2lzc1NpZ24gR29sZCBDQSAtIEcyMIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIIC
                CgKCAgEAr+TufoskDhJuqVAtFkQ7kpJcyrhdhJJCEyq8ZVeCQD5XJM1QiyUqt2/8
                76LQwB8CJEoTlo8jE+YoWACjR8cGp4QjK7u9lit/VcyLwVcfDmJlD909Vopz2q5+
                bbqBHH5CjCA12UNNhPqE21Is8w4ndwtrvxEvcnifLtg+5hg3Wipy+dpikJKVyh+c
                6bM8K8vzARO/Ws/BtQpgvd21mWRTuKCWs2/iJneRjOBiEAKfNA+k1ZIzUd6+jbqE
                emA8atufK+ze3gE/bk3lUIbLtK/tREDFylqM2tIrfKjuvqblCqoOpd8FUrdVxyJd
                MmqXl2MT28nbeTZ7hTpKxVKJ+STnnXepgv9VHKVxaSvRAiTysybUa9oEVeXBCsdt
                MDeQKuSeFDNeFhdVxVu1yzSJkvGdJo+hB9TGsnhQ2wwMC3wLjEHXuendjIj3o02y
                MszYF9rNt85mndT9Xv+9lz4pded+p2JYryU0pUHHPbwNUMoDAw8IWh+Vc3hiv69y
                FGkOpeUDDniOJihC8AcLYiAQZzlG+qkDzAQ4embvIIO1jEpWjpEA/I5cgt6IoMPi
                aG59je883WX0XaxR7ySArqpWl2/5rX3aYT+YdzylkbYcjCbaZaIJbcHiVOO5ykxM
                gI93e2CaHt+28kgeDrpOVG2Y4OGiGqJ3UM/EY5LsRxmd6+ZrzsECAwEAAaOBrDCB
                qTAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUWyV7
                lqRlUX64OfPAeGZe6Drn8O4wHwYDVR0jBBgwFoAUWyV7lqRlUX64OfPAeGZe6Drn
                8O4wRgYDVR0gBD8wPTA7BglghXQBWQECAQEwLjAsBggrBgEFBQcCARYgaHR0cDov
                L3JlcG9zaXRvcnkuc3dpc3NzaWduLmNvbS8wDQYJKoZIhvcNAQEFBQADggIBACe6
                45R88a7A3hfm5djV9VSwg/S7zV4Fe0+fdWavPOhWfvxyeDgD2StiGwC5+OlgzczO
                UYrHUDFu4Up+GC9pWbY9ZIEr44OE5iKHjn3g7gKZYbge9LgriBIWhMIxkziWMaa5
                O1M/wySTVltpkuzFwbs4AOPsF6m43Md8AYOfMke6UiI0HTJ6CVanfCU2qT1L2sCC
                bwq7EsiHSycR+R4tx5M/nttfJmtS2S6K8RTGRI0Vqbe/vd6mGu6uLftIdxf+u+yv
                GPUqUfA5hJeVbG4bwyvEdGB5JbAKJ9/fXtI5z0V9QkvfsywexcZdylU6oJxpmo/a
                77KwPJ+HbBIrZXAVUjEaJM9vMSNQH4xPjyPDdEFjHFWoFN0+4FFQz/EbMFYOkrCC
                hdiDyyJkvC24JdVUorgG6q2SpCSgwYa1ShNqR88uC1aVVMvOmttqtKay20EIhid3
                92qgQmwLOM7XdVAyksLfKzAiSNDVQTglXaTpXZ/GlHXQRf0wl0OPkKsKx4ZzYEpp
                Ld6leNcG2mqeSz53OiATIgHQv2ieY2BrNU0LbbqhPcCT4H8js1WtciVORvnSFu+w
                ZMEBnunKoGqYDs/YYPIvSbjkQuE4NRb0yG5P94FW6LqjviOvrv1vA+ACOzB2+htt
                Qc8Bsem4yWb02ybzOqR08kkkW8mw0FfB+j564ZfJ
                -----END CERTIFICATE-----
                === /C=CH/O=SwissSign AG/CN=SwissSign Silver CA - G2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 5700383053117599563 (0x4f1bd42f54bb2f4b)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Oct 25 08:32:46 2006 GMT
                            Not After : Oct 25 08:32:46 2036 GMT
                        Subject: C=CH, O=SwissSign AG, CN=SwissSign Silver CA - G2
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                17:A0:CD:C1:E4:41:B6:3A:5B:3B:CB:45:9D:BD:1C:C2:98:FA:86:58
                            X509v3 Authority Key Identifier:
                                keyid:17:A0:CD:C1:E4:41:B6:3A:5B:3B:CB:45:9D:BD:1C:C2:98:FA:86:58

                            X509v3 Certificate Policies:
                                Policy: 2.16.756.1.89.1.3.1.1
                                  CPS: http://repository.swisssign.com/

                SHA1 Fingerprint=9B:AA:E5:9F:56:EE:21:CB:43:5A:BE:25:93:DF:A7:F0:40:D1:1D:CB
                SHA256 Fingerprint=BE:6C:4D:A2:BB:B9:BA:59:B6:F3:93:97:68:37:42:46:C3:C0:05:99:3F:A9:8F:02:0D:1D:ED:BE:D4:8A:81:D5
                -----BEGIN CERTIFICATE-----
                MIIFvTCCA6WgAwIBAgIITxvUL1S7L0swDQYJKoZIhvcNAQEFBQAwRzELMAkGA1UE
                BhMCQ0gxFTATBgNVBAoTDFN3aXNzU2lnbiBBRzEhMB8GA1UEAxMYU3dpc3NTaWdu
                IFNpbHZlciBDQSAtIEcyMB4XDTA2MTAyNTA4MzI0NloXDTM2MTAyNTA4MzI0Nlow
                RzELMAkGA1UEBhMCQ0gxFTATBgNVBAoTDFN3aXNzU2lnbiBBRzEhMB8GA1UEAxMY
                U3dpc3NTaWduIFNpbHZlciBDQSAtIEcyMIICIjANBgkqhkiG9w0BAQEFAAOCAg8A
                MIICCgKCAgEAxPGHf9N4Mfc4yfjDmUO8x/e8N+dOcbpLj6VzHVxumK4DV644N0Mv
                Fz0fyM5oEMF4rhkDKxD6LHmD9ui5aLlV8gREpzn5/ASLHvGiTSf5YXu6t+WiE7br
                YT7QbNHm+/pe7R20nqA1W6GSy/BJkv6FCgU+5tkL4k+73JU3/JHpMjUi0R86TieF
                nbAVlDLaYQ1HTWBCrpJH6INaUFjpiou5XaHc3ZlKHzZnu0jkg7Y360g6rw9njxcH
                6ATK72oxh9TAtvmUcXtnZLi2kUpCe2UuMGoM9ZDulebyzYLs2aFK7PayS+VFheZt
                eJMELpyCbTapxDFkH4aDCyr0NQp4yVXPQbBH6TCfmb5hqAaEuSh6XzjZG6k4sIN/
                c8HDO0gqgg8hm7jMqDXDhBuDsz6+pJVpATqJAHgE2cn0mRmrVn5bi4Y5FZGkECwJ
                MoBgs5PAKrYYC51+jUnyEEp/+dVGLxmSo5mnJqy7jDzmDrxHB9xzUfFwZC8I+bRH
                HTBsROopN4WSaGa8gzj+ezku01DwH/teYLappvonQfGbGHLy9YR0SslnxFSuSGTf
                jNFusB3hB48IHpmccelM2KX3RxIfdNFRnobzwqIjQAtz20um53MGjMGg6cFZrEb6
                5i/4z3GcRm25xBWNOHkDRUjvxF3XCO6HOSKGsg0PWEP3calILv3q1h8CAwEAAaOB
                rDCBqTAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQU
                F6DNweRBtjpbO8tFnb0cwpj6hlgwHwYDVR0jBBgwFoAUF6DNweRBtjpbO8tFnb0c
                wpj6hlgwRgYDVR0gBD8wPTA7BglghXQBWQEDAQEwLjAsBggrBgEFBQcCARYgaHR0
                cDovL3JlcG9zaXRvcnkuc3dpc3NzaWduLmNvbS8wDQYJKoZIhvcNAQEFBQADggIB
                AHPGgeAn0i0P4JUw4ppBf1AsX19iYamGamkYDHRJ1l2E6kFSGG9YrVBWIGrGvShp
                WJHckRE1qTodvBqlYJ7YH39FkWnZfrt4csEGDyrOj4VwYaygzQu4OSlWhDJOhrs9
                xCrZ1x9y7v5RoSJBsXECYxqCsGKrXlcSH9/L3XWgwF15kIwb4FDm3jH+mHtwX6WQ
                2K34ArZv02DdQEsixT2tOnqfGhpHkXkzuoLcMmkDlm4fS/Bx/uNncqCxv1yL5PqZ
                IseEuRuNI5c/7SXgz2W79WEE790eslpBIlqhn10s6FvJbakMDHiqYMZWjwFaDGi8
                aRl5xB9+lwW/xekkUV7U1UtT7dkjWjYDZaPBA61BMPNGG4WQr2W11bHkFlt4dR2X
                em1ZqSqPe97Dh4kQmUlzeMg9vVE1dCrV8X5pGyq7O70luJpaPXJhkGaH7gzWTdQR
                dAtq/gsD/KNVV4n+SsuuWxcFyPKNIzFTONItaj+CuY0IavdeQXRuwxF+B6wpYJE/
                OMpXEA29MC/HpeZBoNquBYeaoKRlbEwJDIm6uNO5wJOKMPqN5ZprFQFOZ6raYlY+
                hAhm0sQ2fac+EPyI4NSA5QC9qvNOBqN6avlicuMJT+ubDgEj8Z+7fNzcbBGXJbLy
                tGMU0gYqZ4yD9c7qB9iaah7s5Aq7KkzrCWA5zspi2C5u
                -----END CERTIFICATE-----

                ### T-Systems Enterprise Services GmbH

                === /C=DE/O=T-Systems Enterprise Services GmbH/OU=T-Systems Trust Center/CN=T-TeleSec GlobalRoot Class 2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1 (0x1)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct  1 10:40:14 2008 GMT
                            Not After : Oct  1 23:59:59 2033 GMT
                        Subject: C=DE, O=T-Systems Enterprise Services GmbH, OU=T-Systems Trust Center, CN=T-TeleSec GlobalRoot Class 2
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                BF:59:20:36:00:79:A0:A0:22:6B:8C:D5:F2:61:D2:B8:2C:CB:82:4A
                SHA1 Fingerprint=59:0D:2D:7D:88:4F:40:2E:61:7E:A5:62:32:17:65:CF:17:D8:94:E9
                SHA256 Fingerprint=91:E2:F5:78:8D:58:10:EB:A7:BA:58:73:7D:E1:54:8A:8E:CA:CD:01:45:98:BC:0B:14:3E:04:1B:17:05:25:52
                -----BEGIN CERTIFICATE-----
                MIIDwzCCAqugAwIBAgIBATANBgkqhkiG9w0BAQsFADCBgjELMAkGA1UEBhMCREUx
                KzApBgNVBAoMIlQtU3lzdGVtcyBFbnRlcnByaXNlIFNlcnZpY2VzIEdtYkgxHzAd
                BgNVBAsMFlQtU3lzdGVtcyBUcnVzdCBDZW50ZXIxJTAjBgNVBAMMHFQtVGVsZVNl
                YyBHbG9iYWxSb290IENsYXNzIDIwHhcNMDgxMDAxMTA0MDE0WhcNMzMxMDAxMjM1
                OTU5WjCBgjELMAkGA1UEBhMCREUxKzApBgNVBAoMIlQtU3lzdGVtcyBFbnRlcnBy
                aXNlIFNlcnZpY2VzIEdtYkgxHzAdBgNVBAsMFlQtU3lzdGVtcyBUcnVzdCBDZW50
                ZXIxJTAjBgNVBAMMHFQtVGVsZVNlYyBHbG9iYWxSb290IENsYXNzIDIwggEiMA0G
                CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCqX9obX+hzkeXaXPSi5kfl82hVYAUd
                AqSzm1nzHoqvNK38DcLZSBnuaY/JIPwhqgcZ7bBcrGXHX+0CfHt8LRvWurmAwhiC
                FoT6ZrAIxlQjgeTNuUk/9k9uN0goOA/FvudocP05l03Sx5iRUKrERLMjfTlH6VJi
                1hKTXrcxlkIF+3anHqP1wvzpesVsqXFP6st4vGCvx9702cu+fjOlbpSD8DT6Iavq
                jnKgP6TeMFvvhk1qlVtDRKgQFRzlAVfFmPHmBiiRqiDFt1MmUUOyCxGVWOHAD3bZ
                wI18gfNycJ5v/hqO2V81xrJvNHy+SE/iWjnX2J14np+GPgNeGYtEotXHAgMBAAGj
                QjBAMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMB0GA1UdDgQWBBS/
                WSA2AHmgoCJrjNXyYdK4LMuCSjANBgkqhkiG9w0BAQsFAAOCAQEAMQOiYQsfdOhy
                NsZt+U2e+iKo4YFWz827n+qrkRk4r6p8FU3ztqONpfSO9kSpp+ghla0+AGIWiPAC
                uvxhI+YzmzB6azZie60EI4RYZeLbK4rnJVM3YlNfvNoBYimipidx5joifsFvHZVw
                IEoHNN/q/xWA5brXethbdXwFeilHfkCoMRN3zUA7tFFHei4R40cR3p1m0IvVVGb6
                g1XqfMIpiRvpb7PO4gWEyS8+eIVibslfwXhjdFjASBgMmTnrpMwatXlajRWc2BQN
                9noHV8cigwUtPJslJj0Ys6lDfMjIq2SPDqO/nBudMNva0Bkuqjzx+zOAduTNrRlP
                BSeOE6Fuwg==
                -----END CERTIFICATE-----
                === /C=DE/O=T-Systems Enterprise Services GmbH/OU=T-Systems Trust Center/CN=T-TeleSec GlobalRoot Class 3
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1 (0x1)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Oct  1 10:29:56 2008 GMT
                            Not After : Oct  1 23:59:59 2033 GMT
                        Subject: C=DE, O=T-Systems Enterprise Services GmbH, OU=T-Systems Trust Center, CN=T-TeleSec GlobalRoot Class 3
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                B5:03:F7:76:3B:61:82:6A:12:AA:18:53:EB:03:21:94:BF:FE:CE:CA
                SHA1 Fingerprint=55:A6:72:3E:CB:F2:EC:CD:C3:23:74:70:19:9D:2A:BE:11:E3:81:D1
                SHA256 Fingerprint=FD:73:DA:D3:1C:64:4F:F1:B4:3B:EF:0C:CD:DA:96:71:0B:9C:D9:87:5E:CA:7E:31:70:7A:F3:E9:6D:52:2B:BD
                -----BEGIN CERTIFICATE-----
                MIIDwzCCAqugAwIBAgIBATANBgkqhkiG9w0BAQsFADCBgjELMAkGA1UEBhMCREUx
                KzApBgNVBAoMIlQtU3lzdGVtcyBFbnRlcnByaXNlIFNlcnZpY2VzIEdtYkgxHzAd
                BgNVBAsMFlQtU3lzdGVtcyBUcnVzdCBDZW50ZXIxJTAjBgNVBAMMHFQtVGVsZVNl
                YyBHbG9iYWxSb290IENsYXNzIDMwHhcNMDgxMDAxMTAyOTU2WhcNMzMxMDAxMjM1
                OTU5WjCBgjELMAkGA1UEBhMCREUxKzApBgNVBAoMIlQtU3lzdGVtcyBFbnRlcnBy
                aXNlIFNlcnZpY2VzIEdtYkgxHzAdBgNVBAsMFlQtU3lzdGVtcyBUcnVzdCBDZW50
                ZXIxJTAjBgNVBAMMHFQtVGVsZVNlYyBHbG9iYWxSb290IENsYXNzIDMwggEiMA0G
                CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC9dZPwYiJvJK7genasfb3ZJNW4t/zN
                8ELg63iIVl6bmlQdTQyK9tPPcPRStdiTBONGhnFBSivwKixVA9ZIw+A5OO3yXDw/
                RLyTPWGrTs0NvvAgJ1gORH8EGoel15YUNpDQSXuhdfsaa3Ox+M6pCSzyU9XDFES4
                hqX2iys52qMzVNn6chr3IhUciJFrf2blw2qAsCTz34ZFiP0Zf3WHHx+xGwpzJFu5
                ZeAsVMhg02YXP+HMVDNzkQI6pn97djmiH5a2OK61yJN0HZ65tOVgnS9W0eDrXltM
                EnAMbEQgqxHY9Bn20pxSN+f6tsIxO0rUFJmtxxr1XV/6B7h8DR/Wgx6zAgMBAAGj
                QjBAMA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMB0GA1UdDgQWBBS1
                A/d2O2GCahKqGFPrAyGUv/7OyjANBgkqhkiG9w0BAQsFAAOCAQEAVj3vlNW92nOy
                WL6ukK2YJ5f+AbGwUgC4TeQbIXQbfsDuXmkqJa9c1h3a0nnJ85cp4IaH3gRZD/FZ
                1GSFS5mvJQQeyUapl96Cshtwn5z2r3Ex3XsFpSzTucpH9sry9uetuUg/vBa3wW30
                6gmv7PO15wWeph6KU1HWk4HMdJP2udqmJQV0eVp+QD6CSyYRMG7hP0HHRwA11fXT
                91Q+gT3aSWqas+8QPebrb9HIIkfLzM8BMZLZGOMivgkeGj5asuRrDFR6fUNOuIml
                e9eiPZaGzPImNC1qkp2aGtAw4l1OBLBfiyB+d8E9lYLRRpo7PHi4b6HQDWSieB4p
                TpPDpFQUWw==
                -----END CERTIFICATE-----

                ### TAIWAN-CA

                === /C=TW/O=TAIWAN-CA/OU=Root CA/CN=TWCA Global Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 3262 (0xcbe)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Jun 27 06:28:33 2012 GMT
                            Not After : Dec 31 15:59:59 2030 GMT
                        Subject: C=TW, O=TAIWAN-CA, OU=Root CA, CN=TWCA Global Root CA
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=9C:BB:48:53:F6:A4:F6:D3:52:A4:E8:32:52:55:60:13:F5:AD:AF:65
                SHA256 Fingerprint=59:76:90:07:F7:68:5D:0F:CD:50:87:2F:9F:95:D5:75:5A:5B:2B:45:7D:81:F3:69:2B:61:0A:98:67:2F:0E:1B
                -----BEGIN CERTIFICATE-----
                MIIFQTCCAymgAwIBAgICDL4wDQYJKoZIhvcNAQELBQAwUTELMAkGA1UEBhMCVFcx
                EjAQBgNVBAoTCVRBSVdBTi1DQTEQMA4GA1UECxMHUm9vdCBDQTEcMBoGA1UEAxMT
                VFdDQSBHbG9iYWwgUm9vdCBDQTAeFw0xMjA2MjcwNjI4MzNaFw0zMDEyMzExNTU5
                NTlaMFExCzAJBgNVBAYTAlRXMRIwEAYDVQQKEwlUQUlXQU4tQ0ExEDAOBgNVBAsT
                B1Jvb3QgQ0ExHDAaBgNVBAMTE1RXQ0EgR2xvYmFsIFJvb3QgQ0EwggIiMA0GCSqG
                SIb3DQEBAQUAA4ICDwAwggIKAoICAQCwBdvI64zEbooh745NnHEKH1Jw7W2CnJfF
                10xORUnLQEK1EjRsGcJ0pDFfhQKX7EMzClPSnIyOt7h52yvVavKOZsTuKwEHktSz
                0ALfUPZVr2YOy+BHYC8rMjk1Ujoog/h7FsYYuGLWRyWRzvAZEk2tY/XTP3VfKfCh
                MBwqoJimFb3u/Rk28OKRQ4/6ytYQJ0lM793B8YVwm8rqqFpD/G2Gb3PpN0Wp8DbH
                zIh1HrtsBv+baz4X7GGqcXzGHaL3SekVtTzWoWH1EfcFbx39Eb7QMAfCKbAJTibc
                46KokWofwpFFiFzlmLhxpRUZyXx1EcxwdE8tmx2RRP1WKKD+u4ZqyPpcC1jcxkt2
                yKsi2XMPpfRaAok/T54igu6idFMqPVMnaR1sjjIsZAAmY2E2TqNGtz99sy2sbZCi
                laLOz9qC5wc0GZbpuCGqKX6mOL6OKUohZnkfs8O1CWfe1tQHRvMq2uYiN2DLgbYP
                oA/pyJV/v1WRBXrPPRXAb94JlAGD1zQbzECl8LibZ9WYkTunhHiVJqRaCPgrdLQA
                BDzfuBSO6N+pjWxnkjMdwLfS7JLIvgm/LCkFbwJrnu+8vyq8W8BQj0FwcYeyTbcE
                qYSjMq+u7msXi7Kx/mzhkIyIqJdIzshNy/MGz19qCkKxHh53L46g5pIOBvwFItIm
                4TFRfTLcDwIDAQABoyMwITAOBgNVHQ8BAf8EBAMCAQYwDwYDVR0TAQH/BAUwAwEB
                /zANBgkqhkiG9w0BAQsFAAOCAgEAXzSBdu+WHdXltdkCY4QWwa6gcFGn90xHNcgL
                1yg9iXHZqjNB6hQbbCEAwGxCGX6faVsgQt+i0trEfJdLjbDorMjupWkEmQqSpqsn
                LhpNgb+E1HAerUf+/UqdM+DyucRFCCEK2mlpc3INvjT+lIutwx4116KD7+U4x6WF
                H6vPNOw/KP4M8VeGTslV9xzU2KV9Bnpv1d8Q34FOIWWxtuEXeZVFBs5fzNxGiWNo
                RI2T9GRwoD2dKAXDOXC4Ynsg/eTb6QihuJ49CcdP+yz4k3ZB3lLg4VfSnQO8d57+
                nile98FRYB/e2guyLXW3Q0iT5/Z5xoRdgFlglPx4mI88k1HtQJAH32RjJMtOcQWh
                15QaiDLxInQirqWm2BJpTGCjAu4r7NRjkgtevi92a6O2JryPA9gK8kxkRr05YuWW
                6zRjESjMlfGt7+/cgFhI6Uu46mWs6fyAtbXIRfmswZ/ZuepiiI7E8UuDEq3mi4TW
                nsLrgxifarsbJGAzcMzs9zLzXNl5fe+epP7JI8Mk7hWSsT2RTyaGvWZzJBPqpK5j
                wa19hAM8EHiGG3njxPPyBJUgriOCxLM6AGK/5jYk4Ve6xx6QddVfP5VhK8E7zeWz
                aGHQRiapIVJpLesux+t3zqY6tQMzT3bR51xUAV3LePTJDL/PEo4XLSNolOer/qmy
                KwbQBM0=
                -----END CERTIFICATE-----
                === /C=TW/O=TAIWAN-CA/OU=Root CA/CN=TWCA Root Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1 (0x1)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Aug 28 07:24:33 2008 GMT
                            Not After : Dec 31 15:59:59 2030 GMT
                        Subject: C=TW, O=TAIWAN-CA, OU=Root CA, CN=TWCA Root Certification Authority
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                6A:38:5B:26:8D:DE:8B:5A:F2:4F:7A:54:83:19:18:E3:08:35:A6:BA
                SHA1 Fingerprint=CF:9E:87:6D:D3:EB:FC:42:26:97:A3:B5:A3:7A:A0:76:A9:06:23:48
                SHA256 Fingerprint=BF:D8:8F:E1:10:1C:41:AE:3E:80:1B:F8:BE:56:35:0E:E9:BA:D1:A6:B9:BD:51:5E:DC:5C:6D:5B:87:11:AC:44
                -----BEGIN CERTIFICATE-----
                MIIDezCCAmOgAwIBAgIBATANBgkqhkiG9w0BAQUFADBfMQswCQYDVQQGEwJUVzES
                MBAGA1UECgwJVEFJV0FOLUNBMRAwDgYDVQQLDAdSb290IENBMSowKAYDVQQDDCFU
                V0NBIFJvb3QgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMDgwODI4MDcyNDMz
                WhcNMzAxMjMxMTU1OTU5WjBfMQswCQYDVQQGEwJUVzESMBAGA1UECgwJVEFJV0FO
                LUNBMRAwDgYDVQQLDAdSb290IENBMSowKAYDVQQDDCFUV0NBIFJvb3QgQ2VydGlm
                aWNhdGlvbiBBdXRob3JpdHkwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB
                AQCwfnK4pAOU5qfeCTiRShFAh6d8WWQUe7UREN3+v9XAu1bihSX0NXIP+FPQQeFE
                AcK0HMMxQhZHhTMidrIKbw/lJVBPhYa+v5guEGcevhEFhgWQxFnQfHgQsIBct+HH
                K3XLfJ+utdGdIzdjp9xCoi2SBBtQwXu4PhvJVgSLL1KbralW6cH/ralYhzC2gfeX
                RfwZVzsrb+RH9JlF/h3x+JejiB03HFyP4HYlmlD4oFT/RJB2I9IyxsOrBr/8+7/z
                rX2SYgJbKdM1o5OaQ2RgXbL6Mv87BK9NQGr5x+PvI/1ry+UPizgN7gr8/g+YnzAx
                3WxSZfmLgb4i4RxYA7qRG4kHAgMBAAGjQjBAMA4GA1UdDwEB/wQEAwIBBjAPBgNV
                HRMBAf8EBTADAQH/MB0GA1UdDgQWBBRqOFsmjd6LWvJPelSDGRjjCDWmujANBgkq
                hkiG9w0BAQUFAAOCAQEAPNV3PdrfibqHDAhUaiBQkr6wQT25JmSDCi/oQMCXKCeC
                MErJk/9q56YAf4lCmtYR5VPOL8zy2gXE/uJQxDqGfczafhAJO5I1KlOy/usrBdls
                XebQ79NqZp4VKIV66IIArB6nCWlWQtNoURi+VJq/REG6Sb4gumlc7rh3zc5sH62D
                lhh9DrUUOYTxKOkto557HnpyWoOzeW/vtPzQCqVYT0bf+215WfKEIlKuD8z7fDvn
                aspHYcN6+NOSBB+4IIThNlQWx0DeO4pz3N/GCUzf7Nr/1FNCocnyYh0igzyXxfkZ
                YiesZSLX0zzG5Y6yU8xJzrww/nsOM5D77dIUkR8Hrw==
                -----END CERTIFICATE-----

                ### TeliaSonera

                === /O=TeliaSonera/CN=TeliaSonera Root CA v1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            95:be:16:a0:f7:2e:46:f1:7b:39:82:72:fa:8b:cd:96
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Oct 18 12:00:50 2007 GMT
                            Not After : Oct 18 12:00:50 2032 GMT
                        Subject: O=TeliaSonera, CN=TeliaSonera Root CA v1
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage:
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                F0:8F:59:38:00:B3:F5:8F:9A:96:0C:D5:EB:FA:7B:AA:17:E8:13:12
                SHA1 Fingerprint=43:13:BB:96:F1:D5:86:9B:C1:4E:6A:92:F6:CF:F6:34:69:87:82:37
                SHA256 Fingerprint=DD:69:36:FE:21:F8:F0:77:C1:23:A1:A5:21:C1:22:24:F7:22:55:B7:3E:03:A7:26:06:93:E8:A2:4B:0F:A3:89
                -----BEGIN CERTIFICATE-----
                MIIFODCCAyCgAwIBAgIRAJW+FqD3LkbxezmCcvqLzZYwDQYJKoZIhvcNAQEFBQAw
                NzEUMBIGA1UECgwLVGVsaWFTb25lcmExHzAdBgNVBAMMFlRlbGlhU29uZXJhIFJv
                b3QgQ0EgdjEwHhcNMDcxMDE4MTIwMDUwWhcNMzIxMDE4MTIwMDUwWjA3MRQwEgYD
                VQQKDAtUZWxpYVNvbmVyYTEfMB0GA1UEAwwWVGVsaWFTb25lcmEgUm9vdCBDQSB2
                MTCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAMK+6yfwIaPzaSZVfp3F
                VRaRXP3vIb9TgHot0pGMYzHw7CTww6XScnwQbfQ3t+XmfHnqjLWCi65ItqwA3GV1
                7CpNX8GH9SBlK4GoRz6JI5UwFpB/6FcHSOcZrr9FZ7E3GwYq/t75rH2D+1665I+X
                Z75Ljo1kB1c4VWk0Nj0TSO9P4tNmHqTPGrdeNjPUtAa9GAH9d4RQAEX1jF3oI7x+
                /jXh7VB7qTCNGdMJjmhnXb88lxhTuylixcpecsHHltTbLaC0H2kD7OriUPEMPPCs
                81Mt8Bz17Ww5OXOAFshSsCPN4D7c3TxHoLs1iuKYaIu+5b9y7tL6pe0S7fyYGKkm
                dtwoSxAgHNN/Fnct7W+A90m7UwW7XWjH1Mh1Fj+JWov3F0fUTPHSiXk+TT2YqGHe
                Oh7S+F4D4MHJHIzTjU3TlTazN19jY5szFPAtJmtTfImMMsJu7D0hADnJoWjiUIMu
                sDor8zagrC/kb2HCUQk5PotTubtn2txTuXZZNp1D5SDgPTJghSJRt8czu90VL6R4
                pgd7gUY2BIbdeTXHlSw7sKMXNeVzH7RcWe/a6hBle3rQf5+ztCo3O3CLm1u5K7fs
                slESl1MpWtTwEhDcTwK7EpIvYtQ/aUN8Ddb8WHUBiJ1YFkveupD/RwGJBmr2X7KQ
                arMCpgKIv7NHfirZ1fpoeDVNAgMBAAGjPzA9MA8GA1UdEwEB/wQFMAMBAf8wCwYD
                VR0PBAQDAgEGMB0GA1UdDgQWBBTwj1k4ALP1j5qWDNXr+nuqF+gTEjANBgkqhkiG
                9w0BAQUFAAOCAgEAvuRcYk4k9AwI//DTDGjkk0kiP0Qnb7tt3oNmzqjMDfz1mgbl
                dxSR651Be5kqhOX//CHBXfDkH1e3damhXwIm/9fH907eT/j3HEbAek9ALCI18Bmx
                0GtnLLCo4MBANzX2hFxc469CeP6nyQ1Q6g2EdvZR74NTxnr/DlZJLo961gzmJ1Tj
                TQpgcmLNkQfWpb/ImWvtxBnmq0wROMVvMeJuScg/doAmAyYp4Db29iBT4xdwNBed
                Y2gea+zDTYa4EzAvXUYNR0PVG6pZDrlcjQZIrXSHX8f8MVRBE+LHIQ6e4B4N4cB7
                Q4WQxYpYxmUKeFfyxiMPAdkgS94P+5KFdSpcc41teyWRyu5FrgZLAMzTsVlQ2jqI
                OylDRl6XK1TOU2+NSueW+r9xDkKLfP0ooNBIytrEgUy7onOTJsjrDNYmiLbAJM+7
                vVvrdX3pCI6GMyx5dwlppYn8s3CQh3aP0yK7Qs69cwsgJirQmz1wHiRszYd2qReW
                t88NkvuOGKmYSdGe/mBEciG5Ge3C9THxOUiIkCR1VBatzvT4aRRkOfujuLpwQMcn
                HL/EVlP6Y2XQ8xwOFvVrhlhNGNTkDY6lnVuR3HYkUD/GKvvZt5y11ubQ2egZixVx
                SK236thZiNSQvxaz2emsWWFUyBy6ysHK4bkgTI86k4mloMy/0/Z1pHWWbVY=
                -----END CERTIFICATE-----

                ### The Go Daddy Group, Inc.

                === /C=US/O=The Go Daddy Group, Inc./OU=Go Daddy Class 2 Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 0 (0x0)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Jun 29 17:06:20 2004 GMT
                            Not After : Jun 29 17:06:20 2034 GMT
                        Subject: C=US, O=The Go Daddy Group, Inc., OU=Go Daddy Class 2 Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                D2:C4:B0:D2:91:D4:4C:11:71:B3:61:CB:3D:A1:FE:DD:A8:6A:D4:E3
                            X509v3 Authority Key Identifier:
                                keyid:D2:C4:B0:D2:91:D4:4C:11:71:B3:61:CB:3D:A1:FE:DD:A8:6A:D4:E3
                                DirName:/C=US/O=The Go Daddy Group, Inc./OU=Go Daddy Class 2 Certification Authority
                                serial:00

                            X509v3 Basic Constraints:
                                CA:TRUE
                SHA1 Fingerprint=27:96:BA:E6:3F:18:01:E2:77:26:1B:A0:D7:77:70:02:8F:20:EE:E4
                SHA256 Fingerprint=C3:84:6B:F2:4B:9E:93:CA:64:27:4C:0E:C6:7C:1E:CC:5E:02:4F:FC:AC:D2:D7:40:19:35:0E:81:FE:54:6A:E4
                -----BEGIN CERTIFICATE-----
                MIIEADCCAuigAwIBAgIBADANBgkqhkiG9w0BAQUFADBjMQswCQYDVQQGEwJVUzEh
                MB8GA1UEChMYVGhlIEdvIERhZGR5IEdyb3VwLCBJbmMuMTEwLwYDVQQLEyhHbyBE
                YWRkeSBDbGFzcyAyIENlcnRpZmljYXRpb24gQXV0aG9yaXR5MB4XDTA0MDYyOTE3
                MDYyMFoXDTM0MDYyOTE3MDYyMFowYzELMAkGA1UEBhMCVVMxITAfBgNVBAoTGFRo
                ZSBHbyBEYWRkeSBHcm91cCwgSW5jLjExMC8GA1UECxMoR28gRGFkZHkgQ2xhc3Mg
                MiBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTCCASAwDQYJKoZIhvcNAQEBBQADggEN
                ADCCAQgCggEBAN6d1+pXGEmhW+vXX0iG6r7d/+TvZxz0ZWizV3GgXne77ZtJ6XCA
                PVYYYwhv2vLM0D9/AlQiVBDYsoHUwHU9S3/Hd8M+eKsaA7Ugay9qK7HFiH7Eux6w
                wdhFJ2+qN1j3hybX2C32qRe3H3I2TqYXP2WYktsqbl2i/ojgC95/5Y0V4evLOtXi
                EqITLdiOr18SPaAIBQi2XKVlOARFmR6jYGB0xUGlcmIbYsUfb18aQr4CUWWoriMY
                avx4A6lNf4DD+qta/KFApMoZFv6yyO9ecw3ud72a9nmYvLEHZ6IVDd2gWMZEewo+
                YihfukEHU1jPEX44dMX4/7VpkI+EdOqXG68CAQOjgcAwgb0wHQYDVR0OBBYEFNLE
                sNKR1EwRcbNhyz2h/t2oatTjMIGNBgNVHSMEgYUwgYKAFNLEsNKR1EwRcbNhyz2h
                /t2oatTjoWekZTBjMQswCQYDVQQGEwJVUzEhMB8GA1UEChMYVGhlIEdvIERhZGR5
                IEdyb3VwLCBJbmMuMTEwLwYDVQQLEyhHbyBEYWRkeSBDbGFzcyAyIENlcnRpZmlj
                YXRpb24gQXV0aG9yaXR5ggEAMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQEFBQAD
                ggEBADJL87LKPpH8EsahB4yOd6AzBhRckB4Y9wimPQoZ+YeAEW5p5JYXMP80kWNy
                OO7MHAGjHZQopDH2esRU1/blMVgDoszOYtuURXO1v0XJJLXVggKtI3lpjbi2Tc7P
                TMozI+gciKqdi0FuFskg5YmezTvacPd+mSYgFFQlq25zheabIZ0KbIIOqPjCDPoQ
                HmyW74cNxA9hi63ugyuV+I6ShHI56yDqg+2DzZduCLzrTia2cyvk0/ZM/iZx4mER
                dEr/VxqHD3VILs9RaRegAhJhldXRQLIQTO7ErBBDpqWeCtWVYpoNz4iCxTIM5Cuf
                ReYNnyicsbkqWletNw+vHX/bvZ8=
                -----END CERTIFICATE-----

                ### The USERTRUST Network

                === /C=US/ST=New Jersey/L=Jersey City/O=The USERTRUST Network/CN=USERTrust ECC Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            5c:8b:99:c5:5a:94:c5:d2:71:56:de:cd:89:80:cc:26
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Feb  1 00:00:00 2010 GMT
                            Not After : Jan 18 23:59:59 2038 GMT
                        Subject: C=US, ST=New Jersey, L=Jersey City, O=The USERTRUST Network, CN=USERTrust ECC Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                3A:E1:09:86:D4:CF:19:C2:96:76:74:49:76:DC:E0:35:C6:63:63:9A
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=D1:CB:CA:5D:B2:D5:2A:7F:69:3B:67:4D:E5:F0:5A:1D:0C:95:7D:F0
                SHA256 Fingerprint=4F:F4:60:D5:4B:9C:86:DA:BF:BC:FC:57:12:E0:40:0D:2B:ED:3F:BC:4D:4F:BD:AA:86:E0:6A:DC:D2:A9:AD:7A
                -----BEGIN CERTIFICATE-----
                MIICjzCCAhWgAwIBAgIQXIuZxVqUxdJxVt7NiYDMJjAKBggqhkjOPQQDAzCBiDEL
                MAkGA1UEBhMCVVMxEzARBgNVBAgTCk5ldyBKZXJzZXkxFDASBgNVBAcTC0plcnNl
                eSBDaXR5MR4wHAYDVQQKExVUaGUgVVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNVBAMT
                JVVTRVJUcnVzdCBFQ0MgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMTAwMjAx
                MDAwMDAwWhcNMzgwMTE4MjM1OTU5WjCBiDELMAkGA1UEBhMCVVMxEzARBgNVBAgT
                Ck5ldyBKZXJzZXkxFDASBgNVBAcTC0plcnNleSBDaXR5MR4wHAYDVQQKExVUaGUg
                VVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNVBAMTJVVTRVJUcnVzdCBFQ0MgQ2VydGlm
                aWNhdGlvbiBBdXRob3JpdHkwdjAQBgcqhkjOPQIBBgUrgQQAIgNiAAQarFRaqflo
                I+d61SRvU8Za2EurxtW20eZzca7dnNYMYf3boIkDuAUU7FfO7l0/4iGzzvfUinng
                o4N+LZfQYcTxmdwlkWOrfzCjtHDix6EznPO/LlxTsV+zfTJ/ijTjeXmjQjBAMB0G
                A1UdDgQWBBQ64QmG1M8ZwpZ2dEl23OA1xmNjmjAOBgNVHQ8BAf8EBAMCAQYwDwYD
                VR0TAQH/BAUwAwEB/zAKBggqhkjOPQQDAwNoADBlAjA2Z6EWCNzklwBBHU6+4WMB
                zzuqQhFkoJ2UOQIReVx7Hfpkue4WQrO/isIJxOzksU0CMQDpKmFHjFJKS04YcPbW
                RNZu9YO6bVi9JNlWSOrvxKJGgYhqOkbRqZtNyWHa0V1Xahg=
                -----END CERTIFICATE-----
                === /C=US/ST=New Jersey/L=Jersey City/O=The USERTRUST Network/CN=USERTrust RSA Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            01:fd:6d:30:fc:a3:ca:51:a8:1b:bc:64:0e:35:03:2d
                    Signature Algorithm: sha384WithRSAEncryption
                        Validity
                            Not Before: Feb  1 00:00:00 2010 GMT
                            Not After : Jan 18 23:59:59 2038 GMT
                        Subject: C=US, ST=New Jersey, L=Jersey City, O=The USERTRUST Network, CN=USERTrust RSA Certification Authority
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                53:79:BF:5A:AA:2B:4A:CF:54:80:E1:D8:9B:C0:9D:F2:B2:03:66:CB
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=2B:8F:1B:57:33:0D:BB:A2:D0:7A:6C:51:F7:0E:E9:0D:DA:B9:AD:8E
                SHA256 Fingerprint=E7:93:C9:B0:2F:D8:AA:13:E2:1C:31:22:8A:CC:B0:81:19:64:3B:74:9C:89:89:64:B1:74:6D:46:C3:D4:CB:D2
                -----BEGIN CERTIFICATE-----
                MIIF3jCCA8agAwIBAgIQAf1tMPyjylGoG7xkDjUDLTANBgkqhkiG9w0BAQwFADCB
                iDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCk5ldyBKZXJzZXkxFDASBgNVBAcTC0pl
                cnNleSBDaXR5MR4wHAYDVQQKExVUaGUgVVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNV
                BAMTJVVTRVJUcnVzdCBSU0EgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMTAw
                MjAxMDAwMDAwWhcNMzgwMTE4MjM1OTU5WjCBiDELMAkGA1UEBhMCVVMxEzARBgNV
                BAgTCk5ldyBKZXJzZXkxFDASBgNVBAcTC0plcnNleSBDaXR5MR4wHAYDVQQKExVU
                aGUgVVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNVBAMTJVVTRVJUcnVzdCBSU0EgQ2Vy
                dGlmaWNhdGlvbiBBdXRob3JpdHkwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIK
                AoICAQCAEmUXNg7D2wiz0KxXDXbtzSfTTK1Qg2HiqiBNCS1kCdzOiZ/MPans9s/B
                3PHTsdZ7NygRK0faOca8Ohm0X6a9fZ2jY0K2dvKpOyuR+OJv0OwWIJAJPuLodMkY
                tJHUYmTbf6MG8YgYapAiPLz+E/CHFHv25B+O1ORRxhFnRghRy4YUVD+8M/5+bJz/
                Fp0YvVGONaanZshyZ9shZrHUm3gDwFA66Mzw3LyeTP6vBZY1H1dat//O+T23LLb2
                VN3I5xI6Ta5MirdcmrS3ID3KfyI0rn47aGYBROcBTkZTmzNg95S+UzeQc0PzMsNT
                79uq/nROacdrjGCT3sTHDN/hMq7MkztReJVni+49Vv4M0GkPGw/zJSZrM233bkf6
                c0Plfg6lZrEpfDKEY1WJxA3Bk1QwGROs0303p+tdOmw1XNtB1xLaqUkL39iAigmT
                Yo61Zs8liM2EuLE/pDkP2QKe6xJMlXzzawWpXhaDzLhn4ugTncxbgtNMs+1b/97l
                c6wjOy0AvzVVdAlJ2ElYGn+SNuZRkg7zJn0cTRe8yexDJtC/QV9AqURE9JnnV4ee
                UB9XVKg+/XRjL7FQZQnmWEIuQxpMtPAlR1n6BB6T1CZGSlCBst6+eLf8ZxXhyVeE
                Hg9j1uliutZfVS7qXMYoCAQlObgOK6nyTJccBz8NUvXt7y+CDwIDAQABo0IwQDAd
                BgNVHQ4EFgQUU3m/WqorSs9UgOHYm8Cd8rIDZsswDgYDVR0PAQH/BAQDAgEGMA8G
                A1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEMBQADggIBAFzUfA3P9wF9QZllDHPF
                Up/L+M+ZBn8b2kMVn54CVVeWFPFSPCeHlCjtHzoBN6J2/FNQwISbxmtOuowhT6KO
                VWKR82kV2LyI48SqC/3vqOlLVSoGIG1VeCkZ7l8wXEskEVX/JJpuXior7gtNn3/3
                ATiUFJVDBwn7YKnuHKsSjKCaXqeYalltiz8I+8jRRa8YFWSQEg9zKC7F4iRO/Fjs
                8PRF/iKz6y+O0tlFYQXBl2+odnKPi4w2r78NBc5xjeambx9spnFixdjQg3IM8WcR
                iQycE0xyNN+81XHfqnHd4blsjDwSXWXavVcStkNr/+XeTWYRUc+ZruwXtuhxkYze
                Sf7dNXGiFSeUHM9h4ya7b6NnJSFd5t0dCy5oGzuCr+yDZ4XUmFF0sbmZgIn/f3gZ
                XHlKYC6SQK5MNyosycdiyA5d9zZbyuAlJQG03RoHnHcAP9Dc1ew91Pq7P8yF1m9/
                qS3fuQL39ZeatTXaw2ewh0qpKJ4jjv9cJ2vhsE/zB+4ALtRZh8tSQZXq9EfX7mRB
                VXyNWQKV3WKdwrnuWih0hKWbt5DHDAff9Yk2dDLWKMGwsAvgnEzDHNb842m1R0aB
                L6KCq9NjRHDEjf8tM7qtj3u1cIiuPhnPQCjY/MiQu12ZIvVS5ljFH4gxQ+6IHdfG
                jjxDah2nGN59PRbxYvnKkKj9
                -----END CERTIFICATE-----

                ### TrustCor Systems S. de R.L.

                === /C=PA/ST=Panama/L=Panama City/O=TrustCor Systems S. de R.L./OU=TrustCor Certificate Authority/CN=TrustCor ECA-1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            84:82:2c:5f:1c:62:d0:40
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb  4 12:32:33 2016 GMT
                            Not After : Dec 31 17:28:07 2029 GMT
                        Subject: C=PA, ST=Panama, L=Panama City, O=TrustCor Systems S. de R.L., OU=TrustCor Certificate Authority, CN=TrustCor ECA-1
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                44:9E:48:F5:CC:6D:48:D4:A0:4B:7F:FE:59:24:2F:83:97:99:9A:86
                            X509v3 Authority Key Identifier:
                                keyid:44:9E:48:F5:CC:6D:48:D4:A0:4B:7F:FE:59:24:2F:83:97:99:9A:86

                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=58:D1:DF:95:95:67:6B:63:C0:F0:5B:1C:17:4D:8B:84:0B:C8:78:BD
                SHA256 Fingerprint=5A:88:5D:B1:9C:01:D9:12:C5:75:93:88:93:8C:AF:BB:DF:03:1A:B2:D4:8E:91:EE:15:58:9B:42:97:1D:03:9C
                -----BEGIN CERTIFICATE-----
                MIIEIDCCAwigAwIBAgIJAISCLF8cYtBAMA0GCSqGSIb3DQEBCwUAMIGcMQswCQYD
                VQQGEwJQQTEPMA0GA1UECAwGUGFuYW1hMRQwEgYDVQQHDAtQYW5hbWEgQ2l0eTEk
                MCIGA1UECgwbVHJ1c3RDb3IgU3lzdGVtcyBTLiBkZSBSLkwuMScwJQYDVQQLDB5U
                cnVzdENvciBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkxFzAVBgNVBAMMDlRydXN0Q29y
                IEVDQS0xMB4XDTE2MDIwNDEyMzIzM1oXDTI5MTIzMTE3MjgwN1owgZwxCzAJBgNV
                BAYTAlBBMQ8wDQYDVQQIDAZQYW5hbWExFDASBgNVBAcMC1BhbmFtYSBDaXR5MSQw
                IgYDVQQKDBtUcnVzdENvciBTeXN0ZW1zIFMuIGRlIFIuTC4xJzAlBgNVBAsMHlRy
                dXN0Q29yIENlcnRpZmljYXRlIEF1dGhvcml0eTEXMBUGA1UEAwwOVHJ1c3RDb3Ig
                RUNBLTEwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDPj+ARtZ+odnbb
                3w9U73NjKYKtR8aja+3+XzP4Q1HpGjORMRegdMTUpwHmspI+ap3tDvl0mEDTPwOA
                BoJA6LHip1GnHYMma6ve+heRK9jGrB6xnhkB1Zem6g23xFUfJ3zSCNV2HykVh0A5
                3ThFEXXQmqc04L/NyFIduUd+Dbi7xgz2c1cWWn5DkR9VOsZtRASqnKmcp0yJF4Ou
                owReUoCLHhIlERnXDH19MURB6tuvsBzvgdAsxZohmz3tQjtQJvLsznFhBmIhVE5/
                wZ0+fyCMgMsq2JdiyIMzkX2woloPV+g7zPIlstR8L+xNxqE6FXrntl019fZISjZF
                ZtS6mFjBAgMBAAGjYzBhMB0GA1UdDgQWBBREnkj1zG1I1KBLf/5ZJC+Dl5mahjAf
                BgNVHSMEGDAWgBREnkj1zG1I1KBLf/5ZJC+Dl5mahjAPBgNVHRMBAf8EBTADAQH/
                MA4GA1UdDwEB/wQEAwIBhjANBgkqhkiG9w0BAQsFAAOCAQEABT41XBVwm8nHc2Fv
                civUwo/yQ10CzsSUuZQRg2dd4mdsdXa/uwyqNsatR5Nj3B5+1t4u/ukZMjgDfxT2
                AHMsWbEhBuH7rBiVDKP/mZb3Kyeb1STMHd3BOuCYRLDE5D53sXOpZCz2HAF8P11F
                hcCF5yWPldwX8zyfGm6wyuMdKulMY/okYWLW2n62HGz1Ah3UKt1VkOsqEUc8Ll50
                soIipX1TH0XsJ5F95yIW6MBoNtjG8U+ARDL54dHRHareqKucBK+tIA5kmE2la8BI
                WJZpTdwHjFGTot+fDz2LYLSCjaoITmJF4PkL0uDgPFveXHEnJcLmA4GLEFPjx1Wi
                tJ/X5g==
                -----END CERTIFICATE-----
                === /C=PA/ST=Panama/L=Panama City/O=TrustCor Systems S. de R.L./OU=TrustCor Certificate Authority/CN=TrustCor RootCert CA-1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            da:9b:ec:71:f3:03:b0:19
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb  4 12:32:16 2016 GMT
                            Not After : Dec 31 17:23:16 2029 GMT
                        Subject: C=PA, ST=Panama, L=Panama City, O=TrustCor Systems S. de R.L., OU=TrustCor Certificate Authority, CN=TrustCor RootCert CA-1
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                EE:6B:49:3C:7A:3F:0D:E3:B1:09:B7:8A:C8:AB:19:9F:73:33:50:E7
                            X509v3 Authority Key Identifier:
                                keyid:EE:6B:49:3C:7A:3F:0D:E3:B1:09:B7:8A:C8:AB:19:9F:73:33:50:E7

                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=FF:BD:CD:E7:82:C8:43:5E:3C:6F:26:86:5C:CA:A8:3A:45:5B:C3:0A
                SHA256 Fingerprint=D4:0E:9C:86:CD:8F:E4:68:C1:77:69:59:F4:9E:A7:74:FA:54:86:84:B6:C4:06:F3:90:92:61:F4:DC:E2:57:5C
                -----BEGIN CERTIFICATE-----
                MIIEMDCCAxigAwIBAgIJANqb7HHzA7AZMA0GCSqGSIb3DQEBCwUAMIGkMQswCQYD
                VQQGEwJQQTEPMA0GA1UECAwGUGFuYW1hMRQwEgYDVQQHDAtQYW5hbWEgQ2l0eTEk
                MCIGA1UECgwbVHJ1c3RDb3IgU3lzdGVtcyBTLiBkZSBSLkwuMScwJQYDVQQLDB5U
                cnVzdENvciBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkxHzAdBgNVBAMMFlRydXN0Q29y
                IFJvb3RDZXJ0IENBLTEwHhcNMTYwMjA0MTIzMjE2WhcNMjkxMjMxMTcyMzE2WjCB
                pDELMAkGA1UEBhMCUEExDzANBgNVBAgMBlBhbmFtYTEUMBIGA1UEBwwLUGFuYW1h
                IENpdHkxJDAiBgNVBAoMG1RydXN0Q29yIFN5c3RlbXMgUy4gZGUgUi5MLjEnMCUG
                A1UECwweVHJ1c3RDb3IgQ2VydGlmaWNhdGUgQXV0aG9yaXR5MR8wHQYDVQQDDBZU
                cnVzdENvciBSb290Q2VydCBDQS0xMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIB
                CgKCAQEAv463leLCJhJrMxnHQFgKq1mqjQCj/IDHUHuO1CAmujIS2CNUSSUQIpid
                RtLByZ5OGy4sDjjzGiVoHKZaBeYei0i/mJZ0PmnK6bV4pQa81QBeCQryJ3pS/C3V
                seq0iWEk8xoT26nPUu0MJLq5nux+AHT6k61sKZKuUbS701e/s/OojZz0JEsq1pme
                9J7+wH5COucLlVPat2gOkEz7cD+PSiyU8ybdY2mplNgQTsVHCJCZGxdNuWxu72CV
                EY4hgLW9oHPY0LJ3xEXqWib7ZnZ2+AYfYW0PVcWDtxBWcgYHpfOxGgMFZA6dWorW
                hnAbJN7+KIor0Gqw/Hqi3LJ5DotlDwIDAQABo2MwYTAdBgNVHQ4EFgQU7mtJPHo/
                DeOxCbeKyKsZn3MzUOcwHwYDVR0jBBgwFoAU7mtJPHo/DeOxCbeKyKsZn3MzUOcw
                DwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYwDQYJKoZIhvcNAQELBQAD
                ggEBACUY1JGPE+6PHh0RU9otRCkZoB5rMZ5NDp6tPVxBb5UrJKF5mDo4Nvu7Zp5I
                /5CQ7z3UuJu0h3U/IJvOcs+hVcFNZKIZBqEHMwwLKeXx6quj7LUKdJDHfXLy11yf
                ke+Ri7fc7Waiz45mO7yfOgLgJ90WmMCV1Aqk5IGadZQ1nJBfiDcGrVmVCrDRZ9MZ
                yonnMlo2HD6CqFqTvsbQZJG2z9m2GM/bftJlo6bEjhcxwft+dtvTheNYsnd6djts
                L1Ac59v2Z3kf9YKVmgenFK+P3CghZwnS1k1aHBkcjndcw5QkPTJrS37UeJSDvjdN
                zl/HHk484IkzlQsPpTLWPFp5LBk=
                -----END CERTIFICATE-----
                === /C=PA/ST=Panama/L=Panama City/O=TrustCor Systems S. de R.L./OU=TrustCor Certificate Authority/CN=TrustCor RootCert CA-2
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 2711694510199101698 (0x25a1dfca33cb5902)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Feb  4 12:32:23 2016 GMT
                            Not After : Dec 31 17:26:39 2034 GMT
                        Subject: C=PA, ST=Panama, L=Panama City, O=TrustCor Systems S. de R.L., OU=TrustCor Certificate Authority, CN=TrustCor RootCert CA-2
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                D9:FE:21:40:6E:94:9E:BC:9B:3D:9C:7D:98:20:19:E5:8C:30:62:B2
                            X509v3 Authority Key Identifier:
                                keyid:D9:FE:21:40:6E:94:9E:BC:9B:3D:9C:7D:98:20:19:E5:8C:30:62:B2

                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=B8:BE:6D:CB:56:F1:55:B9:63:D4:12:CA:4E:06:34:C7:94:B2:1C:C0
                SHA256 Fingerprint=07:53:E9:40:37:8C:1B:D5:E3:83:6E:39:5D:AE:A5:CB:83:9E:50:46:F1:BD:0E:AE:19:51:CF:10:FE:C7:C9:65
                -----BEGIN CERTIFICATE-----
                MIIGLzCCBBegAwIBAgIIJaHfyjPLWQIwDQYJKoZIhvcNAQELBQAwgaQxCzAJBgNV
                BAYTAlBBMQ8wDQYDVQQIDAZQYW5hbWExFDASBgNVBAcMC1BhbmFtYSBDaXR5MSQw
                IgYDVQQKDBtUcnVzdENvciBTeXN0ZW1zIFMuIGRlIFIuTC4xJzAlBgNVBAsMHlRy
                dXN0Q29yIENlcnRpZmljYXRlIEF1dGhvcml0eTEfMB0GA1UEAwwWVHJ1c3RDb3Ig
                Um9vdENlcnQgQ0EtMjAeFw0xNjAyMDQxMjMyMjNaFw0zNDEyMzExNzI2MzlaMIGk
                MQswCQYDVQQGEwJQQTEPMA0GA1UECAwGUGFuYW1hMRQwEgYDVQQHDAtQYW5hbWEg
                Q2l0eTEkMCIGA1UECgwbVHJ1c3RDb3IgU3lzdGVtcyBTLiBkZSBSLkwuMScwJQYD
                VQQLDB5UcnVzdENvciBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkxHzAdBgNVBAMMFlRy
                dXN0Q29yIFJvb3RDZXJ0IENBLTIwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIK
                AoICAQCnIG7CKqJiJJWQdsg4foDSq8GbZQWU9MEKENUCrO2fk8eHyLAnK0IMPQo+
                QVqedd2NyuCb7GgypGmSaIwLgQ5WoD4a3SwlFIIvl9NkRvRUqdw6VC0xK5mC8tkq
                1+9xALgxpL56JAfDQiDyitSSBBtlVkxs1Pu2YVpHI7TYabS3OtB0PAx1oYxOdqHp
                2yqlO/rOsP9+aij9JxzIsekp8VduZLTQwRVtDr4uDkbIXvRR/u8OYzo7cbrPb1nK
                DOObXUm4TOJXsZiKQlecdu/vvdFoqNL0Cbt3Nb4lggjEFixEIFapRBF37120Hape
                az6LMvYHL1cEksr1/p3C6eizjkxLAjHZ5DxIgif3GIJ2SDpxsROhOdUuxTTCHWKF
                3wP+TfSvPd9cW436cOGlfifHhi5qjxLGhF5DUVCcGZt45vz27Ud+ez1m7xMTiF88
                oWP7+ayHNZ/zgp6kPwqcMWmLmaSISo5uZk3vFsQPeSghYA2FFn3XVDjxklb9tTNM
                g9zXEJ9L/cb4Qr26fHMC4P99zVvh1Kxhe1fVSntb1IVYJ12/+CtgrKAmrhQhJ8Z3
                mjOAPF5GP/fDsaOGM8boXg25NSyqRsGFAnWAoOsk+xWq5Gd/bnc/9ASKL3x74xdh
                8N0JqSDIvgmk0H5Ew7IwSjiqqewYmgeCK9u4nBit2uBGF6zPXQIDAQABo2MwYTAd
                BgNVHQ4EFgQU2f4hQG6UnrybPZx9mCAZ5YwwYrIwHwYDVR0jBBgwFoAU2f4hQG6U
                nrybPZx9mCAZ5YwwYrIwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYw
                DQYJKoZIhvcNAQELBQADggIBAJ5Fngw7tu/hOsh80QA9z+LqBrWyOrsGS2h60COX
                dKcs8AjYeVrXWoSK2BKaG9l9XE1wxaX5q+WjiYndAfrs3fnpkpfbsEZC89NiqpX+
                MWcUaViQCqoL7jcjx1BRtPV+nuN79+TMQjItSQzL/0kMmx40/W5ulop5A7Zv2wnL
                /V9lFDfhOPXzYRZY5LVtDQsEGz9QLX+zx3oaFoBg+Iof6Rsqxvm6ARppv9JYx1RX
                CI/hOWB3S6xZhBqI8d3LT3jX5+EzLfzuQfogsL7L9ziUwOHQhQ+77Sxzq+3+knYa
                ZH9bDTMJBzN7Bj8RpFxwPIXAz+OQqIN3+tvmxYxoZxBnpVIt8MSZj3+/0WvitUfW
                2dCFmU2Umw9Lje4AWkcdEQOsQRivh7dvDDqPys/cA8GiCcjl/YBeyGBCARsaU1q7
                N6a3vLqE6R5sGtRk2tRD/pOLS/IseRYQ1JMLiI+h2IYURpFHmygk71dSTlxCnKr3
                Sewn6EAes6aJInKc9Q0ztFijMDvd1GpUk74aTfOTlPf8hAs/hCBcNANExdqtvArB
                As8e5ZTZ845b2EzwnexhF7sUMlQMAimTHpKG9n/v55IFDlndmQguLvqcAFLTxWYp
                5KeXRKQOKIETNcX2b2TmQcTVL8w0RSXPQQCWPUouwpaYT05KnJe32x+SMsj/D1Fu
                1uwJ
                -----END CERTIFICATE-----

                ### Trustis Limited

                === /C=GB/O=Trustis Limited/OU=Trustis FPS Root CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            1b:1f:ad:b6:20:f9:24:d3:36:6b:f7:c7:f1:8c:a0:59
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Dec 23 12:14:06 2003 GMT
                            Not After : Jan 21 11:36:54 2024 GMT
                        Subject: C=GB, O=Trustis Limited, OU=Trustis FPS Root CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Authority Key Identifier:
                                keyid:BA:FA:71:25:79:8B:57:41:25:21:86:0B:71:EB:B2:64:0E:8B:21:67

                            X509v3 Subject Key Identifier:
                                BA:FA:71:25:79:8B:57:41:25:21:86:0B:71:EB:B2:64:0E:8B:21:67
                SHA1 Fingerprint=3B:C0:38:0B:33:C3:F6:A6:0C:86:15:22:93:D9:DF:F5:4B:81:C0:04
                SHA256 Fingerprint=C1:B4:82:99:AB:A5:20:8F:E9:63:0A:CE:55:CA:68:A0:3E:DA:5A:51:9C:88:02:A0:D3:A6:73:BE:8F:8E:55:7D
                -----BEGIN CERTIFICATE-----
                MIIDZzCCAk+gAwIBAgIQGx+ttiD5JNM2a/fH8YygWTANBgkqhkiG9w0BAQUFADBF
                MQswCQYDVQQGEwJHQjEYMBYGA1UEChMPVHJ1c3RpcyBMaW1pdGVkMRwwGgYDVQQL
                ExNUcnVzdGlzIEZQUyBSb290IENBMB4XDTAzMTIyMzEyMTQwNloXDTI0MDEyMTEx
                MzY1NFowRTELMAkGA1UEBhMCR0IxGDAWBgNVBAoTD1RydXN0aXMgTGltaXRlZDEc
                MBoGA1UECxMTVHJ1c3RpcyBGUFMgUm9vdCBDQTCCASIwDQYJKoZIhvcNAQEBBQAD
                ggEPADCCAQoCggEBAMVQe547NdDfxIzNjpvto8A2mfRC6qc+gIMPpqdZh8mQRUN+
                AOqGeSoDvT03mYlmt+WKVoaTnGhLaASMk5MCPjDSNzoiYYkchU59j9WvezX2fihH
                iTHcDnlkH5nSW7r+f2C/revnPDgpai/lkQtV/+xvWNUtyd5MZnGPDNcE2gfmHhjj
                vSkCqPoc4Vu5g6hBSLwacY3nYuUtsuvffM/bq1rKMfFMIvMFE/eC+XN5DL7XSxzA
                0RU8k0Fk0ea+IxciAIleH2ulrG6nS4zto3Lmr2NNL4XSFDWaLk6M6jKYKIahkQlB
                OrTh4/L68MkKokHdqeMDx4gVOxzUGpTXn2RZEm0CAwEAAaNTMFEwDwYDVR0TAQH/
                BAUwAwEB/zAfBgNVHSMEGDAWgBS6+nEleYtXQSUhhgtx67JkDoshZzAdBgNVHQ4E
                FgQUuvpxJXmLV0ElIYYLceuyZA6LIWcwDQYJKoZIhvcNAQEFBQADggEBAH5Y//01
                GX2cGE+esCu8jowU/yyg2kdbw++BLa8F6nRIW/M+TgfHbcWzk88iNVy2P3UnXwmW
                zaD+vkAMXBJV+JOCyinpXj9WV4s4NvdFGkwozZ5BuO1WTISkQMi4sKUraXAEasP4
                1BIy+Q7DsdwyhEQsb8tGD+pmQQ9P8Vilpg0ND2HepZ5dfWWhPBfnqFVO76DH7cZE
                f1T1o+CP8HxVIo8ptoGj4W1OLBuAZ+ytIJ8MYmHVl/9D7S3B2l0pKoU/rGXuhg8F
                jZBf3+6f9L/uHfuY5H+QK4R4EA5sSVPvFVtlRkpdr7r7OnIdzfYliB6XzCGcKQEN
                ZetX2fNXlrtIzYE=
                -----END CERTIFICATE-----

                ### Trustwave Holdings, Inc.

                === /C=US/ST=Illinois/L=Chicago/O=Trustwave Holdings, Inc./CN=Trustwave Global Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            05:f7:0e:86:da:49:f3:46:35:2e:ba:b2
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Aug 23 19:34:12 2017 GMT
                            Not After : Aug 23 19:34:12 2042 GMT
                        Subject: C=US, ST=Illinois, L=Chicago, O=Trustwave Holdings, Inc., CN=Trustwave Global Certification Authority
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                99:E0:19:67:0D:62:DB:76:B3:DA:3D:B8:5B:E8:FD:42:D2:31:0E:87
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=2F:8F:36:4F:E1:58:97:44:21:59:87:A5:2A:9A:D0:69:95:26:7F:B5
                SHA256 Fingerprint=97:55:20:15:F5:DD:FC:3C:87:88:C0:06:94:45:55:40:88:94:45:00:84:F1:00:86:70:86:BC:1A:2B:B5:8D:C8
                -----BEGIN CERTIFICATE-----
                MIIF2jCCA8KgAwIBAgIMBfcOhtpJ80Y1LrqyMA0GCSqGSIb3DQEBCwUAMIGIMQsw
                CQYDVQQGEwJVUzERMA8GA1UECAwISWxsaW5vaXMxEDAOBgNVBAcMB0NoaWNhZ28x
                ITAfBgNVBAoMGFRydXN0d2F2ZSBIb2xkaW5ncywgSW5jLjExMC8GA1UEAwwoVHJ1
                c3R3YXZlIEdsb2JhbCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTAeFw0xNzA4MjMx
                OTM0MTJaFw00MjA4MjMxOTM0MTJaMIGIMQswCQYDVQQGEwJVUzERMA8GA1UECAwI
                SWxsaW5vaXMxEDAOBgNVBAcMB0NoaWNhZ28xITAfBgNVBAoMGFRydXN0d2F2ZSBI
                b2xkaW5ncywgSW5jLjExMC8GA1UEAwwoVHJ1c3R3YXZlIEdsb2JhbCBDZXJ0aWZp
                Y2F0aW9uIEF1dGhvcml0eTCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIB
                ALldUShLPDeS0YLOvR29zd24q88KPuFd5dyqCblXAj7mY2Hf8g+CY66j96xz0Xzn
                swuvCAAJWX/NKSqIk4cXGIDtiLK0thAfLdZfVaITXdHG6wZWiYj+rDKd/VzDBcdu
                7oaJuogDnXIhhpCujwOl3J+IKMujkkkP7NAP4m1ET4BqstTnoApTAbqOl5F2brz8
                1Ws25kCI1nsvXwXoLG0R8+eyvpJETNKXpP7ScoFDB5zpET71ixpZfR9oWN0EACyW
                80OzfpgZdNmcc9kYvkHHNHnZ9GLCQ7mzJ7Aiy/k9UscwR7PJPrhq4ufogXBeQotP
                JqX+OsIgbrv4Fo7NDKm0G2x2EOFYeUY+VM6AqFcJNykbmROPDMjWLBz7BegIlT1l
                RtzuzWniTY+HKE40Cz7PFNm73bZQmq131BnW2hqIyE4bJ3XYsgjxroMwuREOzYfw
                hI0Vcnyh78zyiGG69Gm7DIwLdVcEuE4qFC49DxweMqZiNu5m4iK4BUBjECLzMx10
                coos9TkpoNPnG4CELcU9402x/RpvumUHO1jsQkUm+9jaJXLE9gCxInm943xZYkqc
                BW89zubWR2OZxiRvchLIrH+QtAuRcOi35hYQcRfO3gZPSEF9NUqjifLJS3tBEW1n
                twiYTOURGa5CgNz7kAXU+FDKvuStx8KU1xad5hePrzb7AgMBAAGjQjBAMA8GA1Ud
                EwEB/wQFMAMBAf8wHQYDVR0OBBYEFJngGWcNYtt2s9o9uFvo/ULSMQ6HMA4GA1Ud
                DwEB/wQEAwIBBjANBgkqhkiG9w0BAQsFAAOCAgEAmHNw4rDT7TnsTGDZqRKGFx6W
                0OhUKDtkLSGm+J1WE2pIPU/HPinbbViDVD2HfSMF1OQc3Og4ZYbFdada2zUFvXfe
                uyk3QAUHw5RSn8pk3fEbK9xGChACMf1KaA0HZJDmHvUqoai7PF35owgLEQzxPy0Q
                lG/+4jSHg9bP5Rs1bdID4bANqKCqRieCNqcVtgimQlRXtpla4gt5kNdXElE1GYhB
                aCXUNxeEFfsBctyV3lImIJgm4nb1J2/6ADtKYdkNy1GTKv0WBpanI5ojSP5RvbbE
                sLFUzt5sQa0WZ37b/TjNuThOssFgy50X31ieemKyJo90lZvkWx3SD92YHJtZuSPT
                MaCm/zjdzyBP6VhWOmfD0faZmZ26NraAL4hHT4a/RDqA5Dccprrql5gR0IRiR2Qe
                qu5AvzSxnI9O4fKSTx+O856X3vOmeWqJcU9LJxdI/uz0UA9PSX3MReO9ekDFQdxh
                VicGaeVyQYHTtgGJoC86cnn+OjC/QezHYj6RS8fZMXZC+fc8Y+wmjHMMfRod6qh8
                h6jCJ3zhM0EPz8/8AKAigJ5Kp28AsEFFtyLKaEjFQqKu3R3y4G5OBVixwJAWKqQ9
                EEC+j2Jjg6mcgn0tAumDMHzLJ8n9HmYAsC7TIS+OMxZsmO0QqAfWzJPP29FpHOTK
                yeC2nOnOcXHebD8WpHk=
                -----END CERTIFICATE-----
                === /C=US/ST=Illinois/L=Chicago/O=Trustwave Holdings, Inc./CN=Trustwave Global ECC P256 Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            0d:6a:5f:08:3f:28:5c:3e:51:95:df:5d
                    Signature Algorithm: ecdsa-with-SHA256
                        Validity
                            Not Before: Aug 23 19:35:10 2017 GMT
                            Not After : Aug 23 19:35:10 2042 GMT
                        Subject: C=US, ST=Illinois, L=Chicago, O=Trustwave Holdings, Inc., CN=Trustwave Global ECC P256 Certification Authority
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                A3:41:06:AC:90:6D:D1:4A:EB:75:A5:4A:10:99:B3:B1:A1:8B:4A:F7
                SHA1 Fingerprint=B4:90:82:DD:45:0C:BE:8B:5B:B1:66:D3:E2:A4:08:26:CD:ED:42:CF
                SHA256 Fingerprint=94:5B:BC:82:5E:A5:54:F4:89:D1:FD:51:A7:3D:DF:2E:A6:24:AC:70:19:A0:52:05:22:5C:22:A7:8C:CF:A8:B4
                -----BEGIN CERTIFICATE-----
                MIICYDCCAgegAwIBAgIMDWpfCD8oXD5Rld9dMAoGCCqGSM49BAMCMIGRMQswCQYD
                VQQGEwJVUzERMA8GA1UECBMISWxsaW5vaXMxEDAOBgNVBAcTB0NoaWNhZ28xITAf
                BgNVBAoTGFRydXN0d2F2ZSBIb2xkaW5ncywgSW5jLjE6MDgGA1UEAxMxVHJ1c3R3
                YXZlIEdsb2JhbCBFQ0MgUDI1NiBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTAeFw0x
                NzA4MjMxOTM1MTBaFw00MjA4MjMxOTM1MTBaMIGRMQswCQYDVQQGEwJVUzERMA8G
                A1UECBMISWxsaW5vaXMxEDAOBgNVBAcTB0NoaWNhZ28xITAfBgNVBAoTGFRydXN0
                d2F2ZSBIb2xkaW5ncywgSW5jLjE6MDgGA1UEAxMxVHJ1c3R3YXZlIEdsb2JhbCBF
                Q0MgUDI1NiBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTBZMBMGByqGSM49AgEGCCqG
                SM49AwEHA0IABH77bOYj43MyCMpg5lOcunSNGLB4kFKA3TjASh3RqMyTpJcGOMoN
                FWLGjgEqZZ2q3zSRLoHB5DOSMcT9CTqmP62jQzBBMA8GA1UdEwEB/wQFMAMBAf8w
                DwYDVR0PAQH/BAUDAwcGADAdBgNVHQ4EFgQUo0EGrJBt0UrrdaVKEJmzsaGLSvcw
                CgYIKoZIzj0EAwIDRwAwRAIgB+ZU2g6gWrKuEZ+Hxbb/ad4lvvigtwjzRM4q3wgh
                DDcCIC0mA6AFvWvR9lz4ZcyGbbOcNEhjhAnFjXca4syc4XR7
                -----END CERTIFICATE-----
                === /C=US/ST=Illinois/L=Chicago/O=Trustwave Holdings, Inc./CN=Trustwave Global ECC P384 Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            08:bd:85:97:6c:99:27:a4:80:68:47:3b
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: Aug 23 19:36:43 2017 GMT
                            Not After : Aug 23 19:36:43 2042 GMT
                        Subject: C=US, ST=Illinois, L=Chicago, O=Trustwave Holdings, Inc., CN=Trustwave Global ECC P384 Certification Authority
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Subject Key Identifier:
                                55:A9:84:89:D2:C1:32:BD:18:CB:6C:A6:07:4E:C8:E7:9D:BE:82:90
                SHA1 Fingerprint=E7:F3:A3:C8:CF:6F:C3:04:2E:6D:0E:67:32:C5:9E:68:95:0D:5E:D2
                SHA256 Fingerprint=55:90:38:59:C8:C0:C3:EB:B8:75:9E:CE:4E:25:57:22:5F:F5:75:8B:BD:38:EB:D4:82:76:60:1E:1B:D5:80:97
                -----BEGIN CERTIFICATE-----
                MIICnTCCAiSgAwIBAgIMCL2Fl2yZJ6SAaEc7MAoGCCqGSM49BAMDMIGRMQswCQYD
                VQQGEwJVUzERMA8GA1UECBMISWxsaW5vaXMxEDAOBgNVBAcTB0NoaWNhZ28xITAf
                BgNVBAoTGFRydXN0d2F2ZSBIb2xkaW5ncywgSW5jLjE6MDgGA1UEAxMxVHJ1c3R3
                YXZlIEdsb2JhbCBFQ0MgUDM4NCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTAeFw0x
                NzA4MjMxOTM2NDNaFw00MjA4MjMxOTM2NDNaMIGRMQswCQYDVQQGEwJVUzERMA8G
                A1UECBMISWxsaW5vaXMxEDAOBgNVBAcTB0NoaWNhZ28xITAfBgNVBAoTGFRydXN0
                d2F2ZSBIb2xkaW5ncywgSW5jLjE6MDgGA1UEAxMxVHJ1c3R3YXZlIEdsb2JhbCBF
                Q0MgUDM4NCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTB2MBAGByqGSM49AgEGBSuB
                BAAiA2IABGvaDXU1CDFHBa5FmVXxERMuSvgQMSOjfoPTfygIOiYaOs+Xgh+AtycJ
                j9GOMMQKmw6sWASr9zZ9lCOkmwqKi6vr/TklZvFe/oyujUF5nQlgziip04pt89ZF
                1PKYhDhloKNDMEEwDwYDVR0TAQH/BAUwAwEB/zAPBgNVHQ8BAf8EBQMDBwYAMB0G
                A1UdDgQWBBRVqYSJ0sEyvRjLbKYHTsjnnb6CkDAKBggqhkjOPQQDAwNnADBkAjA3
                AZKXRRJ+oPM+rRk6ct30UJMDEr5E0k9BpIycnR+j9sKS50gU/k6bpZFXrsY3crsC
                MGclCrEMXu6pY5Jv5ZAL/mYiykf9ijH3g/56vxC+GCsej/YpHpRZ744hN8tRmKVu
                Sw==
                -----END CERTIFICATE-----

                ### Turkiye Bilimsel ve Teknolojik Arastirma Kurumu - TUBITAK

                === /C=TR/L=Gebze - Kocaeli/O=Turkiye Bilimsel ve Teknolojik Arastirma Kurumu - TUBITAK/OU=Kamu Sertifikasyon Merkezi - Kamu SM/CN=TUBITAK Kamu SM SSL Kok Sertifikasi - Surum 1
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 1 (0x1)
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Nov 25 08:25:55 2013 GMT
                            Not After : Oct 25 08:25:55 2043 GMT
                        Subject: C=TR, L=Gebze - Kocaeli, O=Turkiye Bilimsel ve Teknolojik Arastirma Kurumu - TUBITAK, OU=Kamu Sertifikasyon Merkezi - Kamu SM, CN=TUBITAK Kamu SM SSL Kok Sertifikasi - Surum 1
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                65:3F:C7:8A:86:C6:3C:DD:3C:54:5C:35:F8:3A:ED:52:0C:47:57:C8
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                SHA1 Fingerprint=31:43:64:9B:EC:CE:27:EC:ED:3A:3F:0B:8F:0D:E4:E8:91:DD:EE:CA
                SHA256 Fingerprint=46:ED:C3:68:90:46:D5:3A:45:3F:B3:10:4A:B8:0D:CA:EC:65:8B:26:60:EA:16:29:DD:7E:86:79:90:64:87:16
                -----BEGIN CERTIFICATE-----
                MIIEYzCCA0ugAwIBAgIBATANBgkqhkiG9w0BAQsFADCB0jELMAkGA1UEBhMCVFIx
                GDAWBgNVBAcTD0dlYnplIC0gS29jYWVsaTFCMEAGA1UEChM5VHVya2l5ZSBCaWxp
                bXNlbCB2ZSBUZWtub2xvamlrIEFyYXN0aXJtYSBLdXJ1bXUgLSBUVUJJVEFLMS0w
                KwYDVQQLEyRLYW11IFNlcnRpZmlrYXN5b24gTWVya2V6aSAtIEthbXUgU00xNjA0
                BgNVBAMTLVRVQklUQUsgS2FtdSBTTSBTU0wgS29rIFNlcnRpZmlrYXNpIC0gU3Vy
                dW0gMTAeFw0xMzExMjUwODI1NTVaFw00MzEwMjUwODI1NTVaMIHSMQswCQYDVQQG
                EwJUUjEYMBYGA1UEBxMPR2ViemUgLSBLb2NhZWxpMUIwQAYDVQQKEzlUdXJraXll
                IEJpbGltc2VsIHZlIFRla25vbG9qaWsgQXJhc3Rpcm1hIEt1cnVtdSAtIFRVQklU
                QUsxLTArBgNVBAsTJEthbXUgU2VydGlmaWthc3lvbiBNZXJrZXppIC0gS2FtdSBT
                TTE2MDQGA1UEAxMtVFVCSVRBSyBLYW11IFNNIFNTTCBLb2sgU2VydGlmaWthc2kg
                LSBTdXJ1bSAxMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAr3UwM6q7
                a9OZLBI3hNmNe5eA027n/5tQlT6QlVZC1xl8JoSNkvoBHToP4mQ4t4y86Ij5iySr
                LqP1N+RAjhgleYN1Hzv/bKjFxlb4tO2KRKOrbEz8HdDc72i9z+SqzvBV96I01INr
                N3wcwv61A+xXzry0tcXtAA9TNypN9E8Mg/uGz8v+jE69h/mniyFXnHrfA2eJLJ2X
                YacQuFWQfw4tJzh03+f92k4S400VIgLI4OD8D62K18lUUMw7D8oWgITQUVbDjlZ/
                iSIzL+aFCr2lqBs23tPcLG07xxO9WSMs5uWk99gL7eqQQESolbuT1dCANLZGeA4f
                AJNG4e7p+exPFwIDAQABo0IwQDAdBgNVHQ4EFgQUZT/HiobGPN08VFw1+DrtUgxH
                V8gwDgYDVR0PAQH/BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEL
                BQADggEBACo/4fEyjq7hmFxLXs9rHmoJ0iKpEsdeV31zVmSAhHqT5Am5EM2fKifh
                AHe+SMg1qIGf5LgsyX8OsNJLN13qudULXjS99HMpw+0mFZx+CFOKWI3QSyjfwbPf
                IPP54+M638yclNhOT8NrF7f3cuitZjO1JVOr4PhMqZ398g26rrnZqsZr+ZO7rqu4
                lzwDGrpDxpa5RXI4s6ehlj2Re37AIVNMh+3yC1SVUZPVIqUNivGTDj5UDrDYyU7c
                8jEyVupk+eq1nRZmQnLzf9OxMUP8pI4X8W0jq5Rm+K37DwhuJi1/FwcJsoz7UMCf
                lo3Ptv0AnVoUmr8CRPXBwp8iXqIPoeM=
                -----END CERTIFICATE-----

                ### UniTrust

                === /C=CN/O=UniTrust/CN=UCA Extended Validation Root
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            4f:d2:2b:8f:f5:64:c8:33:9e:4f:34:58:66:23:70:60
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Mar 13 00:00:00 2015 GMT
                            Not After : Dec 31 00:00:00 2038 GMT
                        Subject: C=CN, O=UniTrust, CN=UCA Extended Validation Root
                        X509v3 extensions:
                            X509v3 Subject Key Identifier:
                                D9:74:3A:E4:30:3D:0D:F7:12:DC:7E:5A:05:9F:1E:34:9A:F7:E1:14
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Digital Signature, Certificate Sign, CRL Sign
                SHA1 Fingerprint=A3:A1:B0:6F:24:61:23:4A:E3:36:A5:C2:37:FC:A6:FF:DD:F0:D7:3A
                SHA256 Fingerprint=D4:3A:F9:B3:54:73:75:5C:96:84:FC:06:D7:D8:CB:70:EE:5C:28:E7:73:FB:29:4E:B4:1E:E7:17:22:92:4D:24
                -----BEGIN CERTIFICATE-----
                MIIFWjCCA0KgAwIBAgIQT9Irj/VkyDOeTzRYZiNwYDANBgkqhkiG9w0BAQsFADBH
                MQswCQYDVQQGEwJDTjERMA8GA1UECgwIVW5pVHJ1c3QxJTAjBgNVBAMMHFVDQSBF
                eHRlbmRlZCBWYWxpZGF0aW9uIFJvb3QwHhcNMTUwMzEzMDAwMDAwWhcNMzgxMjMx
                MDAwMDAwWjBHMQswCQYDVQQGEwJDTjERMA8GA1UECgwIVW5pVHJ1c3QxJTAjBgNV
                BAMMHFVDQSBFeHRlbmRlZCBWYWxpZGF0aW9uIFJvb3QwggIiMA0GCSqGSIb3DQEB
                AQUAA4ICDwAwggIKAoICAQCpCQcoEwKwmeBkqh5DFnpzsZGgdT6o+uM4AHrsiWog
                D4vFsJszA1qGxliG1cGFu0/GnEBNyr7uaZa4rYEwmnySBesFK5pI0Lh2PpbIILvS
                sPGP2KxFRv+qZ2C0d35qHzwaUnoEPQc8hQ2E0B92CvdqFN9y4zR8V05WAT558aop
                O2z6+I9tTcg1367r3CTueUWnhbYFiN6IXSV8l2RnCdm/WhUFhvMJHuxYMjMR83dk
                sHYf5BA1FxvyDrFspCqjc/wJHx4yGVMR59mzLC52LqGj3n5qiAno8geK+LLNEOfi
                c0CTuwjRP+H8C5SzJe98ptfRr5//lpr1kXuYC3fUfugH0mK1lTnj8/FtDw5lhIpj
                VMWAtuCeS31HJqcBCF3RiJ7XwzJE+oJKCmhUfzhTA8ykADNkUVkLo4KRel7sFsLz
                KuZi2irbWWIQJUoqgQtHB0MGcIfS+pMRKXpITeuUx3BNr2fVUbGAIAEBtHoIppB/
                TuDvB0GHr2qlXov7z1CymlSvw4m6WC31MJixNnI5fkkE/SmnTHnkBVfblLkWU41G
                sx2VYVdWf6/wFlthWG82UBEL2KwrlRYaDh8IzTY0ZRBiZtWAXxQgXy0MoHgKaNYs
                1+lvK9JKBZP8nm9rZ/+I8U6laUpSNwXqxhaN0sSZ0YIrO7o1dfdRUVjzyAfd5LQD
                fwIDAQABo0IwQDAdBgNVHQ4EFgQU2XQ65DA9DfcS3H5aBZ8eNJr34RQwDwYDVR0T
                AQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYwDQYJKoZIhvcNAQELBQADggIBADaN
                l8xCFWQpN5smLNb7rhVpLGsaGvdftvkHTFnq88nIua7Mui563MD1sC3AO6+fcAUR
                ap8lTwEpcOPlDOHqWnzcSbvBHiqB9RZLcpHIojG5qtr8nR/zXUACE/xOHAbKsxSQ
                VBcZEhrxH9cMaVr2cXj0lH2RC47skFSOvG+hTKv8dGT9cZr4QQehzZHkPJrgmzI5
                c6sq1WnIeJEmMX3ixzDx/BR4dxIOE/TdFpS/S2d7cFOFyrC78zhNLJA5wA3CXWvp
                4uXViI3WLL+rG761KIcSF3Ru/H38j9CHJrAb+7lsq+KePRXBOy5nAliRn+/4Qh8s
                t2j1da3Ptfb/EX3C8CSlrdP6oDyp+l3cpaDvRKS+1ujl5BOWF3sGPjLtx7dCvHaj
                2GU4Kzg1USEODm8uNBNA4StnDG1KQTAYI1oyVZnJF+A83vbsea0rWBmirSwiGpWO
                vpaQXUJXxPkUAzUrHC1RVwinOt4/5Mi0A3PCwSaAuwtCH60NryZy2sy+s6ODWA2C
                xR9GUeOcGMyNm43sSet1UNWMKFnKdDTajAshqx7qG+XH/RU+wBeq+yNuJkbL+vmx
                cmtpzyKEC2IPrNkZAJSidjzULZrtBJ4tBmIQN1IchXIbJ+XMxjHsN+xjWZsLHXbM
                fjKaiJUINlK73nZfdklJrX+9ZSCyycErdhh2n1ax
                -----END CERTIFICATE-----
                === /C=CN/O=UniTrust/CN=UCA Global G2 Root
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            5d:df:b1:da:5a:a3:ed:5d:be:5a:65:20:65:03:90:ef
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Mar 11 00:00:00 2016 GMT
                            Not After : Dec 31 00:00:00 2040 GMT
                        Subject: C=CN, O=UniTrust, CN=UCA Global G2 Root
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                81:C4:8C:CC:F5:E4:30:FF:A5:0C:08:5F:8C:15:67:21:74:01:DF:DF
                SHA1 Fingerprint=28:F9:78:16:19:7A:FF:18:25:18:AA:44:FE:C1:A0:CE:5C:B6:4C:8A
                SHA256 Fingerprint=9B:EA:11:C9:76:FE:01:47:64:C1:BE:56:A6:F9:14:B5:A5:60:31:7A:BD:99:88:39:33:82:E5:16:1A:A0:49:3C
                -----BEGIN CERTIFICATE-----
                MIIFRjCCAy6gAwIBAgIQXd+x2lqj7V2+WmUgZQOQ7zANBgkqhkiG9w0BAQsFADA9
                MQswCQYDVQQGEwJDTjERMA8GA1UECgwIVW5pVHJ1c3QxGzAZBgNVBAMMElVDQSBH
                bG9iYWwgRzIgUm9vdDAeFw0xNjAzMTEwMDAwMDBaFw00MDEyMzEwMDAwMDBaMD0x
                CzAJBgNVBAYTAkNOMREwDwYDVQQKDAhVbmlUcnVzdDEbMBkGA1UEAwwSVUNBIEds
                b2JhbCBHMiBSb290MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAxeYr
                b3zvJgUno4Ek2m/LAfmZmqkywiKHYUGRO8vDaBsGxUypK8FnFyIdK+35KYmToni9
                kmugow2ifsqTs6bRjDXVdfkX9s9FxeV67HeToI8jrg4aA3++1NDtLnurRiNb/yzm
                VHqUwCoV8MmNsHo7JOHXaOIxPAYzRrZUEaalLyJUKlgNAQLx+hVRZ2zA+te2G3/R
                VogvGjqNO7uCEeBHANBSh6v7hn4PJGtAnTRnvI3HLYZveT6OqTwXS3+wmeOwcWDc
                C/Vkw85DvG1xudLeJ1uK6NjGruFZfc8oLTW4lVYa8bJYS7cSN8h8s+1LgOGN+jIj
                tm+3SJUIsUROhYw6AlQgL9+/V087OpAh18EmNVQg7Mc/R+zvWr9LesGtOxdQXGLY
                D0tK3Cv6brxzks3sx1DoQZbXqX5t2Okdj4q1uViSukqSKwxW/YDrCPBeKW4bHAyv
                j5OJrdu9o54hyokZ7N+1wxrrFv54NkzWbtA+FxyQF2smuvt6L78RHBgOLXMDj6Dl
                NaBa4kx1HXHhOThTeEDMg5PXCp6dW4+K5OXgSORIskfNTip1KnvyIvbJvgmRlld6
                iIis7nCs+dwp4wwcOxJORNanTrAmyPPZGpeRaOrvjUYG0lZFWJo8DA+DuAUlwznP
                O6Q0ibd5Ei9Hxeepl2n8pndntd978XplFeRhVmUCAwEAAaNCMEAwDgYDVR0PAQH/
                BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFIHEjMz15DD/pQwIX4wV
                ZyF0Ad/fMA0GCSqGSIb3DQEBCwUAA4ICAQATZSL1jiutROTL/7lo5sOASD0Ee/oj
                L3rtNtqyzm325p7lX1iPyzcyochltq44PTUbPrw7tgTQvPlJ9Zv3hcU2tsu8+Mg5
                1eRfB70VVJd0ysrtT7q6ZHafgbiERUlMjW+i67HM0cOU2kTC5uLqGOiiHycFutfl
                1qnN3e92mI0ADs0b+gO3joBYDic/UvuUospeZcnWhNq5NXHzJsBPd+aBJ9J3O5oU
                b3n09tDh05S60FdRvScFDcH9yBIw7m+NESsIndTUv4BFFJqIRNow6rSn4+7vW4LV
                PtateJLbXDzz2K36uGt/xDYotgIVilQsnLAXc47QN6MUPJiVAAwpBVueSUmxX8fj
                y88nZY41F7dXyDDZQVu5FLbowg+UMaeUmMxq67XhJ/UQqAHojhJi6IjMtX9Gl8Cb
                EGY4GjZGXyJoPd/JxhMnq1MGrKI8hgZlb7F+sSlEmqO6SWkoaY/X5V+tBIZkbxqg
                DMUIYs6Ao9Dz7GjevjPHF1t/gMRMTLGmhIrDO7gJzRSBuhjjVFc2/tsvfEehOjPI
                +Vg7RE+xygKJBJYoaMVLuCaJu9YzL1DV/pqJuhgyklTGW+Cd+V7lDSKb9triyCGy
                YiGqhkCyLmTTX8jjfhFnRR8F/uOi77Oos/N9j/gMHyIfLXC0uAE0djAA5SN4p1bX
                UB+K+wb1whnw0A==
                -----END CERTIFICATE-----

                ### Unizeto Technologies S.A.

                === /C=PL/O=Unizeto Technologies S.A./OU=Certum Certification Authority/CN=Certum Trusted Network CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number: 279744 (0x444c0)
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Oct 22 12:07:37 2008 GMT
                            Not After : Dec 31 12:07:37 2029 GMT
                        Subject: C=PL, O=Unizeto Technologies S.A., OU=Certum Certification Authority, CN=Certum Trusted Network CA
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                08:76:CD:CB:07:FF:24:F6:C5:CD:ED:BB:90:BC:E2:84:37:46:75:F7
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                SHA1 Fingerprint=07:E0:32:E0:20:B7:2C:3F:19:2F:06:28:A2:59:3A:19:A7:0F:06:9E
                SHA256 Fingerprint=5C:58:46:8D:55:F5:8E:49:7E:74:39:82:D2:B5:00:10:B6:D1:65:37:4A:CF:83:A7:D4:A3:2D:B7:68:C4:40:8E
                -----BEGIN CERTIFICATE-----
                MIIDuzCCAqOgAwIBAgIDBETAMA0GCSqGSIb3DQEBBQUAMH4xCzAJBgNVBAYTAlBM
                MSIwIAYDVQQKExlVbml6ZXRvIFRlY2hub2xvZ2llcyBTLkEuMScwJQYDVQQLEx5D
                ZXJ0dW0gQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkxIjAgBgNVBAMTGUNlcnR1bSBU
                cnVzdGVkIE5ldHdvcmsgQ0EwHhcNMDgxMDIyMTIwNzM3WhcNMjkxMjMxMTIwNzM3
                WjB+MQswCQYDVQQGEwJQTDEiMCAGA1UEChMZVW5pemV0byBUZWNobm9sb2dpZXMg
                Uy5BLjEnMCUGA1UECxMeQ2VydHVtIENlcnRpZmljYXRpb24gQXV0aG9yaXR5MSIw
                IAYDVQQDExlDZXJ0dW0gVHJ1c3RlZCBOZXR3b3JrIENBMIIBIjANBgkqhkiG9w0B
                AQEFAAOCAQ8AMIIBCgKCAQEA4/t9o3K6wvDJFIf1awFO4W5AB7ptJ11/91sts1rH
                UV+rpDKmYYe2bg+G0jACl/jXaVehGDldamR5xgFZrDwxSjh80gTSSyjoIF87B6LM
                TXPb865Px1bVWqeWifrzq2jUI4ZZJ88JJ7ysbnKDHDBy3+Ci6dLhdHUZvSqeexVU
                BBvXQzmtVSjF4hq79MDkrjhJM8x2hZ85RdKknvISjFH4fOQtf/WsX+sWn7Et0brM
                kUJ3TCXJkDhv2/DM+44el1k+1WBO5gUo7Ul5E0u6SNsv+XLTOcr+H9g0cvW0QM8x
                AcPs3hEtF10fuFDRXhmnad4HMyjKUJX5p1TLVIZQRan5SQIDAQABo0IwQDAPBgNV
                HRMBAf8EBTADAQH/MB0GA1UdDgQWBBQIds3LB/8k9sXN7buQvOKEN0Z19zAOBgNV
                HQ8BAf8EBAMCAQYwDQYJKoZIhvcNAQEFBQADggEBAKaorSLOAT2mo/9i0Eidi15y
                sHhE49wcrwn9I0j6vSrEuVUEtRCjjSfeC4Jj0O7eDDd5QVsisrCaQVymcODU0HfL
                I9MA4GxWL+FpDQ3Zqr8hgVDZBqWo/5U30Kr+4rP1mS1FhIrlQgnXdAIv94nYmem8
                J9RHjboNRhx3zxSkHLmkMcScKHQDNP8zGSal6Q10tz6XxnboJ5ajZt3hrvJBW8qY
                VoNzcOSGGtIxQbovvi0TWnZvTuhOgQ4/WwMioBK+ZlgRSssDxLQqKi2WF+A5VLxI
                03YnnZotBqbJ7DnSq9ufmgsnAjUpsUCV5/nonFWIGUbWtzT1fs45mtk48VH3Tyw=
                -----END CERTIFICATE-----

                ### VeriSign, Inc.

                === /C=US/O=VeriSign, Inc./OU=VeriSign Trust Network/OU=(c) 2008 VeriSign, Inc. - For authorized use only/CN=VeriSign Universal Root Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            40:1a:c4:64:21:b3:13:21:03:0e:bb:e4:12:1a:c5:1d
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Apr  2 00:00:00 2008 GMT
                            Not After : Dec  1 23:59:59 2037 GMT
                        Subject: C=US, O=VeriSign, Inc., OU=VeriSign Trust Network, OU=(c) 2008 VeriSign, Inc. - For authorized use only, CN=VeriSign Universal Root Certification Authority
                        X509v3 extensions:
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            1.3.6.1.5.5.7.1.12:
                                0_.].[0Y0W0U..image/gif0!0.0...+..............k...j.H.,{..0%.#http://logo.verisign.com/vslogo.gif
                            X509v3 Subject Key Identifier:
                                B6:77:FA:69:48:47:9F:53:12:D5:C2:EA:07:32:76:07:D1:97:07:19
                SHA1 Fingerprint=36:79:CA:35:66:87:72:30:4D:30:A5:FB:87:3B:0F:A7:7B:B7:0D:54
                SHA256 Fingerprint=23:99:56:11:27:A5:71:25:DE:8C:EF:EA:61:0D:DF:2F:A0:78:B5:C8:06:7F:4E:82:82:90:BF:B8:60:E8:4B:3C
                -----BEGIN CERTIFICATE-----
                MIIEuTCCA6GgAwIBAgIQQBrEZCGzEyEDDrvkEhrFHTANBgkqhkiG9w0BAQsFADCB
                vTELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL
                ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwOCBWZXJp
                U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MTgwNgYDVQQDEy9W
                ZXJpU2lnbiBVbml2ZXJzYWwgUm9vdCBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTAe
                Fw0wODA0MDIwMDAwMDBaFw0zNzEyMDEyMzU5NTlaMIG9MQswCQYDVQQGEwJVUzEX
                MBUGA1UEChMOVmVyaVNpZ24sIEluYy4xHzAdBgNVBAsTFlZlcmlTaWduIFRydXN0
                IE5ldHdvcmsxOjA4BgNVBAsTMShjKSAyMDA4IFZlcmlTaWduLCBJbmMuIC0gRm9y
                IGF1dGhvcml6ZWQgdXNlIG9ubHkxODA2BgNVBAMTL1ZlcmlTaWduIFVuaXZlcnNh
                bCBSb290IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MIIBIjANBgkqhkiG9w0BAQEF
                AAOCAQ8AMIIBCgKCAQEAx2E3XrEBNNti1xWb/1hajCMj1mCOkdeQmIN65lgZOIzF
                9uVkhbSicfvtvbnazU0AtMgtc6XHaXGVHzk8skQHnOgO+k1KxCHfKWGPMiJhgsWH
                H26MfF8WIFFE0XBPV+rjHOPMee5Y2A7Cs0WTwCznmhcrewA3ekEzeOEz4vMQGn+H
                LL729fdC4uW/h2KJXwBL38Xd5HVEMkE6HnFuacsLdUYI0crSK5XQz/u5QGtkjFdN
                /BMReYTtXlT2NJ8IAfMQJQYXStrxHXpma5hgZqTZ79IugvHw7wnqRMkVauIDbjPT
                rJ9VAMf2CGqUuV/c4DPxhGD5WycRtPwW8rtWaoAljQIDAQABo4GyMIGvMA8GA1Ud
                EwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMG0GCCsGAQUFBwEMBGEwX6FdoFsw
                WTBXMFUWCWltYWdlL2dpZjAhMB8wBwYFKw4DAhoEFI/l0xqGrI2Oa8PPgGrUSBgs
                exkuMCUWI2h0dHA6Ly9sb2dvLnZlcmlzaWduLmNvbS92c2xvZ28uZ2lmMB0GA1Ud
                DgQWBBS2d/ppSEefUxLVwuoHMnYH0ZcHGTANBgkqhkiG9w0BAQsFAAOCAQEASvj4
                sAPmLGd75JR3Y8xuTPl9Dg3cyLk1uXBPY/ok+myDjEedO2Pzmvl2MpWRsXe8rJq+
                seQxIcaBlVZaDrHC1LGmWazxY8u4TB1ZkErvkBYoH1quEPuBUDgMbMzxPcP1Y+Oz
                4yHJJDnp/RVmRvQbEdBNc6N9Rvk97ahfYtTxP/jgdFcrGJ2BtMQo2pSXpXDrrB2+
                BxHw1dvd5Yzw1TKwg+ZX4o+/vqGqvz0dtdQ46tewXDpPaj+PwGZsY6rp2aQW9IHR
                lRQOfc2VNNnSj3BzgXucfr2YYdhFh5iQxeuGMMY1v/D/w1WIg0vvBZIGcfK4mJO3
                7M2CYfE45k+XmCpajQ==
                -----END CERTIFICATE-----

                ### WISeKey

                === /C=CH/O=WISeKey/OU=OISTE Foundation Endorsed/CN=OISTE WISeKey Global Root GB CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            76:b1:20:52:74:f0:85:87:46:b3:f8:23:1a:f6:c2:c0
                    Signature Algorithm: sha256WithRSAEncryption
                        Validity
                            Not Before: Dec  1 15:00:32 2014 GMT
                            Not After : Dec  1 15:10:31 2039 GMT
                        Subject: C=CH, O=WISeKey, OU=OISTE Foundation Endorsed, CN=OISTE WISeKey Global Root GB CA
                        X509v3 extensions:
                            X509v3 Key Usage:
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                35:0F:C8:36:63:5E:E2:A3:EC:F9:3B:66:15:CE:51:52:E3:91:9A:3D
                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=0F:F9:40:76:18:D3:D7:6A:4B:98:F0:A8:35:9E:0C:FD:27:AC:CC:ED
                SHA256 Fingerprint=6B:9C:08:E8:6E:B0:F7:67:CF:AD:65:CD:98:B6:21:49:E5:49:4A:67:F5:84:5E:7B:D1:ED:01:9F:27:B8:6B:D6
                -----BEGIN CERTIFICATE-----
                MIIDtTCCAp2gAwIBAgIQdrEgUnTwhYdGs/gjGvbCwDANBgkqhkiG9w0BAQsFADBt
                MQswCQYDVQQGEwJDSDEQMA4GA1UEChMHV0lTZUtleTEiMCAGA1UECxMZT0lTVEUg
                Rm91bmRhdGlvbiBFbmRvcnNlZDEoMCYGA1UEAxMfT0lTVEUgV0lTZUtleSBHbG9i
                YWwgUm9vdCBHQiBDQTAeFw0xNDEyMDExNTAwMzJaFw0zOTEyMDExNTEwMzFaMG0x
                CzAJBgNVBAYTAkNIMRAwDgYDVQQKEwdXSVNlS2V5MSIwIAYDVQQLExlPSVNURSBG
                b3VuZGF0aW9uIEVuZG9yc2VkMSgwJgYDVQQDEx9PSVNURSBXSVNlS2V5IEdsb2Jh
                bCBSb290IEdCIENBMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA2Be3
                HEokKtaXscriHvt9OO+Y9bI5mE4nuBFde9IllIiCFSZqGzG7qFshISvYD06fWvGx
                WuR51jIjK+FTzJlFXHtPrby/h0oLS5daqPZI7H17Dc0hBt+eFf1Biki3IPShehtX
                1F1Q/7pn2COZH8g/497/b1t3sWtuuMlk9+HKQUYOKXHQuSP8yYFfTvdv37+ErXNk
                u7dCjmn21HYdfp2nuFeKUWdy19SouJVUQHMD9ur06/4oQnc/nSMbsrY9gBQHTC5P
                99UKFg29ZkM3fiNDecNAhvVMKdqOmq0NpQSHiB6F4+lT1ZvIiwNjeOvgGUpuuy9r
                M2RYk61pv48b74JIxwIDAQABo1EwTzALBgNVHQ8EBAMCAYYwDwYDVR0TAQH/BAUw
                AwEB/zAdBgNVHQ4EFgQUNQ/INmNe4qPs+TtmFc5RUuORmj0wEAYJKwYBBAGCNxUB
                BAMCAQAwDQYJKoZIhvcNAQELBQADggEBAEBM+4eymYGQfp3FsLAmzYh7KzKNbrgh
                cViXfa43FK8+5/ea4n32cZiZBKpDdHij40lhPnOMTZTg+XHEthYOU3gf1qKHLwI5
                gSk8rxWYITD+KJAAjNHhy/peyP34EEY7onhCkRd0VQreUGdNZtGn//3ZwLWoo4rO
                ZvUPQ82nK1d7Y0Zqqi5S2PTt4W2tKZB4SLrhI6qjiey1q5bAtEuiHZeeevJuQHHf
                aPFlTc58Bd9TZaml8LGXBHAVRgOY1NK/VLSgWH1Sb9pWJmLU2NuJMW8c8CLC02Ic
                Nc1MaRVUGpCY3useX8p3x8uOPUNpnJpY0CQ73xtAln41rYHHTnG6iBM=
                -----END CERTIFICATE-----
                === /C=CH/O=WISeKey/OU=OISTE Foundation Endorsed/CN=OISTE WISeKey Global Root GC CA
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            21:2a:56:0c:ae:da:0c:ab:40:45:bf:2b:a2:2d:3a:ea
                    Signature Algorithm: ecdsa-with-SHA384
                        Validity
                            Not Before: May  9 09:48:34 2017 GMT
                            Not After : May  9 09:58:33 2042 GMT
                        Subject: C=CH, O=WISeKey, OU=OISTE Foundation Endorsed, CN=OISTE WISeKey Global Root GC CA
                        X509v3 extensions:
                            X509v3 Key Usage: critical
                                Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                48:87:14:AC:E3:C3:9E:90:60:3A:D7:CA:89:EE:D3:AD:8C:B4:50:66
                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=E0:11:84:5E:34:DE:BE:88:81:B9:9C:F6:16:26:D1:96:1F:C3:B9:31
                SHA256 Fingerprint=85:60:F9:1C:36:24:DA:BA:95:70:B5:FE:A0:DB:E3:6F:F1:1A:83:23:BE:94:86:85:4F:B3:F3:4A:55:71:19:8D
                -----BEGIN CERTIFICATE-----
                MIICaTCCAe+gAwIBAgIQISpWDK7aDKtARb8roi066jAKBggqhkjOPQQDAzBtMQsw
                CQYDVQQGEwJDSDEQMA4GA1UEChMHV0lTZUtleTEiMCAGA1UECxMZT0lTVEUgRm91
                bmRhdGlvbiBFbmRvcnNlZDEoMCYGA1UEAxMfT0lTVEUgV0lTZUtleSBHbG9iYWwg
                Um9vdCBHQyBDQTAeFw0xNzA1MDkwOTQ4MzRaFw00MjA1MDkwOTU4MzNaMG0xCzAJ
                BgNVBAYTAkNIMRAwDgYDVQQKEwdXSVNlS2V5MSIwIAYDVQQLExlPSVNURSBGb3Vu
                ZGF0aW9uIEVuZG9yc2VkMSgwJgYDVQQDEx9PSVNURSBXSVNlS2V5IEdsb2JhbCBS
                b290IEdDIENBMHYwEAYHKoZIzj0CAQYFK4EEACIDYgAETOlQwMYPchi82PG6s4ni
                eUqjFqdrVCTbUf/q9Akkwwsin8tqJ4KBDdLArzHkdIJuyiXZjHWd8dvQmqJLIX4W
                p2OQ0jnUsYd4XxiWD1AbNTcPasbc2RNNpI6QN+a9WzGRo1QwUjAOBgNVHQ8BAf8E
                BAMCAQYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUSIcUrOPDnpBgOtfKie7T
                rYy0UGYwEAYJKwYBBAGCNxUBBAMCAQAwCgYIKoZIzj0EAwMDaAAwZQIwJsdpW9zV
                57LnyAyMjMPdeYwbY9XJUpROTYJKcx6ygISpJcBMWm1JKWB4E+J+SOtkAjEA2zQg
                Mgj/mkkCtojeFK9dbJlxjRo/i9fgojaGHAeCOnZT/cKi7e97sIBPWA9LUzm9
                -----END CERTIFICATE-----

                ### XRamp Security Services Inc

                === /C=US/OU=www.xrampsecurity.com/O=XRamp Security Services Inc/CN=XRamp Global Certification Authority
                Certificate:
                    Data:
                        Version: 3 (0x2)
                        Serial Number:
                            50:94:6c:ec:18:ea:d5:9c:4d:d5:97:ef:75:8f:a0:ad
                    Signature Algorithm: sha1WithRSAEncryption
                        Validity
                            Not Before: Nov  1 17:14:04 2004 GMT
                            Not After : Jan  1 05:37:19 2035 GMT
                        Subject: C=US, OU=www.xrampsecurity.com, O=XRamp Security Services Inc, CN=XRamp Global Certification Authority
                        X509v3 extensions:
                            1.3.6.1.4.1.311.20.2:
                                ...C.A
                            X509v3 Key Usage:
                                Digital Signature, Certificate Sign, CRL Sign
                            X509v3 Basic Constraints: critical
                                CA:TRUE
                            X509v3 Subject Key Identifier:
                                C6:4F:A2:3D:06:63:84:09:9C:CE:62:E4:04:AC:8D:5C:B5:E9:B6:1B
                            X509v3 CRL Distribution Points:

                                Full Name:
                                  URI:http://crl.xrampsecurity.com/XGCA.crl

                            1.3.6.1.4.1.311.21.1:
                                ...
                SHA1 Fingerprint=B8:01:86:D1:EB:9C:86:A5:41:04:CF:30:54:F3:4C:52:B7:E5:58:C6
                SHA256 Fingerprint=CE:CD:DC:90:50:99:D8:DA:DF:C5:B1:D2:09:B7:37:CB:E2:C1:8C:FB:2C:10:C0:FF:0B:CF:0D:32:86:FC:1A:A2
                -----BEGIN CERTIFICATE-----
                MIIEMDCCAxigAwIBAgIQUJRs7Bjq1ZxN1ZfvdY+grTANBgkqhkiG9w0BAQUFADCB
                gjELMAkGA1UEBhMCVVMxHjAcBgNVBAsTFXd3dy54cmFtcHNlY3VyaXR5LmNvbTEk
                MCIGA1UEChMbWFJhbXAgU2VjdXJpdHkgU2VydmljZXMgSW5jMS0wKwYDVQQDEyRY
                UmFtcCBHbG9iYWwgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMDQxMTAxMTcx
                NDA0WhcNMzUwMTAxMDUzNzE5WjCBgjELMAkGA1UEBhMCVVMxHjAcBgNVBAsTFXd3
                dy54cmFtcHNlY3VyaXR5LmNvbTEkMCIGA1UEChMbWFJhbXAgU2VjdXJpdHkgU2Vy
                dmljZXMgSW5jMS0wKwYDVQQDEyRYUmFtcCBHbG9iYWwgQ2VydGlmaWNhdGlvbiBB
                dXRob3JpdHkwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCYJB69FbS6
                38eMpSe2OAtp87ZOqCwuIR1cRN8hXX4jdP5efrRKt6atH67gBhbim1vZZ3RrXYCP
                KZ2GG9mcDZhtdhAoWORlsH9KmHmf4MMxfoArtYzAQDsRhtDLooY2YKTVMIJt2W7Q
                DxIEM5dfT2Fa8OT5kavnHTu86M/0ay00fOJIYRyO82FEzG+gSqmUsE3a56k0enI4
                qEHMPJQRfevIpoy3hsvKMzvZPTeL+3o+hiznc9cKV6xkmxnr9A8ECIqsAxcZZPRa
                JSKNNCyy9mgdEm3Tih4U2sSPpuIjhdV6Db1q4Ons7Be7QhtnqiXtRYMh/MHJfNVi
                PvryxS3T/dRlAgMBAAGjgZ8wgZwwEwYJKwYBBAGCNxQCBAYeBABDAEEwCwYDVR0P
                BAQDAgGGMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFMZPoj0GY4QJnM5i5ASs
                jVy16bYbMDYGA1UdHwQvMC0wK6ApoCeGJWh0dHA6Ly9jcmwueHJhbXBzZWN1cml0
                eS5jb20vWEdDQS5jcmwwEAYJKwYBBAGCNxUBBAMCAQEwDQYJKoZIhvcNAQEFBQAD
                ggEBAJEVOQMBG2f7Shz5CmBbodpNl2L5JFMn14JkTpAuw0kbK5rc/Kh4ZzXxHfAR
                vbdI4xD2Dd8/0sm2qlWkSLoC295ZLhVbO50WfUfXN+pfTXYSNrsf16GBBEYgoyxt
                qZ4Bfj8pzgCT3/3JknOJiWSe5yvkHJEs0rnOfc5vMZnT5r7SHpDwCRR5XCOrTdLa
                IR9NmXmd4c8nnxCbHIgNsIpkQTG4DmyQJKSbXHGPurt+HBvbaoAPIbzp26a3QPSy
                i6mx5O+aGtA9aZnuqCij4Tyz8LIRnM98QObd50N9otg6tamN8jSZxNQQ4Qb9CYQQ
                O+7ETPTsJ3xCwnR8gooJybQDJbw=
                -----END CERTIFICATE-----
)certs";
