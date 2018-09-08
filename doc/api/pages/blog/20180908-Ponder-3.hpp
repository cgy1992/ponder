/**

\page blog_ponder_3 Ponder 3.x Release Notes

\tableofcontents

\section ponder_3_0 3.0 Release Notes

_date: 2018-09-08_

\subsection refactor3 Extensive refactoring of the API.

internal refactoring

\subsection userobj_ref_semantics Changed UserObject reference semantics. Pointer makes a reference.

ref/pointer different

\subsection common_ancestor_type All types have common ancestor: Type.

\subsection userdata_added Added UserData per Type. (#98)

\subsection serialisation_refactor Refactored serialisation. Removed ponder-xml. (#43).

- Added RapidJSON for use by JSON serialiser (#43).
- Added RapidXML for use by XML serialiser (#43).

\subsection  Remove dynamic read/write attribute from properties. (#91)

\subsection tagholder_removed Remove TagHolder. (#92)

\subsection classbyindex_removed Removed `ponder::classByIndex()`.

Use `ponder::classIterator()` instead.

\subsection cmake_project_rename Cmake project name changed to "ponder" to match namespace (#95).

\subsection composed_prop_getter_removed Removed composed property getter

Use lambdas instead. See property test p14-p17.

*/