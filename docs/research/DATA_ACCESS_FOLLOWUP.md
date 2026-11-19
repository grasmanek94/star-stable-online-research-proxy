# New comprehensive data-access request — 2026-11-15

The user requested a completely new personal-data access request, including the additional PC security/telemetry scope discussed in the static review. The email below makes no reference to previous requests or replies. It covers all personal data concerning the requester, with detailed technical categories requested conditionally wherever they exist.

## Evidence boundary

The IDA findings concern code capable of reading window titles/classes, checking process names/debugger presence, collecting loaded-module/certificate metadata, and preparing results for network handoff. They do not establish that those paths ran for this account, successful upload, backend retention, or an exhaustive inventory of PC data processing. No additional collection should be claimed merely because it is included conditionally in the draft below.

## Legal basis and limits checked against primary sources

- Article15 covers access to personal data concerning the requester and associated processing information; Article12 covers response handling. Related transparency questions can be raised under Articles13/14 as applicable. The ordinary response period is one month, with the statutory extension procedure where applicable. [GDPR text](https://eur-lex.europa.eu/eli/reg/2016/679/oj/eng)
- EDPB Guidelines01/2022, Example37, specifically address gaming anti-cheat. Stored cheating information relevant to account restrictions can be accessible, while genuine technical trade secrets can be protected after the required assessment. Paragraphs37–39 address the time of the request, unavailable/deleted records, and avoiding deliberate erasure to escape access. Paragraph99 includes derived/inferred personal data. [EDPB guidance](https://www.edpb.europa.eu/system/files/documents/2023-04/edpb_guidelines_202201_data_subject_rights_access_v2_en.pdf#page=54)
- A copy must reproduce the relevant personal data faithfully and intelligibly. Contextual document/database extracts may be necessary; an automatic entitlement to every full internal document does not follow. [CJEU C-487/21](https://curia.europa.eu/site/upload/docs/application/pdf/2023-05/cp230071en.pdf)
- Specific recipient identities can be requested, subject to the conditions/exceptions explained by the Court. [CJEU C-154/21](https://curia.europa.eu/site/upload/docs/application/pdf/2023-01/cp230004en.pdf)
- Star Stable provides privacy@starstable.com for personal-data information requests. A generic privacy-policy description does not establish what a particular account's stored records contain. [Official privacy policy](https://www.starstable.com/en/privacy)

This is a practical request draft, not a conclusion that every listed category exists or must be disclosed without qualification. Personal data linked to an account/session/device is the focus. Generic source code, global detector rules, genuinely anonymous information and records no longer available are different issues. A category's absence from an export warrants clarification, not an assumption that hidden records necessarily exist.

## Ready-to-send new request

To: privacy@starstable.com

Subject: GDPR Article 15 data access request — complete account data and PC technical/security telemetry

Dear Star Stable Privacy Team / Data Protection Officer,

I am making a new request under Article 15 GDPR concerning my Star Stable account [registered email / customer ID]. Please confirm whether you process personal data concerning me and provide a copy of all such personal data, together with the accompanying information required by Article 15. Please provide related transparency information under Articles 13 and 14 where applicable and handle this request in accordance with Article 12.

This request covers all personal data concerning me, including data linked through account, customer, device, session, report, event or other pseudonymous identifiers that you can associate with me. Please include both data I supplied and data observed, generated, inferred or derived in relation to me. The categories below clarify the scope; they are not an exhaustive limitation of the request or an assertion that every listed category is collected.

Please cover the personal data you process when you receive this request, including retained historical records from account creation up to that date. Search relevant account, customer-service, game, client-integrity/security, telemetry, connection, crash-reporting, support/enforcement, marketing and analytics/archive systems, including records processed by service providers acting on your behalf. Please explain how these areas were covered, using an appropriate level of detail that does not expose infrastructure security.

Please provide a copy of the actual personal-data values, with dates, associations and intelligible descriptions, for the following categories wherever they exist:

1. GENERAL ACCOUNT, GAME AND CUSTOMER RECORDS
Registration/profile details, account identifiers and settings, consent/privacy-preference records, login and session histories, subscription/purchase/payment-related records you process, game progress, inventory and activity records, communications involving me, customer-support correspondence, relevant moderation/reporting records, and marketing/analytics data concerning me. Include any other personal data concerning me outside the more detailed technical categories below. Where records also contain information about others, please consider proportionate redaction while providing my accessible personal data.

2. CLIENT INTEGRITY / SECURITY REPORTS
Personal data contained in retained integrity, anti-cheat, fraud-prevention or security reports associated with me. Include event/collection/receipt timestamps where held, relevant client version, report/event identifiers, recorded status or result indicators, reported client/player context, and retained report contents. Include raw and derived versions where both are held, with explanations sufficient to understand codes and values.

3. WINDOWS AND RUNNING SOFTWARE
Any recorded window titles, window-class names, running-process/executable names and related match outcomes. Include any associated process identifiers, paths, versions or other metadata if recorded. Please distinguish actual names or titles retained from a simple positive/negative match indicator; include the actual indicator and any software classification attributed to my account/session. This includes any recorded classification involving Cheat Engine or other third-party software, if one exists.

4. LOADED MODULES / DLLS
Any recorded module/DLL filenames, paths and versions, and any certificate serial numbers, signer/certificate information, hashes, fingerprints, signature/trust results or other module attributes if recorded as part of observations associated with me. Include any classification of an OpenGL proxy or other injected/third-party module attributed to my account/session, if held. I am requesting my recorded observations and assessments, rather than a general software-signature database.

5. DEBUGGER / CLIENT-MODIFICATION INDICATORS
Any retained debugger-presence, modified-client, integrity-failure, instrumentation or similar indicators associated with me, including positive and negative results if held, their dates and an intelligible explanation of the recorded outcome.

6. DEVICE / SESSION / CONNECTION LINKAGES
Device identifiers or fingerprints, pseudonymous identifiers, session/connection identifiers, IP/login records, operating-system/hardware/client-version information, and the linkages used to associate security/telemetry events with my account, where processed. Include relevant PC-client diagnostic, performance and input/behavioural telemetry associated with me if held. This includes other PC-client personal data in this area even if not specifically named above.

7. CRASH / ERROR REPORTING
Personal data concerning me in crash/error/performance records, including Sentry/Crashpad records or equivalent systems if used for my sessions. Include report IDs, timestamps, user/session/device associations, breadcrumbs, stack/module information, retained attachments and personal data contained in process-memory/crash snapshots where held. An intelligible extract is acceptable where needed to protect unrelated data or rights of others.

8. DERIVED ASSESSMENTS / ENFORCEMENT RECORDS
Any inferred or derived software-use classifications, suspicion/integrity/fraud scores, account flags, review outcomes, decision histories, and personal data concerning me in relevant internal review/support notes, including records of pending or completed account restrictions if held. Where a record reflects alleged third-party software use, provide the retained personal evidence and intelligible recorded conclusion, subject to lawful restrictions. If an applicable solely automated decision within Article22 was used, provide the information required by Article15(1)(h).

For these categories, please also clarify the following:

- Which categories are read/processed only on the PC, which are transmitted, which are processed transiently, and which are retained. Please distinguish collection capability from processing actually performed in relation to me, to the extent you can establish this from available information.
- The processing purposes; the applicable lawful basis as related transparency information; data sources where relevant; retention periods or criteria; recipients, including their actual identities where applicable; and the applicable information about international-transfer safeguards.
- Where records are pseudonymised or hashed but can still be associated with me, include them and explain the relevant identifier relationships. Please provide the data in an intelligible electronic form; CSV/JSON with a field legend would be useful for structured records.

For each category absent from the response, please clarify, to the extent the information is available, whether it was never processed in relation to me, processed only transiently, never transmitted, not retained, deleted, genuinely anonymised, excluded from the search, or withheld. Where requested information is no longer available, please explain the applicable retention/deletion position using available information rather than reconstructing unavailable data.

If access is restricted in whole or in part, please identify the specific legal basis, explain how it applies to the particular information, identify the affected categories, and provide the remaining accessible personal data with proportionate redaction where possible. Please distinguish my actual recorded data/outcomes from technical anti-cheat operating details protected by a substantiated restriction. Please include the applicable complaint/remedy information.

Please confirm receipt, the scope of your search and when your response will be provided. If an extension is necessary, please give the reasons and notification required by Article 12(3). I am requesting access only; this does not request account closure or erasure.

Yours sincerely,
[name]
[registered email / customer ID]

## If the response is incomplete

Retain this request and their response/export. If resident in the Netherlands, the Autoriteit Persoonsgegevens explains how to raise an incomplete access response after first following up with the organisation. Other supervisory-authority routes may apply according to residence/workplace and the circumstances. [AP access guidance](https://autoriteitpersoonsgegevens.nl/nl/zelf-doen/privacyrechten/recht-op-inzage)

No request was submitted by the assistant. No actual account identifiers or the user's private response are included in this template. This drafting work did not alter the game, native module, presets or disabled workflow.
