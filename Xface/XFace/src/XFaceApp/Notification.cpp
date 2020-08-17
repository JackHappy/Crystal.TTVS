/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Xface Core Library; XFaceApp.
 *
 * The Initial Developer of the Original Code is
 * ITC-irst, TCC Division (http://tcc.itc.it) Trento / ITALY.
 * For info, contact: xface-info@itc.it or http://xface.itc.it
 * Portions created by the Initial Developer are Copyright (C) 2004
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 * - Koray Balci (koraybalci@yahoo.com)
 * ***** END LICENSE BLOCK ***** */
#include <XFaceApp/Notification.h>

namespace XFaceApp{

Notification::Notification(const std::string& name, unsigned short owner, unsigned int task)
		: m_name(name), m_ownerId(owner), m_taskId(task), m_status(kUnknown)
{
	// nothing to do here, go away! :)
}
		
Notification::Notification(const Task& task, const TaskStatus& status)
{
	m_name		= task.getName();
	m_ownerId	= task.getOwnerID();
	m_taskId	= task.getID();
	m_status	= status;
}

} // namespace XFaceApp